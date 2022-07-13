#include <iostream>

int checking (int i, int j);
using namespace std;
int main (void)
{
	int i;
	cout<<"Escribe un numero"<<endl; cin>>i;
	int j;
	cout<<"Escribe otro numero"<<endl; cin>>j;
	if (!checking(i,j))
	cout<<"Es mayor que: "<<j<<endl;
	else
	cout<<"Es menor que: "<<j<<endl;
	return 0;
}

int checking (int i, int j)
{
	if (i<j) return 1;
	return 0;
}
