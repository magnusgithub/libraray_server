#include <iostream>
#include "utils/user.h"
#include "librarian.h"

int main() {
    User user_a("Magnus", 1, 100);
    Book book_a("Effective C++", 1, BookCategory::kSciFi, true);
    librarian librarian_a("David");
    librarian_a.RentBook(user_a, book_a);
    for(const auto& record: librarian_a.getBookRentalRecords()) {
        std::cout << record.user_.name_ << " rent " << record.book_.name_ << '\n';
    }
    librarian_a.ReturnBook(user_a, book_a);
    for(const auto& record: librarian_a.getBookRentalRecords()) {
        std::cout << record.user_.name_ << " rent " << record.book_.name_ << '\n';
    }
    return 0;
}
