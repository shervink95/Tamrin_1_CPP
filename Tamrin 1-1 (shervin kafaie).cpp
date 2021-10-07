#include<iostream>
#include<math.h>
#include <string>

using namespace std;

int main()
{
	int fact, i;
	fact = i = 1;
	float a, b;
	string op;
	cout << "Enter a = ";
	cin >> a;
	cout << "Enter b = ";
	cin >> b;
	cout << "Enter your op = ";
	cin >> op;

	if (op == "+")
	{
		cout << a + b;
	}
	else if (op == "-")
	{
		cout << a - b;
	}
	else if (op == "*")
	{
		cout << a * b;
	}
	else if (op == "/")
	{
		if (b != 0)
		{
			cout << a / b;
		}
		else
		{
			cout << "Zero division!";
		}
	}
	else if (op == "fact")
	{
		for (int i = 1; i <= a; i++)
		{
			fact = fact * i;
		}
		cout << fact;
	}
	else if (op == "sqrt")
	{
		cout << sqrt(a);
	}
	else if (op == "sin")
	{
		int z = a;
		if (z - a == 0) {
			if (z % 180 == 0) {
				cout << "0";
			}
			else {
				a = a * 3.14159 / 180;
				cout << sin(a);
			}
		}
		else {
			a = a * 3.14159 / 180;
			cout << sin(a);
		}
	}
	else if (op == "cos")
	{
		int z = a;
		if (z - a == 0) {
			if (z % 180 == 90) {
				cout << "0";
			}
			else {
				a = a * 3.14159 / 180;
				cout << cos(a);
			}
		}
		else {
			a = a * 3.14159 / 180;
			cout << cos(a);
		}
	}
	else if (op == "tan")
	{
		int z = a;
		if (z - a == 0) {
			if (z % 180 == 90) {
				cout << "bi nahayat";
			}
			else if (z % 180 == 0) {
				cout << "0";
			}
			else {
				a = a * 3.14159 / 180;
				cout << sin(a) / cos(a);
			}
		}
		else {
			a = a * 3.14159 / 180;
			cout << sin(a) / cos(a);
		}
	}
	else if (op == "cot")
	{
		int z = a;
		if (z - a == 0) {
			if (z % 180 == 0) {
				cout << "bi nahayat";
			}
			else if (z % 180 == 90) {
				cout << "0";
			}
			else {
				a = a * 3.14159 / 180;
				cout << cos(a) / sin(a);
			}
		}
		else {
			a = a * 3.14159 / 180;
			cout << cos(a) / sin(a);
		}
	}
}