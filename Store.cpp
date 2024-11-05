#include "Store.hpp"
#include <iostream>

using namespace std;

bool Book::operator==(const Book& other) const {
    return isbn == other.isbn;
}

// Store constructor
Store::Store(const string& storeName, const string& storeAddress)
    : name(storeName), address(storeAddress) {}

void Store::addBook(const Book& newBook) {
    for (Book& book : inventory) {
        if (book == newBook) { 
            book.quantity += newBook.quantity; 
            cout << "Updated quantity for book: " << book.title << endl;
            return;
        }
    }
    inventory.push_back(newBook); 
    cout << "Added new book: " << newBook.title << endl;
}

// Function to find a book by ISBN
Book* Store::findBook(const string& isbn) {
    for (Book& book : inventory) {
        if (book.isbn == isbn) {
            return &book;
        }
    }
    cout << "Book with ISBN " << isbn << " not found." << endl;
    return nullptr;
}


void Store::displayInventory() const {
    cout << "\nInventory of " << name << ":\n";
    if (inventory.empty()) {
        cout << "No books in inventory.\n";
        return;
    }
    for (const Book& book : inventory) {
        cout << "Title: " << book.title
            << "\nAuthor: " << book.author
            << "\nISBN: " << book.isbn
            << "\nQuantity: " << book.quantity << "\n\n";
    }
}


void Store::removeBook(const string& isbn) {
    for (auto it = inventory.begin(); it != inventory.end(); ++it) {
        if (it->isbn == isbn) {
            cout << "Removing book: " << it->title << endl;
            inventory.erase(it);
            return;
        }
    }
    cout << "Book with ISBN " << isbn << " not found in inventory.\n";
}
