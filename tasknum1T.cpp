#include <iostream>
using namespace std;
int main()
{
	//Ayaan Waseem - L1F26BSCS0111
	int n, counter = 1;
	cout << "Enter the number you want to count up and down to: ";
	cin >> n;
	if (n <= 0)
	{
		cout << "Invalid: n must be greater than 0.";
		return 0;
	}
	cout << "Counting up: ";
	while (counter <= n)
	{
		cout << counter << " ";
		counter++;
	}
	counter--;
	cout << "\nCounting down: ";
	while (counter <= n && counter >0)
	{
		cout << counter << " ";
		counter--;
	}
	return 0;
}