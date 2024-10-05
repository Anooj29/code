#include<iostream>
int main() {
	int n;

	std::cout << "Enter number of Rows: ";
	std::cin >> n;

	for (int i = 1; i <= n; i++) {
		for (int j = 1; j >= 1; j--) {
			std::cout << "*";
		}
		std::cout << "\n";
	}
}