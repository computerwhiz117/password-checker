// PasswordChecker.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
#include <string>
#include <ctype.h>
using namespace std;

void checkPassword(char[], int);

string boolMessage(bool flag)


int main()
{
	const int size = 21;
	char pass[size];

	do 
	{
		cout << "Enter a password more than a # character but less than 10 characters that "
	}

	string password;
	cout << "Welcome to Password Checker";
	cout << "This program will check if your password is valid and secure enough to use it in online services" << endl;
	cout << "Please enter a password";
	cin.getLine(password);
	cout << "The password you entered is: " << password << endl;


    return 0;
}

