//
// Created by Magnus Lam on 17/8/2022.
//

#ifndef LIBRARY_SERVER_LIBRARIAN_H
#define LIBRARY_SERVER_LIBRARIAN_H


#include <string>
#include "utils/book_rental_record.h"

class librarian {
public:
    explicit librarian(std::string name);
    bool RentBook(User& user, Book& book);
    void ReturnBook(User& user, Book& book);
    [[nodiscard]] const std::vector<BookRentalRecord>& getBookRentalRecords() const {
        return book_rental_records_;
    }
    std::string name_;
private:
    std::vector<BookRentalRecord> book_rental_records_;
};


#endif //LIBRARY_SERVER_LIBRARIAN_H
