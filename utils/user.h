//
// Created by Magnus Lam on 17/8/2022.
//

#ifndef LIBRARY_SERVER_USER_H
#define LIBRARY_SERVER_USER_H

#include <string>
#include <utility>
#include <vector>
#include "book.h"

struct User {
    User(std::string name, int id, int balance) : name_(std::move(name)), id_(id), balance_(balance) {}
    int balance_;
    int id_;
    std::string name_;
};

#endif //LIBRARY_SERVER_USER_H
