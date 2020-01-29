/*
https://edabit.com/challenge/SFzHtm63XT6EYNHWY
Create a function that takes two numbers as arguments and return their sum.
*/

#include <iostream>

int main()
{
	int operand1;
	int operand2;
	int result;

	std::cout << "Enter two numbers to get their sum. \n";
	std::cin >> operand1 >> operand2;
	result = operand1 + operand2; //change the operator here
	std::cout << result << '\n';

	system("pause");
}