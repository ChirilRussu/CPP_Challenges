/*
https://edabit.com/challenge/FZK5rECZMiqu9bv9i
Create a function that takes two integers and checks if they are equal.
*/

#include <iostream>

int main()
{
	int number1;
	int number2;
	
	std::cout << "Enter two numbers to check if they are the same.\n";
	std::cin >> number1 >> number2;
	if (number1 == number2)
	{
		std::cout << "The numbers are equal.\n";
	}
	else
	{
		std::cout << "The numbers are not equal.\n";
	}
}