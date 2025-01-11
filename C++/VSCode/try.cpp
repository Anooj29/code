#include <iostream>
#include <vector>
#include <string>
using namespace std;

// Structure to represent a book
struct Book {
    int id;
    string title;
    string author;
    int year;
};

// Class to manage the library
class Library {
private:
    vector<Book> books;
    int next_id;

public:
    Library() : next_id(1) {}

    // Add a new book to the library
    void addBook(const string &title, const string &author, int year) {
        books.push_back({next_id++, title, author, year});
        cout << "Book added successfully!\n";
    }

    // Display all books in the library
    void displayBooks() const {
        if (books.empty()) {
            cout << "No books in the library.\n";
            return;
        }

        cout << "\nBooks in the Library:\n";
        for (const auto &book : books) {
            cout << "ID: " << book.id << ", Title: " << book.title
                 << ", Author: " << book.author << ", Year: " << book.year << endl;
        }
    }

    // Search for a book by title
    void searchBookByTitle(const string &title) const {
        for (const auto &book : books) {
            if (book.title == title) {
                cout << "\nBook Found:\n";
                cout << "ID: " << book.id << ", Title: " << book.title
                     << ", Author: " << book.author << ", Year: " << book.year << endl;
                return;
            }
        }
        cout << "\nBook not found.\n";
    }

    // Delete a book by ID
    void deleteBookById(int id) {
        for (auto it = books.begin(); it != books.end(); ++it) {
            if (it->id == id) {
                books.erase(it);
                cout << "Book deleted successfully!\n";
                return;
            }
        }
        cout << "Book with ID " << id << " not found.\n";
    }
};

int main() {
    Library library;
    int choice;

    do {
        cout << "\nLibrary Management System\n";
        cout << "1. Add Book\n";
        cout << "2. Display Books\n";
        cout << "3. Search Book by Title\n";
        cout << "4. Delete Book by ID\n";
        cout << "5. Exit\n";
        cout << "Enter your choice: ";
        cin >> choice;

        switch (choice) {
        case 1: {
            cin.ignore(); // Clear input buffer
            string title, author;
            int year;
            cout << "Enter book title: ";
            getline(cin, title);
            cout << "Enter book author: ";
            getline(cin, author);
            cout << "Enter publication year: ";
            cin >> year;
            library.addBook(title, author, year);
            break;
        }
        case 2:
            library.displayBooks();
            break;
        case 3: {
            cin.ignore(); // Clear input buffer
            string title;
            cout << "Enter book title to search: ";
            getline(cin, title);
            library.searchBookByTitle(title);
            break;
        }
        case 4: {
            int id;
            cout << "Enter book ID to delete: ";
            cin >> id;
            library.deleteBookById(id);
            break;
        }
        case 5:
            cout << "Exiting...\n";
            break;
        default:
            cout << "Invalid choice. Try again.\n";
        }
    } while (choice != 5);

    return 0;
}
