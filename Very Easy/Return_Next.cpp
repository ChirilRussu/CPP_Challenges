/* 
https://edabit.com/challenge/QgCMMMyMmckvHbfKv
Create a function that takes a number as an argument, add one to the number, and return the result.
Examples
addition(0) ➞ 1
addition(9) ➞ 10
addition(-3) ➞ -2
*/


#include <iostream>
using namespace std;

int addition(int Number);

int main()
{
	cout << "Enter a number. \n";
	int input;
	cin >> input;
	cout << "The next number is " << addition(input) << endl;

	system("pause");
}

int addition(int Number)
{
	return Number + 1;
}