#include <iostream>
#include <iomanip>
using namespace std;
int main()
{
	//Ayaan Waseem - L1F26BSCS0111
	int marks, count=0, highest=0, lowest=100;
	double total=0, average;
	cout << "Enter marks (-1 to stop): ";
	cin >> marks;
	while (marks != -1)
	{

		if (marks >= 0)
		{
			if (marks <= 100)
			{
				total = total + marks;
				count++;
				if (marks > highest)
					highest = marks;
				if (marks < lowest)
					lowest = marks;
			}
			else cout << "Invalid marks. Enter 0 to 100" <<endl;
			cout << "Enter marks (-1 to stop): ";
			cin >> marks;
		}
		
		else cout << "Invalid marks. Enter 0 to 100";

	}
	if (count == 0)
	{
		cout << "No marks were entered.";
		return 0;
	}
	else {
		average = total / count;
		cout << fixed << setprecision(2);
		cout << "\nValid entries: " << count << "\nHighest: " << "\nLowest: " << lowest << "\nTotal: " << total << "\nAverage: " << average;
	}
	return 0;
}