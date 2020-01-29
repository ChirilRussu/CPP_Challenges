/*
https://edabit.com/challenge/SEzYX5qtTR4WcZeR3
An isogram is a word that has no repeating letters, consecutive or nonconsecutive.Create a function that takes a string and returns
either true or false depending on whether or not it's an "isogram".
Examples
isIsogram("Algorism") ➞ true
isIsogram("PasSword") ➞ false
// Not case sensitive.
isIsogram("Consecutive") ➞ false
*/

#include <iostream>
#include <ctype.h> // to use the toupper function which takes a letter character and returns the upper case ASCII integer
#include <string>
using namespace std;

int main()
{
	string input_string;
	string output_string;
	bool isogram_check = true; // by default the program assumes that everything is an isogram and then tries to find repeating letters to assert that it's not an isogram

	cout << "Enter a string." << endl;
	cin >> input_string;

	for (int i = 0; i < input_string.length(); i++) // this loop takes the input string and converts it to all upper case letters.
	{
		output_string = output_string + char(toupper(input_string[i])); 
	}

	// cout << output_string << endl;
	// the above line is to test the toupper output

	for (int i = 0; i < output_string.length(); i++)	   // the first loop decides WHAT to compare to something else, the second loops decides what that SOMETHING ELSE is.
	{
		for (int o = i+1; o < output_string.length(); o++) // this loop takes the character at position i and compares it to the character at i+1 then i+2, etc. by iterating o.
		{												   // in the above comment, i+1 = o since we iterated i once right at the beginning.
			if (output_string[i] == output_string[o])      // when the loop finds two of the same character within the string it brakes out of both loops
			{
				isogram_check = false;
				break;
			}
		}

		if (isogram_check == false)
		{
			break;
		}
	}

	if (!isogram_check)
	{
		cout << input_string << " is not an isogram.\n";
	}
	else
	{
		cout << input_string << " is an isogram.\n";
	}
}