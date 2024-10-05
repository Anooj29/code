#include<iostream>
int main() {
	int n;
	std::cout << "Enter number of rows: ";
	std::cin >> n;

	for (int i = n; i >= 1; i--) {
		for (int j = 1; j <= i; j++) {
			std::cout << "*";
		}
		std::cout << "\n";
	}
	for (int k = 1; k <= n; k++) {
		for (int m = 2; m <= k; m++) {
			std::cout << "*";
		}
		std::cout << '\n';
	}
}