#include <iostream>
using namespace std;

int main() {
    char teks[100], balik[100];
    int panjang = 0;

    cout << "Masukkan teks: ";
    cin.getline(teks, 100);

    while (teks[panjang] != '\0') {
        panjang++;
    }

    for (int i = 0; i < panjang; i++) {
        balik[i] = teks[panjang - 1 - i];
    }
    balik[panjang] = '\0';

    cout << "Hasil dibalik: " << balik << endl;

    bool palindrom = true;
    for (int i = 0; i < panjang; i++) {
        if (teks[i] != balik[i]) {
            palindrom = false;
            break;
        }
    }

    if (palindrom) {
        cout << "PALINDROM" << endl;
    } else {
        cout << "BUKAN palindrom" << endl;
    }
}

