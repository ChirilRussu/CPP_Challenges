/*
https://edabit.com/challenge/4gzDuDkompAqujpRi
Create a function that takes a number as an argument. Add up all the numbers from 1 to the number you passed to the function.
For example, if the input is 4 then your function should return 10 because 1 + 2 + 3 + 4 = 10.
*/

#include <iostream>
using namespace std;

int main()
{
	//user input
	int x; 
	cout << "Enter a positive number." << endl;
	cin >> x;

	//increment variable
	int i = 0;

	//output variable
	int y = 0;
	
	while (i < x)
	{
		i++;
		y = y + i;
	}

	cout << y << endl;

	system("pause");
}