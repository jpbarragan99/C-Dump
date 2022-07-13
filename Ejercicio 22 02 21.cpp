#include <iostream>
#include <cstring>

char *binstr (unsigned int);

int main ()
{
	int n = 128;
	cout << "decimal _ " << n << ", binario _ " << binstr(n) << endl;  
	cin.get();
}

char *binstr (unsigned int);
{
	static char buffer [65];
	int i = 0
	strcpy(buffer, "0");
	
	if (n>0){
		while (n > 0) {
			
			buffer [i] = (n & 1) + '0';
			i++
			n >>= 1;
		}		
		buffer [i] = '\0';
		strrev(buffer);		
	}	
	return buffer; 
}

