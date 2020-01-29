//refined - added custom functions

/*
https://edabit.com/challenge/s7aQ99N3zXSKXRNGC
You are in charge of the barbecue grill. A vegetarian skewer is a skewer that has only vegetables (-o).
A non-vegetarian skewer is a skewer with at least one piece of meat (-x).

For example, the grill below has 4 non-vegetarian skewers and 1 vegetarian skewer (the one in the middle).
["--xo--x--ox--",
"--xx--x--xx--",
"--oo--o--oo--",
"--xx--x--ox--",
"--xx--x--ox--"]

Given a BBQ grill, write a function that returns [# vegetarian skewers, # non-vegetarian skewers].
For example above, the function should return [1, 4].
*/

#include <iostream> //input and output
#include <string> //strings

//global variables
std::string first_skewer;
std::string second_skewer;
std::string third_skewer;
std::string fourth_skewer;
std::string fifth_skewer;

int slewer_counter = 0;
int meat_skewers = 0;
int vagetable_skewers = 0;

//function that checks that there is nothing except x / o / - in the user input strings and terminates the program if there is
void skewer_Checker_Function(std::string skewer_String)
{
	if (bool input_check = skewer_String.find_first_not_of("xo-") != std::string::npos)  // initializes a boolean check - are there matches or not 
	{																					// if there are no matches then find_first_not_of returns std::string::npos
		std::cout << "Incorrect object on the skewer. Make sure that it's only meat and vegetables.\n";
		std::cout << "Restart and try again.";
		exit(0);
	}
}

//function that checks if a skewer has meat on it
void skewer_Counter_Function(std::string skewer_number)
{
	slewer_counter++;

	if (bool meat_or_veg_check = skewer_number.find_first_not_of("-") != std::string::npos) //checks if the skewer has anything on it.
	{
		if (bool meat_or_veg_chec = skewer_number.find_first_not_of("-o") != std::string::npos) //checks if there is meat on the skewer
		{
			++meat_skewers;
			std::cout << "Skewer # " << slewer_counter << " is a meat skewer \n";
		}
		else
		{
			++vagetable_skewers;
			std::cout << "Skewer # " << slewer_counter << " is a vegetable skewer \n";
		}
	}
	else
	{
		std::cout << "Skewer # " << slewer_counter << " is empty \n";
	}
}

int main()
{
	std::cout << "Enter what the 5 skewers look like.\n"
		<< "A skewer starts and ends with --.\n" // no check
		<< "In between them is either meat x, vegetable o, or empty skewer space -.\n"
		<< "For example a skewer can look like this:\n"
		<< "--xo--x--ox--\n"
		<< "\n"; //an extra line to separate the example skewer from the user input skewers.
	     
	//user input and input validation, checks that there isn't anything other than 'x', 'o', or '-' in the input
	std::cin >> first_skewer;
	skewer_Checker_Function(first_skewer);

	std::cin >> second_skewer;
	skewer_Checker_Function(second_skewer);

	std::cin >> third_skewer;
	skewer_Checker_Function(third_skewer);

	std::cin >> fourth_skewer;
	skewer_Checker_Function(fourth_skewer);

	std::cin >> fifth_skewer;
	skewer_Checker_Function(fifth_skewer);

	// counting meat and vegetable skewers
	skewer_Counter_Function(first_skewer);
	skewer_Counter_Function(second_skewer);
	skewer_Counter_Function(third_skewer);
	skewer_Counter_Function(fourth_skewer);
	skewer_Counter_Function(fifth_skewer);

	//final output
	std::cout << "There are " << meat_skewers << " meat skewers. \n";
	std::cout << "And " << vagetable_skewers << " vegetable skewers. \n"; 

	system("pause");
}