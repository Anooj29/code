#include<iostream>
int main() {
	int n;

	std::cout << "Enter number of Rows: ";
	std::cin >> n;

	for (int i = n; i >= 1; i--) {
		for (int j = 1; j <= i; j++) {
			std::cout << "*";
		}
		std::cout << "\n";
	}
}