/*
https://edabit.com/challenge/7CaLzrWHhfzGw4CaT
Create a function that takes a string as an argument and returns a coded (h4ck3r 5p34k) version of the string.
Examples:
hackerSpeak("javascript is cool") ➞ "j4v45cr1pt 15 c00l"
hackerSpeak("programming is fun") ➞ "pr0gr4mm1ng 15 fun"
hackerSpeak("become a coder") ➞ "b3c0m3 4 c0d3r"
In order to work properly, the function should replace all 'a's with 4, 'e's with 3, 'i's with 1, 'o's with 0, and 's's with 5.
*/


#include <iostream>
#include <algorithm> // contains the replace function
#include <string> // contains getline() 

using namespace std; // !!!

void L33T(string& string_parameter);

int main()
{
    cout << "Enter a string.\n";
    string input_string;
    getline(cin, input_string);
    L33T(input_string); 
    cout << input_string << endl;

    system("pause");
}

void L33T(string& string_parameter)
{
    replace(string_parameter.begin(), string_parameter.end(), 'a', '4');
    replace(string_parameter.begin(), string_parameter.end(), 'e', '3');
    replace(string_parameter.begin(), string_parameter.end(), 'i', '1');
    replace(string_parameter.begin(), string_parameter.end(), 'o', '0');
    replace(string_parameter.begin(), string_parameter.end(), 's', '5');
}