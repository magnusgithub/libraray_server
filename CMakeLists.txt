cmake_minimum_required(VERSION 3.17)
project(library_server)

set(CMAKE_CXX_STANDARD 20)

add_executable(library_server main.cpp librarian.cpp librarian.h utils/book.h utils/book_category.h utils/user.h utils/book_rental_record.h)