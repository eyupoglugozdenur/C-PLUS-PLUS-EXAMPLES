//This program finds out whether the two numbers received from the user have a common divisor

#include <iostream>

using namespace std;

int main() {

	int num1, num2, min, max;

	cout << "please enter first number: " << endl;
	cin >> num1;
	cout << "please enter second number: " << endl;
	cin >> num2;

	if (num1 < num2) {
		min = num1;
		max = num2;
	}
	else {
		min = num2;
		max = num1;
	}

	int i = 2;
	int counter = 0;

	while (i<=max) {
		
		if (min%i==0 && max%i==0) {

			cout << " Common divisor: " << i << endl;
			counter += 1;
		}
		
		i += 1;

	}

	if (counter == 0) {
		cout << "There's no common divisior!" << endl;
	}
	

	return 0;
}

