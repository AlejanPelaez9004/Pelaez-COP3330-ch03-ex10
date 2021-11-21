/*
 *  UCF COP3330 Fall 2021 Assignment 5 Solution
 *  Copyright 2021 Alejandro Pelaez
 */
#include <string>
#include <iostream>

using namespace std;

int main()
{
	double number1;
	double number2;
	string operation;
	double result;
	cout << "Enter an operation followed by two numbers: ";
	cin >> operation >> number1 >> number2;

	if (operation == "+" || operation == "plus") 
		result = number1 + number2;
	if (operation == "-" || operation == "minus") 
		result = number1 - number2;
	if (operation == "mul" || operation == "*") 
		result = number1 * number2;
	if (operation == "div" || operation == "/")
		result = number1 / number2;

	cout << result;
}