#include <iostream>
using namespace std;

int main() {
    string data[3][2] = {
        {"Helena", "252310001"},
        {"Wildan", "252310021"},
        {"Antoni",   "242310001"}
    };

   cout << "Nama\tNPM\n";

    for (int i = 0; i < 3; i++) {
        cout << data[i][0] << "\t" << data[i][1] << endl;
    }

}
