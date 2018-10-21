/*
Description: The program will ask the user to enter a string, then ask the user to enter a character for counting, and in the end return the number of the given character in the given string.
Filename: main.cpp
Author: Tim Wong
Date: 10/20/2018
*/

#include <iostream>
#include <string>

using namespace std;

int char_count(string input, char c)
{
    int count = 0;
    for(int i = 0; i < input.size(); i++)
    {
        char n = tolower(input[i]);
        if (n == c)
        {
            count++;
        }
    }
           
    return count;
}

string get_string(string prompt)
{
    string input;
    cout << prompt;
    getline(cin, input);

    return input;
}

int main()
{
    string input = get_string("Please enter any word or sentence: ");
    cout << "Please enter any letter that you want to count: ";
    char letter;
    cin >> letter;
    int count = char_count(input,letter);
    cout << "The letter " << letter << " appeared " << count << " times." << endl;
    cout << "Thank you for using this program.";
    
    return 0;
}
