#include <iostream>
#include <iomanip>
using namespace std;
int main()
{
	//Ayaan Waseem - L1F26BSCS0111
	int number, temp, digit, digitCount=0, digitSum=0, evenCount=0, oddCount=0;
	cout << "Enter a positive Number: ";
	cin >> number;
	if (number < 0)
	{
		cout << "Invalid number.";
		return 0;
	}

	temp = number;
	cout << "Number: " << number << endl;
	while (temp > 0)
	{
		digit = temp % 10;
		digitCount++;
		digitSum = digitSum + digit;
		if (digit % 2 == 0)
			evenCount++;
		else
			oddCount++;
		temp = temp / 10;
	}
	cout << "Number of digits: " << digitCount << "\nSum of digits: " << digitSum << "\nEven Digits: " << evenCount << "\nOdd digits: " << oddCount;
	return 0;
}