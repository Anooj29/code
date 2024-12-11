#include <iostream>
#include <vector>
#include <string>
using namespace std;

// Book class
class Book {
private:
    string title;
    string author;
    bool isIssued;

public:
    // Constructor
    Book(string t, string a) : title(t), author(a), isIssued(false) {}

    // Display book details
    void displayDetails() {
        cout << "Title: " << title << ", Author: " << author
             << ", Status: " << (isIssued ? "Issued" : "Available") << endl;
    }

    // Issue book
    bool issueBook() {
        if (!isIssued) {
            isIssued = true;
            return true;
        }
        return false;
    }

    // Return book
    void returnBook() {
        isIssued = false;
    }

    // Check if the book is issued
    bool getIssuedStatus() {
        return isIssued;
    }

    // Get book title
    string getTitle() {
        return title;
    }
};

// User class
class User {
private:
    string name;
    int userId;
    vector<Book*> borrowedBooks; // Vector of pointers to borrowed books

public:
    // Constructor
    User(string n, int id) : name(n), userId(id) {}

    // Borrow a book
    void borrowBook(Book& book) {
        if (!book.getIssuedStatus()) {
            book.issueBook();
            borrowedBooks.push_back(&book);
            cout << "Book \"" << book.getTitle() << "\" borrowed successfully.\n";
        } else {
            cout << "Book \"" << book.getTitle() << "\" is already issued.\n";
        }
    }

    // Return a book
    void returnBook(Book& book) {
        for (auto it = borrowedBooks.begin(); it != borrowedBooks.end(); ++it) {
            if (*it == &book) {
                book.returnBook();
                borrowedBooks.erase(it);
                cout << "Book \"" << book.getTitle() << "\" returned successfully.\n";
                return;
            }
        }
        cout << "You haven't borrowed this book.\n";
    }

    // Display borrowed books
    void displayBorrowedBooks() {
        cout << "Books borrowed by " << name << ":\n";
        if (borrowedBooks.empty()) {
            cout << "No books borrowed.\n";
        } else {
            for (Book* book : borrowedBooks) {
                book->displayDetails();
            }
        }
    }
};

int main() {
    // Create some books
    Book book1("The Great Gatsby", "F. Scott Fitzgerald");
    Book book2("To Kill a Mockingbird", "Harper Lee");
    Book book3("1984", "George Orwell");

    // Create a user
    User user("Alice", 101);

    // Display initial book details
    cout << "Available books:\n";
    book1.displayDetails();
    book2.displayDetails();
    book3.displayDetails();

    cout << endl;

    // Borrow and return books
    user.borrowBook(book1);
    user.borrowBook(book2);
    user.displayBorrowedBooks();

    cout << endl;

    user.returnBook(book1);
    user.displayBorrowedBooks();

    cout << endl;

    // Display final book details
    cout << "Final status of books:\n";
    book1.displayDetails();
    book2.displayDetails();
    book3.displayDetails();

    return 0;
}
