#include <iostream>
using namespace std;
int main()
{
	//Ayaan Waseem - L1F26BSCS0111
	int number, limit, counter=1, result, sum = 0;
	cout << "Enter a number: ";
	cin >> number;
	cout << "Enter the limit: ";
	cin >> limit;
	if (limit <= 0)
	{
		cout << "Invalid limit.";
		return 0;
	}
	while (counter <= limit)
	{
		result=number*counter;
		cout << number << " x " << counter << " = " << number * counter << endl;
		sum = sum + result;
		counter++;
	}
	cout << "Sum of all results: " << sum;
	return 0;
	
}