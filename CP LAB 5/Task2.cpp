#include<iostream>
using namespace std;
int main()
{
	int i, number;
	int result = 1;
	cout << "Enter your number=" << endl;
	cin >> number;

	do
	{
		result = result * number;
		number--;
	} while (number > 0);
	cout << "Factorial of given number is=" << result << endl;
	return 0;
}