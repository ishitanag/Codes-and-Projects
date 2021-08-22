//Program to check if a person is eligible to vote or not

#include <iostream>
using namespace std;

int main() 
{    
	int age;
	cout << "Enter your age: " << endl;
	cin >> age;
	if (age>=18)
	{
		cout << "You are eligible to vote" << endl;
	}
	else
	{
		cout << "You are not eligible to vote" << endl;
	}
    return 0;
}
