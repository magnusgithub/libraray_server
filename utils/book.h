//
// Created by Magnus Lam on 17/8/2022.
//

#ifndef LIBRARY_SERVER_BOOK_H
#define LIBRARY_SERVER_BOOK_H

#include <string>
#include <utility>
#include "book_category.h"

struct Book {
    Book(std::string name, int id, BookCategory category, bool available) : name_(std::move(name)), id_(id),
                                                                            category_(category),
                                                                            available_(available) {}
    int id_;
    bool available_;
    std::string name_;
    BookCategory category_;
};
#endif //LIBRARY_SERVER_BOOK_H
