#include <iostream>
using namespace std;

int main() { 
    char ulang;
    
awal:
    cout << "Program Perulangan menggunakan goto" << endl;
    cout << endl;
    
    cout << "Ingin mengulangi perintah (y/n)? ";
    cin >> ulang;
    
    cout << endl;
    
    if (ulang == 'Y' || ulang == 'y') {
        goto awal;
    }
    if (ulang == 'N' || ulang == 'n') {
        goto akhir;
    }

akhir:
//    cout << "Program selesai. Terima kasih!" << endl;
    return 0;
}

