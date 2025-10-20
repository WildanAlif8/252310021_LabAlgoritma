#include <iostream>
using namespace std;

int main ()
{
	int awal,akhir;
	
	cout << "Mulai Dari = ";
	cin >> awal;
	
	cout << "Berakhir di = ";
	cin >> akhir;
	
	for (int a = awal; a <= akhir; a++)
	{
		cout << a << ".I'm Happy"<<endl;
	}
}
