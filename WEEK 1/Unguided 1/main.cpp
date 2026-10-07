#include <iostream>
using namespace std;

int main() {
    float angkaPertama, angkaKedua;

    cout << "Masukkan dua bilangan float: ";
    cin >> angkaPertama >> angkaKedua;

    cout << "Penjumlahan: " << angkaPertama + angkaKedua << '\n';
    cout << "Pengurangan: " << angkaPertama - angkaKedua << '\n';
    cout << "Perkalian: " << angkaPertama * angkaKedua << '\n';

    if (angkaKedua != 0.0f) {
        cout << "Pembagian: " << angkaPertama / angkaKedua << '\n';
    } else {
        cout << "Pembagian: tidak dapat dilakukan karena pembagi bernilai nol.\n";
    }

    return 0;
}