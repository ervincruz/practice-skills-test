#include <iostream>
#include <conio.h>

using namespace std;

int main()
{
	int a, b, c;

	cout << "enter first number: "; cin >> a;
	cout << "enter second number: "; cin >> b;
	cout << "enter third number: "; cin >> c;

	if (a > b && a > c)
	
		cout << " the largest number is " << a;
	
	else if (b > a && b > c)
	
		cout << "the largest number is " << b << ".";
	
	else if (c > a && c > b)
	
		cout << "the largest number is " << c << ".";
	
	else 
	
		cout << "there is no larger number";
	

	_getch();
	return 0;
}