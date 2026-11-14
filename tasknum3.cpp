#include <iostream>
#include <iomanip>
using namespace std;
int main()
{
	//Ayaan Waseem - L1F26BSCS0111
	int subjects, counter = 1, marks;
	double total=0, average;
	cout << "Enter number of subjects: ";
	cin >> subjects;
	if (subjects <= 0)
	{
		cout << "Invalid number of subjects";
		return 0;
	}
	while (counter <= subjects)
	{
		cout << "Enter marks of subject " << counter << ": ";
		cin >> marks;
		total = total + marks;
		counter++;
	}
	cout << fixed << setprecision(2);
	cout << "Total marks: " << total << endl;
	average = total / subjects;
	cout << "Average marks: " << average;
	return 0;
}