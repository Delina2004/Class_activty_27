// Store.h
#ifndef STORE_HPP
#define STORE_HPP

#include <string>
#include <vector>

using namespace std;

struct Book {
   string title;
    string author;
    string isbn;
    int quantity;

    bool operator==(const Book& other) const;
};


struct Store {
    string name;
    string address;
    vector<Book> inventory;

    Store(const string& storeName, const string& storeAddress);

    void addBook(const Book& newBook);
    Book* findBook(const string& isbn);
    void displayInventory() const;
    void removeBook(const string& isbn);
};

#endif
