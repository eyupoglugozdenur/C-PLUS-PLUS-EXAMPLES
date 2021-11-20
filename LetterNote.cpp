#include <iostream>

using namespace std;

int main()
{
	int note;
	cout << "Please enter your exam note: ";
	cin >> note;

	if (80 < note)
	{
		cout << "Your note is A" << endl;
	}
	else if (60 < note)
	{
		cout << "Your note is B" << endl;
	}
	else if (40 < note)
	{
		cout << "Your note is C" << endl;
	}
	else if (20 < note)
	{
		cout << "Your note is D" << endl;
	}
	else
	{
		cout << "Your note is F" << endl;
	}
	return 0;
}