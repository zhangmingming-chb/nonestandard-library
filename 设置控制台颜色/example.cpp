#include<iostream>
#include"concol.h"
using namespace std;
using namespace eku;

int main()
{
	concolinit();
	char a[30];
	cout << red << "Hello" << endl;
	setcolor(red, yellow);
	cout << "Hello2" << endl;
	setcolor(white, defbackcol);
	cout << "Hello3" << endl;
	settextcolor(blue);
	cout << "Enter a word ";
	cin >> green >> a;
	cout << pink << "You entered " << yellow << a << endl;
	settextcolor(cyan);
	return 0;
}