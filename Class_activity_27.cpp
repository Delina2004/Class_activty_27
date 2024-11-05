#include "Store.hpp"
#include <iostream>
using namespace std;

int main() {
    Store bookstore("Public Bookstore", "171 Alameda");

    // Adding books
    bookstore.addBook({ "Number the Stars", "F. Scott Fitzgerald", "123456789", 5 });
    bookstore.addBook({ "1984", "George Orwell", "987654321", 3 });
    bookstore.addBook({ "Number the Stars", "F. Scott Fitzgerald", "123456789", 2 }); 

    // Finding a book
    Book* foundBook = bookstore.findBook("123456789");
    if (foundBook) {
        cout << "Found book: " << foundBook->title << " by " << foundBook->author << endl;
    }

    bookstore.displayInventory();

    // Removing a book
    bookstore.removeBook("987654321");
    bookstore.displayInventory(); 

    return 0;
}
