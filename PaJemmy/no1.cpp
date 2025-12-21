#include <iostream>
using namespace std;

int main() {
    char teks[100];
    int panjang = 0;

    cout << "Masukkan teks: ";
    cin.getline(teks, 100);

    while (teks[panjang] != '\0') {
        panjang++;
    }

    cout << "Panjang string: " << panjang << endl;

}

