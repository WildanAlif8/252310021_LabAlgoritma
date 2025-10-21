#include <iostream>
using namespace std;

int main() { 
    int nilai [5] = {10,20,30,40,50};
    
    cout << "Daftar Nilai array:" <<endl;
    
    for (int i =0; i <5; i++) {
    	cout << "indeks ke-" << i <<" = " << nilai [i] <<endl;
	}
}

