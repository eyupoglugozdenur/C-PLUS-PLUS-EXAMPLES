//This program displays all the prime numbers within a certain range of numbers the user enters from the keyboard

#include <iostream>

using namespace std;

int main() {

	int lowerLimit, upperLimit;
	do {
		cout << "please enter Lower Limit: " << endl;
		cin >> lowerLimit;
		cout << "Please Enter Upper Limit: " << endl;
		cin >> upperLimit;
	} while (upperLimit < lowerLimit);


	for (int i= lowerLimit;i<=upperLimit;i++) {

		int j=i-1;
		int islem;

		while (j>1) {

			islem = i % j;


			if (islem==0) {
				break;

			}

			j -= 1;

			if (j == 1) {
				cout << "Prime number: "<< i << endl;
			}
		}	

	}
}