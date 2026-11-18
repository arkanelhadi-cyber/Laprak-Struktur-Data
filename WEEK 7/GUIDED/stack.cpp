#include <iostream>
#include <string>

using namespace std;

// Konstanta kapasitas maksimum stack
const int MAX_SIZE = 100;

// Struktur data untuk menyimpan informasi (infotype)
struct infotype {
    string nim;
    string nama;
};

// Struktur data Stack
struct Stack {
    infotype info[MAX_SIZE];
    int Top;
};

// Inisialisasi Stack
void createStack(Stack &S) {
    S.Top = 0; // atau -1 tergantung konvensi, di sini menggunakan 0 berdasarkan kode di gambar
}

// Mengecek apakah Stack kosong
bool isEmpty(Stack S) {
    return S.Top == 0;
}

// Mengecek apakah Stack penuh
bool isFull(Stack S) {
    return S.Top == MAX_SIZE;
}

// Operasi Push (Menambah data ke Stack)
void push(Stack &S, infotype x) {
    if (!isFull(S)) {
        S.info[S.Top] = x;
        S.Top++;
    } else {
        cout << "Stack penuh! Data tidak dapat ditambahkan." << endl;
    }
}

// Operasi Pop (Mengambil data dari Stack - dari gambar)
void pop(Stack &S, infotype &x) {
    if (!isEmpty(S)) {
        x = S.info[S.Top - 1];
        S.Top = S.Top - 1;
    } else {
        cout << "Stack kosong, tidak ada data yang bisa diambil" << endl;
    }
}

// Operasi ViewStack (Melihat isi Stack - dari gambar)
void viewStack(Stack S) {
    if (isEmpty(S)) { // Disesuaikan agar logis (jika kosong tampilkan stack kosong)
        cout << "Stack kosong" << endl;
    } else {
        cout << "Isi stack (dari TOP):" << endl;
        for (int i = S.Top; i >= 1; i--) {
            cout << i << ". " << S.info[i - 1].nim << " - " 
                 << S.info[i - 1].nama << endl;
        }
    }
}

// Contoh Fungsi Main
int main() {
    Stack S;
    createStack(S);

    infotype mhs1 = {"130121001", "Andi"};
    infotype mhs2 = {"130121002", "Budi"};

    push(S, mhs1);
    push(S, mhs2);

    viewStack(S);

    infotype mhsHapus;
    pop(S, mhsHapus);
    cout << "\nData yang dipop: " << mhsHapus.nama << endl;

    cout << "\nSetelah pop:" << endl;
    viewStack(S);

    return 0;
}