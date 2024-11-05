# Bookstore Inventory Management System

## Description
This project is a C++ program designed to manage a public bookstore's inventory. It allows bookstore staff to add, find, update, and remove books efficiently. The system keeps track of each book’s title, author, ISBN, and quantity, providing an organized way to manage inventory.

## Features
- **Add Books**: Add new books to the inventory or update the quantity of an existing book.
- **Find Books**: Search for a book by ISBN.
- **Display Inventory**: View all books in the inventory with details such as title, author, ISBN, and quantity.
- **Remove Books**: Remove a book from the inventory by ISBN.

## Project Structure
The project is organized into three files:
1. **Store.h** - Contains the structure definitions for `Book` and `Store`, as well as function declarations.
2. **Store.cpp** - Implements the functions declared in `Store.h`.
3. **main.cpp** - The main program file that demonstrates the functionality of the `Store` class.

## Code Overview

### Book Structure (`Book`)
- Represents a book with attributes:
  - `title` (string)
  - `author` (string)
  - `isbn` (string)
  - `quantity` (int)
- Overloads the `==` operator to compare books by ISBN.

### Store Structure (`Store`)
- Represents the bookstore with attributes:
  - `name` (string)
  - `address` (string)
  - `inventory` (vector<Book>)
- Key Functions:
  - `addBook`: Adds a new book to the inventory or updates the quantity if it already exists.
  - `findBook`: Searches for a book by ISBN and returns a pointer to it if found.
  - `displayInventory`: Lists all books in the inventory.
  - `removeBook`: Removes a book from the inventory by ISBN.

License

This project is open-source and available for personal and educational use.
