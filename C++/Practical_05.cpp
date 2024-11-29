#include <iostream>
using namespace std;

class Square {
private:
    int side;

public:
    Square(int s) : side(s) {}

    void showSide() const {
        cout << "Side of Square: " << side << endl;
    }

    friend class Rectangle;
};

class Rectangle {
private:
    int length;
    int width;

public:
    Rectangle(int l, int w) : length(l), width(w) {}

    void showDimensions() const {
        cout << "Rectangle - Length: " << length << ", Width: " << width << endl;
    }

    int area() const {
        return length * width;
    }

    void changeSquare(Square& sq, int newSide) {
        sq.side = newSide;
    }

    void makeFromSquare(const Square& sq) {
        length = sq.side;
        width = sq.side;
    }
};

int main() {
    Square sq(5);
    sq.showSide();

    Rectangle rect(10, 4);
    rect.showDimensions();

    rect.changeSquare(sq, 8);
    cout << "After change by Rectangle:" << endl;
    sq.showSide();

    rect.makeFromSquare(sq);
    cout << "Rectangle from Square:" << endl;
    rect.showDimensions();

    cout << "Area of Rectangle: " << rect.area() << endl;

    return 0;
}
