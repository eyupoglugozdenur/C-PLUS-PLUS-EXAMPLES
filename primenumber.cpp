// This program determines whether a number entered by the user via the keyboard is a prime number, and if it is a prime number, prints the prime multipliers on the screen.

#include <iostream>

using namespace std;

int main() {

	int number, i, islem;

	cout << "Please enter a number: " << endl;
	cin >> number;

	i = number - 1;
	while (i > 1) {

		islem = number % i;
		if (islem == 0) {

			cout << "This number is not a prime number!" << endl;
			return 0;
		}

		else {
			cout << "divisiors: " << number <<" and 1" << endl;
		}
		i -= 1;


		return 0;
	}
}