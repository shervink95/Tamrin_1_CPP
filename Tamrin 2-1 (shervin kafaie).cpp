#include<iostream>
using namespace std;

int main()
{
	int a, b, c = 0;
	cout << "Enter a = ";
	cin >> a;
	cout << "Enter b = ";
	cin >> b;
	cout << "Enter c = ";
	cin >> c;
	
	if ((a < b + c) && (b < a + c) && (c < a + b))
	{
		cout << "Yes \n";
	}
	else
	{
		cout << "No \n";
	}

}