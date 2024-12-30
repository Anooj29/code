#include <iostream>
using namespace std;

class shopping {
private:
    double Rate;

public:
    shopping() {
        Rate = 0;
    }

    shopping(double price) {
        Rate = price;
    }

    shopping operator + (const shopping &item) {
        shopping shop_1;
        shop_1.Rate = this->Rate + item.Rate;
        return shop_1;
    }

    void displayTotal() {
        cout << "Total Price is: Rs " << Rate << endl;
    }
};

int main() {
    shopping product1(25.50);
    shopping product2(40.75);

    shopping totalCart = product1 + product2;

    totalCart.displayTotal();

    return 0;
}
