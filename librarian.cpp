//
// Created by Magnus Lam on 17/8/2022.
//

#include "librarian.h"

#include <utility>

bool librarian::RentBook(User &user, Book &book) {
    if (!book.available_) {
        return false;
    }
    book_rental_records_.emplace_back(book, user);
    book.available_ = false;
    return true;
}

void librarian::ReturnBook(User &user, Book &book) {
    auto matched_record_iterator = std::find_if(book_rental_records_.begin(), book_rental_records_.end(), [&] (const BookRentalRecord& record) {
        return record.book_.id_ == book.id_ && record.user_.id_ == user.id_;
    });
    if (matched_record_iterator == book_rental_records_.end()) return;
    if (matched_record_iterator->IsOverdue()) {
        user.balance_ -= 100;
    }
    book.available_ = true;
    book_rental_records_.erase(matched_record_iterator);
}

librarian::librarian(std::string name) : name_(std::move(name)) {}
