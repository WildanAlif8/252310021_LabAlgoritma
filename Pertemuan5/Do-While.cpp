#include <iostream>
using namespace std;

int main ()
{
	int number  = 0;
	int sum = 0;
	
	do {
		sum+=number;
		cout << "Masukan Angka:";
		cin >> number;
	}
	while (number >=1);
	
	cout << "\nHasil Penjumlahannya Adalah " <<sum  <<endl;
}
