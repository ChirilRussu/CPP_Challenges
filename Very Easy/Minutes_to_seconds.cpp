/* 
https://edabit.com/challenge/MtNAJmJZ49i5Xf3AW
Write a function that takes an integer minutes and converts it to seconds.
*/

#include <iostream>

int main()
{
	int Minutes;
	std::cout << "Enter the number of minutes to convert to seconds. \n";
	std::cin >> Minutes;
	std::cout << Minutes << " minutes is " << Minutes * 60 << " seconds. \n";

	system("pause");
}