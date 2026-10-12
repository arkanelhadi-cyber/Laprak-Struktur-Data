#include <iostream>
#include "mahasiswa.h"
using namespace std;

int main() {
    mahasiswa data[10];
    int n;

    do {
        cout << "Jumlah mahasiswa (1-10): ";
        cin >> n;
    } while (n < 1 || n > 10);

    for (int i = 0; i < n; i++) {
        cout << "\nData mahasiswa ke-" << i + 1 << endl;
        inputMhs(data[i]);
    }

    cout << "\n=== Daftar Mahasiswa ===" << endl;
    for (int i = 0; i < n; i++) {
        tampilMhs(data[i]);
    }
    return 0;
}