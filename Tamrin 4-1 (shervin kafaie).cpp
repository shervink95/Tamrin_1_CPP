#include<iostream>
using namespace std;

int main()
{
	int lesson1, lesson2, lesson3, avg = 0;
	char name[50], lastname[50];
	cout << "please enter your name :\n";
	cin >> name;
	cout << "please enter your lastname :\n";
	cin >> lastname;
	cout << "Enter the mark of lesson 1 :\n";
	cin >> lesson1;
	cout << "Enter the mark of lesson 2 :\n";
	cin >> lesson2;
	cout << "Enter the mark of lesson 3 :\n";
	cin >> lesson3;
	avg = (lesson1 + lesson2 + lesson3) / 3;
	if (avg >= 17)
	{
		cout << "Great \n";
	}
	else if (avg >= 12 || avg < 17)
	{
		cout << "Normal \n";
	}
	else
	{
		cout << "Fail \n";
	}
}