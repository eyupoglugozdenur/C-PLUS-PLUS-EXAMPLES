// This program prints the divisors of a number that the user enters from the keyboard

#include <iostream>

using namespace std;

int main ()
{
	int number, i, islem;
	cout << "Please enter a number: " << endl;
	cin >> number;


	i = number;
	while (i>1) {
		
	
		islem = number%i;

		if (islem == 0) {
			cout << "divisior: "<< i << endl;
		
		}
		

		i -= 1;
	}


	return 0;
}