#include <iostream>
#include <conio.h>
#include <cmath>
#include <iomanip>

using namespace std;

int main()
{
	int a;
	cout << "enter any number: "; cin >> a;
	for (int i = 1; i <= 10; i++)
	{
		cout << i << " * " << a << " = " << a * i << endl;
	}

	_getch ();
	return 0;
}