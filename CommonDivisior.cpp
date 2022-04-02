//This program finds out whether the two numbers received from the user have a common divisor

#include <iostream>

using namespace std;

int main() {

	int num1, num2, max;

	cout << "Please enter first number: " << endl;
	cin >> num1;
	cout << "Please enter second number: " << endl;
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

			cout << " Common divsor: " << i << endl;
			counter += 1;
		}
		
		i += 1;

	}

	if (counter == 0) {
		cout << "There's no common divisor!" << endl;
	}
	

	return 0;
}
