#include <iostream>
using namespace std;

class Student {
private:
    string name;
    int Roll_Num;
    int Math_Marks;
    int Sci_Marks;
    int Eng_Marks;

public:

    Student(string studentName, int rollNum, int mathMarks, int scienceMarks, int englishMarks) {
        name = studentName;
        Roll_Num = rollNum;
        Math_Marks = mathMarks;
        Sci_Marks = scienceMarks;
        Eng_Marks = englishMarks;
    }

    int Total_Marks() {
        return Math_Marks + Sci_Marks + Eng_Marks;
    }
    float Avg_Mark() {
        return Total_Marks() / 3.0;
    }


    void displayDetails() {
        cout << "Name: " << name << endl;
        cout << "Roll Number: " << Roll_Num << endl;
        cout << "Math Marks: " << Math_Marks << endl;
        cout << "Science Marks: " << Sci_Marks << endl;
        cout << "English Marks: " << Eng_Marks << endl;
        cout << "Total Marks: " << Total_Marks() << endl;
        cout << "Average Marks: " << Avg_Mark() << endl;
    }
};

int main() {
   
    Student student1("Ramesh", 01, 90, 90, 90);
    student1.displayDetails();

    return 0;
}
