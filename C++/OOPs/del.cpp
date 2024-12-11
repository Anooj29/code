#include <iostream>
#include <vector>
#include <string>
using namespace std;

class Book{
private:
    string title;
    string author;
    bool isIssued;

public:
    Book(string t, string a) : title(t), author(a), isIssued(false){}

    void displayDetails(){
        cout << "Title: " << title << ", Author: " << author 
        << ", Status: " << (isIssued ? "Issued": "Available") << endl;e
    }

    bool issueBook(){
        if (!isIssued){
            isIssued = true;
            return true;
        }
        return false;
    }
}