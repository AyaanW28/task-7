#include <iostream>
#include <iomanip>
using namespace std;
int main()
{
	//Ayaan Waseem - L1F26BSCS0111
	int n, factorial=1, base, exponent, power=1, counter = 1;
	//PART A
	cout << "Enter n (0-12): ";
	cin >> n;
	if (n >= 0)
	{
		if (n <= 12)
		{
			while (counter <= n)
			{
				factorial = factorial * counter;
				counter++;
			}
		}
		else {
			cout << "Too large: enter 12 or less.";
			return 0;
		}
	}
	else {
		cout << "Invalid: n can not be negative.";
		return 0;
	}
	cout << "Factorial of " << n << " = " << factorial << endl;

	//PART B 
	cout << "Enter base: ";
	cin >> base; 
	cout << "Enter exponent: ";
	cin >> exponent;
	if (exponent < 0)
	{
		cout << "Invalid exponent.";
		return 0;
	}
	counter = 1;

	while (counter <= exponent)
	{
		power = base * power;
			counter++;
	}
	cout << base << " raised to " << exponent << " = " << power;
	return 0;
}