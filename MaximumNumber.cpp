//This program finds the largest of the 3 integers that the user will enter from the keyboard, and write it on the screen

#include <iostream>

using namespace std;

int main() {

	int num1, num2, num3, max;

	cout << "please enter three number" << endl;
	cin >> num1 >> num2 >> num3;

	max = num1;

	if (num2 > max) {
		max = num2;
	}
	if (num3>max){

		max = num3;
	}
	
	cout << "Maximum number is: " << max << endl;

	return 0;
}

