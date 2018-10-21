/**
* Developer: Eberth Gamarra
* email: eberthg4181@student.vvc.edu
* Description: This program will output the answer for a number of a letter you want to find
* Date: 19/10/2018
**/
#include <iostream>
#include <string>
using namespace std;

int char_c(string input, char c){
int count = 0;
for(int i = 0; i < input.size(); i++){
char n = tolower(input[i]);
if (n == c){
count++;
}}
return count;
}

string get_string(string prompt){
string input;
cout << prompt;
getline(cin, input);
return input;
}

int main(){
string input = get_string("Enter a string: ");
cout << "Enter a letter that you want to count: ";
char l;
cin >> l;
int count = char_c(input,l);
cout << "The letter " << l << " appeared " << count << " times." << endl;
return 0;
}
