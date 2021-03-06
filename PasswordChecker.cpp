// PasswordChecker.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
#include <string>
#include <cctype>
using namespace std;

void checkPassword(char[], int);

string boolMessage(bool flag) {
	if (flag)
		return "Requirement met";
	else
		return "Requirement NOT met";
}


int main()
{
	const int size = 21;
	char pass[size];

	do
	{
		cout << "Welcome to Password Checker" << endl;
		cout << "This program will check to see if your password is valid and secure before inputting it online. " << endl;
		cout << "Enter a password more than 8 characters but less than 20 characters that contains " <<
			"a lowercase, uppercase, letter, number, and punctuation. " <<
			" Enter X to exit" << endl;
		cin.getline(pass, size);
		if (pass[0] != 'X')
			checkPassword(pass, size);
	} while (pass[0] != 'X');


    return 0;
}

void checkPassword(char pass[], int size) {

	bool alpha = false;
	bool num = false;
	bool upper = false;
	bool lower = false;
	bool punct = false;
	bool sizeFlag = false;

	int cnt = 0;
	while (pass[cnt] != '\0') {
		if (isalpha(pass[cnt])) {
			alpha = true;
		}
		if (isdigit(pass[cnt])) {
			num = true;
		}
		if (isupper(pass[cnt])) {
			upper = true;
		}
		if (islower(pass[cnt])) {
			lower = true;
		}
		if (ispunct(pass[cnt])) {
			punct = true;
		}
		cnt++;
	}

	if (cnt >= 8)
		sizeFlag = true;
	if (alpha && num && upper && lower && punct && sizeFlag) {
		cout << "Your password meets all the requirements" << endl;

	}
	else {
		cout << "Your password does not meet the following requirements: " << endl << endl;
		cout << "Alpha character: " << boolMessage(alpha) << endl;
		cout << "Number character: " << boolMessage(num) << endl;
		cout << "Lowercase character: " << boolMessage(lower) << endl;
		cout << "Uppercase character" << boolMessage(upper) << endl;
		cout << "Punctuation character" << boolMessage(punct) << endl;
		cout << "Minimum characters" << boolMessage(sizeFlag) << endl;
		cout << endl;
	}
}