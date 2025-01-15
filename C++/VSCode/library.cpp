#include<iostream>
#include<vector>
#include<string>

using namespace std;

struct Book {
    int id;
    string tittle;
    string author;
    int year;
};

class Library {
private: 
    vector<Book> books; 
    int next_id;

public:
    Library(): next_id(1) {}

    void addBook(const string &title, const string &author, int year) {
        books.push_back({next_id++, title, author, year});
        cout << "Books added succesfully!\n";
    }

};

class 