#include <iostream>
using namespace std;

struct Node {
    int info;
    Node* next;
};

typedef Node* address;

struct List {
    address first;
};

void createList(List &L) {
    L.first = nullptr;
}

void insertLast(List &L, int nilai) {
    address P = new Node;
    P->info = nilai;
    P->next = nullptr;

    if (L.first == nullptr) {
        L.first = P;
    } else {
        address Q = L.first;
        while (Q->next != nullptr) {
            Q = Q->next;
        }
        Q->next = P;
    }
}

void deleteFirst(List &L) {
    if (L.first != nullptr) {
        address P = L.first;
        L.first = P->next;
        delete P;
    }
}

void deleteLast(List &L) {
    if (L.first == nullptr) return;

    if (L.first->next == nullptr) {
        delete L.first;
        L.first = nullptr;
        return;
    }

    address P = L.first;
    while (P->next->next != nullptr) {
        P = P->next;
    }

    delete P->next;
    P->next = nullptr;
}

void deleteAfter(List &L, address Prec) {
    if (Prec != nullptr && Prec->next != nullptr) {
        address P = Prec->next;
        Prec->next = P->next;
        delete P;
    }
}

int nbList(List L) {
    int jumlah = 0;
    address P = L.first;

    while (P != nullptr) {
        jumlah++;
        P = P->next;
    }

    return jumlah;
}

void deleteList(List &L) {
    while (L.first != nullptr) {
        deleteFirst(L);
    }
}

int main() {
    List L;
    createList(L);

    
    for (int i = 1; i <= 12; i++) {
        insertLast(L, i);
    }

    cout << "Jumlah node : " << nbList(L) << endl;

    deleteList(L);

    cout << "\n- List Berhasil Terhapus -" << endl;
    cout << "Jumlah node : " << nbList(L) << endl;

    return 0;
}