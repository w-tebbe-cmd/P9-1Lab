/*
File: P9-1.cpp
Author: Will Tebbe
Date: 10/222/2026
	a program that finds the number of vowels in a string
*/

#include <iostream>

using namespace std;

int countVowel(string str);

int main() {

	cout << countVowel("AEIOUaeiou") << endl;
	cout << countVowel("This is a test for SHOUTING!") << endl;
	cout << countVowel("qwertyuiopasdfghjklzxcvbnm") << endl;
	cout << countVowel("shy myrrh") << endl;
	cout << countVowel("\n") << endl;
	cout << countVowel("AAAAAAya") << endl;

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