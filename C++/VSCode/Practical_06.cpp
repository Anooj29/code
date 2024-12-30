#include <iostream>
using namespace std;

// Single Inheritance
class Base {
public:
    void showBase() {
        cout << "First class" << endl;
    }
};

class Deriveo1ingle : public Base {
public:
    void showDeriveo1ingle() {
        cout << "from first class" << endl;
    }
};

// Multiple Inheritance
class ClassA {
public:
    void showA() {
        cout << "Class A" << endl;
    }
};

class ClassB {
public:
    void showB() {
        cout << "Class B" << endl;
    }
};

class Deriveo2ultiple : public ClassA, public ClassB {
public:
    void showDeriveo2ultiple() {
        cout << "from Class A and Class B (Multiple Inheritance)" << endl;
    }
};

// Multilevel Inheritance
class Intermediate : public Base {
public:
    void showIntermediate() {
        cout << "from first class (Multilevel Inheritance)" << endl;
    }
};

class Deriveo2ultilevel : public Intermediate {
public:
    void showDeriveo2ultilevel() {
        cout << "from Intermediate (Multilevel Inheritance)" << endl;
    }
};

int main() {
    Deriveo1ingle o1;
    o1.showBase();
    o1.showDeriveo1ingle();

    Deriveo2ultiple o2;
    o2.showA();
    o2.showB();
    o2.showDeriveo2ultiple();

    Deriveo2ultilevel o3;
    o3.showBase();
    o3.showIntermediate();
    o3.showDeriveo2ultilevel();

    return 0;
}
