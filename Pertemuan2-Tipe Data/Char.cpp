#include <iostream>
using namespace std;

int main() {
    char x[40];     
    string z;    
    string y; 

    cout << "Masukan NPM anda: ";
    cin >> x;
    cin.ignore();

    cout << "Masukan nama anda: ";
    getline(cin, z);

    cout << "Masukan alamat anda: ";
    getline(cin, y);

    cout << "\nNPM anda adalah: " << x;
    cout << "\nNama anda adalah: " << z;
    cout << "\nAlamat anda adalah: " << y;

    return 0;
}

