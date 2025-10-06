#include <iostream>
using namespace std;

int main () {
	int a = 5;
	
	cout << "nilai awal a = " << a << endl;
	
	//Pre-increment :a ditambah dulu,jadi 0 lalu ditampilkan
	 cout <<"Pre-Increment -> ++a = " << ++a <<endl;
	 
	 //a=8
	 
	 //Post-increment :a ditambah dulu,jadi 0 lalu ditampilkan
	 cout <<"Post-Increment -> a++ = " << a++ <<", Sekarang a = "<< a <<endl;
	 
	 //a=7
	 
	 //pre
	 cout <<"Pre-decrement -> --a = " << --a <<endl;
	 
	 //a=8
	 
	 //Post -decrement
	  cout <<"Post-Increment -> --a = " << a-- <<", Sekarang a = "<< a <<endl;
}
