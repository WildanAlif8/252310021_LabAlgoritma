#include <iostream>
using namespace std;

int main ()
{
	int x,y, tambah,kurang,kali,bagi;
	
	cout <<"Masukan Bilangan Kesatu = ";
	cin >> x;
	cout <<"Masukan Bilangan Kedua = ";
	cin >> y;
	
	tambah = x+y;
	kurang = x-y;
	kali = x*y;
	bagi = x/y;
	
		cout <<"Jadi Hasil Penjumlahannya adalah = " <<tambah <<endl;
		cout <<"Jadi Hasil Pengurangan adalah = " <<kurang <<endl;
		cout <<"Jadi Hasil Perkalian adalah = " <<kali <<endl;
		cout <<"Jadi Hasil pembagian adalah = " <<bagi <<endl;
}
