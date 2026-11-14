#include <iostream>
#include <iomanip>
using namespace std;
int main()
{
	//Ayaan Waseem - L1F26BSCS0111
	int number, temp, digit, reversed = 0;
	cout << "Enter a positive number: ";
	cin >> number;
	if (number < 0)
	{
		cout << "Invalid number.";
		return 0;
	}
	temp = number;
	while (temp > 0)
	{
		digit = temp % 10;
		reversed = reversed * 10 + digit;
		temp = temp / 10;

	}
	cout << "Reversed number: " << reversed << endl;
	if (reversed == number)
	{
		cout << reversed << " is a palindrome.";
	}
	else cout << reversed << " is not a palindrome";
	return 0;
}