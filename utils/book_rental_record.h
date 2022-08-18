//
// Created by Magnus Lam on 17/8/2022.
//

#ifndef LIBRARY_SERVER_BOOK_RENTAL_RECORD_H
#define LIBRARY_SERVER_BOOK_RENTAL_RECORD_H

#include <utility>

#include "book.h"
#include "user.h"

struct BookRentalRecord {
    BookRentalRecord(Book book, User user) : book_(std::move(book)), user_(std::move(user)), rented_date_time_(time(nullptr)) {}
    [[nodiscard]] bool IsOverdue() const {
        return difftime(rented_date_time_, time(nullptr)) > 1e5;
    }
    Book book_;
    User user_;
    time_t rented_date_time_;
};

#endif //LIBRARY_SERVER_BOOK_RENTAL_RECORD_H
