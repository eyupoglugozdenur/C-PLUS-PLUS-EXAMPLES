// This program finds the Greatest Common Divisor of the 3 numbers that the user enters from the keyboard


#include <iostream>

using namespace std;

int main() {

	int num1, num2, num3, min, counter=0;

	cout << "Please enter three number: " << endl;
	cin >> num1 >> num2 >> num3;

	min = num1;

	if (num2 < min) {
		min = num2;
	}
	if (num3 < min) {
		min = num3;
	}
	
	int i = min;

	while (i > 1) {

		if (num1 % i == 0 && num2 % i == 0 && num3%i == 0) {

			cout << "Greatest Common Divisor: " << i << endl;
			counter +=1;
			break;
		}

		i -= 1;
	}

	if (counter == 0) {
		cout << "There's no common divisor!" << endl;
	}
	return 0;
}