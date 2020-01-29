// Crude version.

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

int main()
{
	std::cout << "Enter what the 5 skewers look like.\n"
		<< "A skewer starts and ends with --.\n" // no check
		<< "In between them is either meat x, vegetable o, or empty skewer space -.\n"
		<< "For example a skewer can look like this:\n"
		<< "--xo--x--ox--\n"
		<< "\n"; //an extra line to separate the example skewer from the user input skewers.

	std::string first_skewer;
	std::string second_skewer;
	std::string third_skewer;
	std::string fourth_skewer;
	std::string fifth_skewer;
	int meat_skewers = 0;
	int vagetable_skewers = 0;
	 

	//user input and input validation, checks that there isn't anything other than 'x', 'o', or '-' in the input
	std::cin >> first_skewer;
	if (bool input_check = first_skewer.find_first_not_of("xo-") != std::string::npos)  // initializes a boolean check - are there matches or not 
	{																					// if there are no matches then find_first_not_of returns std::string::npos
		std::cout << "Incorrect object on the skewer. Make sure that it's only meat and vegetables on the first skewer.\n";
		std::cout << "Restart and try again.";
		exit(0);
	}
	std::cin >> second_skewer;
	if (bool input_check = second_skewer.find_first_not_of("xo-") != std::string::npos)  // initializes a boolean check - are there matches or not 
	{																					// if there are no matches then find_first_not_of returns std::string::npos
		std::cout << "Incorrect object on the skewer. Make sure that it's only meat and vegetables on the second skewer.\n";
		std::cout << "Restart and try again.";
		exit(0);
	}
	std::cin >> third_skewer;
	if (bool input_check = third_skewer.find_first_not_of("xo-") != std::string::npos)  // initializes a boolean check - are there matches or not  
	{																					// if there are no matches then find_first_not_of returns std::string::npos
		std::cout << "Incorrect object on the skewer. Make sure that it's only meat and vegetables on the third skewer.\n";
		std::cout << "Restart and try again.";
		exit(0);
	}
	std::cin >> fourth_skewer;
	if (bool input_check = fourth_skewer.find_first_not_of("xo-") != std::string::npos)  // initializes a boolean check - are there matches or not 
	{																					// if there are no matches then find_first_not_of returns std::string::npos
		std::cout << "Incorrect object on the skewer. Make sure that it's only meat and vegetables on the fourth skewer.\n";
		std::cout << "Restart and try again.";
		exit(0);
	}
	std::cin >> fifth_skewer;
	if (bool input_check = fifth_skewer.find_first_not_of("xo-") != std::string::npos)  // initializes a boolean check - are there matches or not 
	{																					// if there are no matches then find_first_not_of returns std::string::npos
		std::cout << "Incorrect object on the skewer. Make sure that it's only meat and vegetables on the fifth skewer.\n";
		std::cout << "Restart and try again.";
		exit(0);
	}



	// counting meat and vegetable skewers
	
	//first
	if (bool first_skewer_check = first_skewer.find_first_not_of("-") != std::string::npos) //checks if the skewer has anything on it.
	{
		if (bool first_skewer_meat_check = first_skewer.find_first_not_of("-o") != std::string::npos) //checks if there is meat on the skewer
		{
			++meat_skewers;
			std::cout << "First skewer is a meat skewer \n";
		}
		else
		{
			++vagetable_skewers;
			std::cout << "First skewer is a vegetable skewer \n";
		}
	}
	else
	{
		std::cout << "First skewer is empty \n";
	}
	
	//second
	if (bool second_skewer_check = second_skewer.find_first_not_of("-") != std::string::npos) //checks if the skewer has anything on it.
	{
		if (bool second_skewer_meat_check = second_skewer.find_first_not_of("-o") != std::string::npos) //checks if there is meat on the skewer
		{
			++meat_skewers;
			std::cout << "Second skewer is a meat skewer \n";
		}
		else
		{
			++vagetable_skewers;
			std::cout << "Second skewer is a vegetable skewer \n";
		}
	}
	else
	{
		std::cout << "Second skewer is empty \n";
	}
	
	//third
	if (bool third_skewer_check = third_skewer.find_first_not_of("-") != std::string::npos) //checks if the skewer has anything on it.
	{
		if (bool third_skewer_meat_check = third_skewer.find_first_not_of("-o") != std::string::npos) //checks if there is meat on the skewer
		{
			++meat_skewers;
			std::cout << "Third skewer is a meat skewer \n";
		}
		else
		{
			++vagetable_skewers;
			std::cout << "Third skewer is a vegetable skewer \n";
		}
	}
	else
	{
		std::cout << "Third skewer is empty \n";
	}

	//fourth
	if (bool fourth_skewer_check = fourth_skewer.find_first_not_of("-") != std::string::npos) //checks if the skewer has anything on it.
	{
		if (bool fourth_skewer_meat_check = fourth_skewer.find_first_not_of("-o") != std::string::npos) //checks if there is meat on the skewer
		{
			++meat_skewers;
			std::cout << "Fourth skewer is a meat skewer \n";
		}
		else
		{
			++vagetable_skewers;
			std::cout << "Fourth skewer is a vegetable skewer \n";
		}
	}
	else
	{
		std::cout << "Fourth skewer is empty \n";
	}

	//fifth
	if (bool fifth_skewer_check = fifth_skewer.find_first_not_of("-") != std::string::npos) //checks if the skewer has anything on it.
	{
		if (bool fifth_skewer_meat_check = fifth_skewer.find_first_not_of("-o") != std::string::npos) //checks if there is meat on the skewer
		{
			++meat_skewers;
			std::cout << "Fifth skewer is a meat skewer \n";
		}
		else
		{
			++vagetable_skewers;
			std::cout << "Fifth skewer is a vegetable skewer \n";
		}
	}
	else
	{
		std::cout << "Fifth skewer is empty \n";
	}
	//final output
	std::cout << "There are " << meat_skewers << " meat skewers. \n";
	std::cout << "And " << vagetable_skewers << " vegetable skewers. \n";

	system("pause");
} 