#include <iostream>

int global = 5;

int main (void)
{
	int a = 1;
	double x = 1.2;
	double y = 2.3;
	
	cout << "x+y=" <<x+y<<" "<<"a=" <<a<< endl;
	a=global + (int) x;
	cout<<"a="<<a<<endl;
	return 0;
	
}

