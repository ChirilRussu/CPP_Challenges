/*
https://edabit.com/challenge/yDQnwtscs6sRi27we
A word nest is created by taking a starting word, and generating a new string by placing the word inside itself. This process is then repeated.
Nesting 3 times with the word "incredible":
start  = incredible
first  = incre|incredible|dible
second = increin|incredible|credibledible
third  = increinincr|incredible|ediblecredibledible
The final nest is "increinincrincredibleediblecredibledible" (depth = 3).
Given a starting word and the final word nest, return the depth of the word nest.
Examples
wordNest("floor", "floor") ➞ 0
wordNest("code", "cocodccococodededeodeede") ➞ 5
wordNest("incredible", "increinincrincredibleediblecredibledible") ➞ 3
("paradox", "parparaparadoxdoxadox")
*/

#include <iostream>
#include <string>

int word_nest(std::string word, std::string nest);
void nest_check(std::string word, std::string nest);

int nest_level;

int main()
{
	std::cout << "Enter the word and then the word nest.\n";

	std::string input_word;
	std::string input_nest;
	std::cin >> input_word;
	std::cin >> input_nest;

	nest_check(input_word, input_nest);

	nest_level = word_nest(input_word, input_nest);
	std::cout << "The word " << input_word << " is nested " << nest_level << " time(s) inside of " << input_nest << std::endl;

	system("pause");
}

int word_nest(std::string word, std::string nest) // derives the number_of_nests based on the length of inputs
{
	int number_of_nests = (nest.length() - word.length()) / word.length();
	return number_of_nests;
}

void nest_check(std::string word, std::string nest) // checks that the input nest is only made out of the input word
{
	for (int i = nest_level; i > 0; i--) // one by one erases the first instance of the input word inside of the input nest
	{
		int position = nest.find(word);
		nest.erase(position, word.length());
	}
	if (word != nest)
	{
		std::cout << "Error: incorrect inputs. The program will exit.\n"; // if the inputs are correct then at the end of the loop the input nest will be equal to the input word
		exit(0);
	}
}

