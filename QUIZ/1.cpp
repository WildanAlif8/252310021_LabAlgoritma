#include <iostream>
using namespace std;

int main() {
    int jumlah = 0;  
    int bilangan = 1; 

    cout << "menghitung 10 deret bilangan ganjil dan hasilnya:\n";

    for (int i = 1; i <= 10; i++) {
        cout << bilangan;

        if (i < 10)
            cout << " + ";

        jumlah += bilangan; 
        bilangan += 2;  
    }

    cout << " = " << jumlah << endl;
    
}

