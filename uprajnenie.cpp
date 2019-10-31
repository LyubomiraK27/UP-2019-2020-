p// uprajnenie.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <cmath>
using namespace std;

int main()
{
	double num1, num2;
	char op;
	cout << "Enter operator either +, -, * or /. " << endl;
	cin >> op;
	cout << "Enter two operands:";
	cin >> num1 >> num2;

	switch (op)
	{
	case '+':
		cout << num1 + num2 << endl;
		break;
	case '-':
		cout << num1 - num2 << endl;
		break;
	case '*':
		cout << num1 * num2 << endl;
		break;
	case '/':
		cout << num1 / num2 << endl;
		break;
	
	default: //in case the input for the operator is anything different than the specified symbols
		cout << "Invalid operator" << endl;


		break;
		
	}



	return 0;

}

