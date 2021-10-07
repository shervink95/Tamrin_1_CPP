#include<iostream>
using namespace std;

int main()
{
	float weight, height, BMI = 0;
	cout << "Enter weight in Kilograms : ";
	cin >> weight;
	cout << "Enter height in meter : ";
	cin >> height;
	BMI = (weight) / (height * height);
	if (BMI >= 35)
	{
		cout << "EXTREMELY OBESE \n";
	}
	else if ((BMI >= 30) && (BMI < 35))
	{
		cout << "OBESE \n";
	}
	else if ((BMI >= 25) && (BMI < 30))
	{
		cout << "OVER WEIGHT \n";
	}
	else if ((BMI >= 18.5) && (BMI < 25))
	{
		cout << "NORMAL \n";
	}
	else
	{
		cout << "UNDER WEIGHT \n";
	}
}