#include <iostream>
using namespace std;

int main() {
    char kalimat[100];
    int kata = 1;

    cout << "Masukkan kalimat: ";
    cin.getline(kalimat, 100);

    int i = 0;
    while (kalimat[i] != '\0') {
        if (kalimat[i] == ' ') {
            kata++;
        }
        i++;
    }

    cout << "Jumlah kata: " << kata << endl;

}

