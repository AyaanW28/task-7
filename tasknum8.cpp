#include <iostream>
using namespace std;
int main()
{
	//Ayaan Waseem - L1F26BSCS0111
	//Part A
	int number, divisor=2, divisorCount=0;
	cout << "Enter a number to check: ";
	cin >> number;
	if (number < 1)
	{
		cout << "Invalid: enter a number greater than 1";
		return 0;
	}
	while (divisor <= number-1)
	{
		if (number % divisor==0)
			divisorCount++;
		divisor++;
	}
	if (divisorCount == 0)
	{
		cout << number << " is a prime number.";
		}
	else {
		cout << number << " is not a prime number.\n";
		cout << "Divisors between 2 and " << number << ": " << divisorCount;
	}
	//Part B
	int terms, first=0, second=1, next, counter=1;
	cout << "\nEnter number of Fibonacci terms: ";
	cin >> terms;
	if (terms <= 0)
	{
		cout << "Invalid number of terms";
		return 0;
	}
	cout << "Fibonacci series: ";
	while (counter <= terms)
	{
		cout << first << " ";
		next = first + second;
		first = second;
			second = next;
			counter++;
	}
	return 0;
}
