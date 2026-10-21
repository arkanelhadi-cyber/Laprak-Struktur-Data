
#include <iostream>
#include "Singlylist.h"

using namespace std;

// Membuat list kosong
void createList(List &L) {
    L.First = NULL;
}

// Membuat node baru
address alokasi(infotype x) {
    address P = new ElmList;
    P->info = x;
    P->next = NULL;
    return P;
}

// Menghapus node dari memori
void dealokasi(address &P) {
    delete P;
    P = NULL;
}

// Menampilkan seluruh isi list
void printInfo(List L) {
    address P = L.First;

    while (P != NULL) {
        cout << P->info;

        if (P->next != NULL) {
            cout << " ";
        }

        P = P->next;
    }

    cout << endl;
}

// Menambahkan node di awal list
void insertFirst(List &L, address P) {
    P->next = L.First;
    L.First = P;
}

// Menghapus node pertama
void deleteFirst(List &L, address &P) {
    if (L.First != NULL) {
        P = L.First;
        L.First = L.First->next;
        P->next = NULL;
    } else {
        P = NULL;
    }
}

// Menghapus node terakhir
void deleteLast(List &L, address &P) {
    if (L.First == NULL) {
        P = NULL;
    } else if (L.First->next == NULL) {
        P = L.First;
        L.First = NULL;
    } else {
        address Q = L.First;

        while (Q->next->next != NULL) {
            Q = Q->next;
        }

        P = Q->next;
        Q->next = NULL;
    }
}

// Menghitung jumlah node
int nbList(List L) {
    int jumlah = 0;
    address P = L.First;

    while (P != NULL) {
        jumlah++;
        P = P->next;
    }

    return jumlah;
}

// Menghapus seluruh node
void deleteList(List &L) {
    address P;

    while (L.First != NULL) {
        deleteFirst(L, P);
        dealokasi(P);
    }

    cout << "- List Berhasil Terhapus -" << endl;
}
