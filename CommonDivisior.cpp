//This program finds out whether the two numbers received from the user have a common divisor

#include <iostream>

using namespace std;

int main() {

	int num1, num2, max;

	cout << "please enter first number: " << endl;
	cin >> num1;
	cout << "please enter second number: " << endl;
	cin >> num2;

	if (num1 < num2) {
		max = num2;
	}
	else {
		max = num1;
	}

	int i = 2;
	int counter = 0;

	while (i<=max) {
		
		if (num1%i==0 && num2%i==0) {

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
