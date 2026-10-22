/*
File: P9-1.cpp
Author: Will Tebbe
Date: 10/222/2026
	a program that finds the number of vowels in a string
*/

#include <iostream>
#include <string>

using namespace std;

int countVowel(string str);

int main(void) {

	string input;

	while (true) {

		cout << "Enter a string or Q to quit: ";
		getline(cin, input);

		if (input == "Q") break;
		
		cout << countVowel(input) << endl;

	}
}

int countVowel(string str) {

	int length = str.length();
	int vowels = 0;
	for (int i = 0; length > i; i++) {
		char letter = str[i];

		if (letter == 'a' || letter == 'e' || letter == 'i' || letter == 'o' || letter == 'u' ||
			letter == 'A' || letter == 'E' || letter == 'I' || letter == 'O' || letter == 'U') {
			vowels++;
		}

	}
	return vowels;
}