#include <iostream>
#include <cstring>
#include "stack.h"
using namespace std;

int main() {
    Stack S;
    infotype data, hasil;

    createStack(S);
    cout << "Stack telah dibuat. Top = " << S.Top << endl;
    viewStack(S);

    cout << endl << "--- Push 3 Data ---" << endl;
    strcpy(data.nim, "109082500204");
    strcpy(data.nama, "Hably Arkan");
    push(S, data);

    strcpy(data.nim, "109082500205");
    strcpy(data.nama, "John Doe");
    push(S, data);

    strcpy(data.nim, "109082500206");
    strcpy(data.nama, "Jane Smith");
    push(S, data);

    cout << endl << "--- Pop 1 Data ---" << endl;\
    pop(S, hasil);
    cout << "Data yang diambil: " << hasil.nim << " - " << hasil.nama << endl;
    viewStack(S);

    cout << endl << "--- Pop sampai kosong ---" << endl;
    pop(S, hasil);
    pop(S, hasil);
    pop(S, hasil); // Ini akan menampilkan pesan stack kosong
    viewStack(S);

    return 0;
}