#include <iostream>
#include <fstream>

using namespace std;
int main (void)
{
	int a,b,c;
	cout<<"Dame el valor de a: ";
	cin>>a;
	cout<<"Dame el valor de b: ";
	cin>>b;
	ofstream fp ("nombre.dat");
	fp<< a+b << " ";
	fp<<a-b<<endl;
	fp.close();
	
	int sum, dif;
	ifstream fr ("nombre.dat");
	fr>> sum>>dif;
	fr.close();
	cout<<"la suma es: "<<sum<<endl;
	cout<<"la resta es: "<<dif<<endl;
	return 0;
}

