/*
File: P9-1.cpp
Author: Will Tebbe
Date: 10/222/2026
	a program that finds the number of vowels in a string
*/

#include <iostream>

using namespace std;

int countCharacter(string str);

int main() {

	cout << countCharacter("Hello, world!") << endl;
	cout << countCharacter("a b c") << endl;
	cout << countCharacter("") << endl;
	cout << countCharacter("Hi bro");

}
int countCharacter(string str) {
	return str.length();
}