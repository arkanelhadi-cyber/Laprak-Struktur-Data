# <h1 align="center">Modul 3 ABSTRACT DATA TYPE (ADT)  </h1>
<p align="center">Hably Arkan El Hady -109082500204 </p>

## Dasar Teori
Linked list (biasa disebut list saja) adalah salah satu bentuk struktur data (representasi penyimpanan) berupa serangkaian elemen data yang saling berkait (berhubungan) dan bersifat fleksibel karena dapat tumbuh dan mengerut sesuai kebutuhan. Data yang disimpan dalam Linked list bisa berupa data tunggal atau data majemuk. Data tunggal merupakan data yang hanya terdiri dari satu data (variabel), misalnya: nama bertipe string. Sedangkan data majemuk  merupakan sekumpulan data (record) yang di dalamnya terdiri dari berbagai tipe data, misalnya: Data Mahasiswa, terdiri dari Nama bertipe string, NIM bertipe long integer, dan Alamat bertipe string.  Linked list dapat diimplementasikan menggunakan Array dan Pointer (Linked list). Yang akan kita gunakan adalah pointer, karena beberapa alasan, yaitu : 
 1. Array bersifat statis, sedangkan pointer dinamis. 
 2. Pada linked list bentuk datanya saling bergandengan (berhubungan) sehingga lebih mudah memakai pointer. 
 3. Sifat linked list yang fleksibel lebih cocok dengan sifat pointer yang dapat diatur sesuai kebutuhan. 
 4. Karena array lebih susah dalam menangani linked list, sedangkan pointer lebih mudah
 5. Array lebih cocok pada kumpulan data yang jumlah elemen maksimumnya sudah diketahui dari awal. 

Dalam implementasinya, pengaksesan elemen pada Linked list dengan pointer bisa menggunakan  (->) atau tanda titik (.). Model-model dari ADT Linked list yang kita pelajari adalah : 
1. Singly Linked list
2. Doubly Linked list
3. Circular Linked list
4. Multi Linked list 
5. Stack (Tumpukan) 
6. Queue (Antrean)
7. Tree 
8. Graph

Setiap model ADT Linked list di atas memiliki karakteristik tertentu dan dalam penggunaannya disesuaikan dengan kebutuhan. Secara umum operasi-operasi ADT pada Linked list, yaitu : 
1. Penciptaan dan inisialisasi list (Create List). 
2. Penyisipan elemen list (Insert). 
3. Penghapusan elemen list (Delete).
4. Penelusuran elemen list dan menampilkannya (View).
5. Pencarian elemen list (Searching). 
6. Pengubahan isi elemen list (Update). 

### A. ...<br/>
...
#### 1. ...
#### 2. ...
#### 3. ...

### B. ...<br/>
...
#### 1. ...
#### 2. ...
#### 3. ...

## Guided 

### 1. list.h

```C++
source code guided 1
#ifndef LIST_H
#define LIST_H
#define Nil NULL

#include <iostream>
using namespace std;

// deklarasi isi data struct mahasiswa
struct mahasiswa {
    string nama;
    string nim;
    int umur;
};

typedef mahasiswa dataMahasiswa;
// memberikan nama alias dataMahasiswa untuk struct mahasiswa

typedef struct node *address;
// mendefinisikan alias address sebagai pointer ke struct node

struct node {
    // node untuk isi dari linked listnya, isi setiap node adalah data & pointer next
    dataMahasiswa isidata;
    address next;
};

struct LinkedList {
    // ini linked listnya
    address first;
};

// semua function & prosedur yang akan dipakai
bool isEmpty(LinkedList List);
void createList(LinkedList &List);
address alokasi(string nama, string nim, int umur);
void dealokasi(address &node);
void printList(LinkedList List);
void insertFirst(LinkedList &List, address nodeBaru);
void insertAfter(LinkedList &List, address nodeBaru, address Prev);
void insertLast(LinkedList &List, address nodeBaru);

void delFirst(LinkedList &List);
void delLast(LinkedList &List);
void delAfter(LinkedList &List, address nodeHapus, address nodePrev);
int nbList(LinkedList List);
void deleteList(LinkedList &List);

#endif
```
penjelasan singkat guided 1
Program ini berfungsi sebagai file header untuk mendefinisikan struktur data Single Linked List yang menyimpan data mahasiswa, serta mendeklarasikan berbagai fungsi untuk menambah, menghapus, menghitung, dan menampilkan data dalam linked list.
### 2. list.cpp

```C++
source code guided 2
// list.cpp
#include "list.h"
#include <iostream>
using namespace std;

// I.S = Initial State / kondisi awal
// F.S = Final State / kondisi akhir

// fungsi untuk cek apakah list kosong atau tidak
bool isEmpty(LinkedList List) {
    if (List.first == Nil) {
        return true;
    } else {
        return false;
    }
}

// pembuatan linked list kosong
void createList(LinkedList &List) {
    /* I.S. sembarang
       F.S. terbentuk list kosong */
    List.first = Nil;
}

// pembuatan node baru dengan menerapkan manajemen memori
address alokasi(string nama, string nim, int umur) {
    /*
       I.S. sembarang
       F.S. mengembalikan alamat node baru dengan isidata = sesuai parameter dan next = Nil
    */
    address nodeBaru = new node;
    nodeBaru->isidata.nama = nama;
    nodeBaru->isidata.nim = nim;
    nodeBaru->isidata.umur = umur;
    nodeBaru->next = Nil;
    return nodeBaru;
}

// penghapusan node dengan menerapkan manajemen memori
void dealokasi(address &node) {
    /*
       I.S. P terdefinisi
       F.S. memori yang digunakan node dikembalikan ke sistem
    */
    node->next = Nil;
    delete node;
}

// prosedur-prosedur untuk insert / menambahkan node baru ke dalam list
void insertFirst(LinkedList &List, address nodeBaru) {
    /*
       I.S. sembarang, P sudah dialokasi
       F.S. menempatkan elemen list (node) pada awal list
    */
    nodeBaru->next = List.first;
    List.first = nodeBaru;
}

void insertAfter(LinkedList &List, address nodeBaru, address Prev) {
    /*
       I.S. sembarang, nodeBaru dan Prev adalah salah satu elemen list (node)
       F.S. menempatkan elemen (node) sesudah elemen node Prev
    */
    if (Prev != Nil) {
        nodeBaru->next = Prev->next;
        Prev->next = nodeBaru;
    } else {
        cout << "Node sebelumnya tidak valid!" << endl;
    }
}

void insertLast(LinkedList &List, address nodeBaru) {
    /*
       I.S. sembarang, nodeBaru sudah dialokasi
       F.S. menempatkan elemen pada akhir list
    */
    if (isEmpty(List)) {
        List.first = nodeBaru;
    } else {
        address nodeBantu = List.first;

        while (nodeBantu->next != Nil) {
            nodeBantu = nodeBantu->next;
        }

        nodeBantu->next = nodeBaru;
    }
}

// prosedur-prosedur untuk delete / menghapus node yang ada di dalam list
void delFirst(LinkedList &List) {
    /*
       I.S. list tidak kosong
       F.S. node pertama di list terhapus
    */
    address nodeHapus;

    if (isEmpty(List) == false) {
        nodeHapus = List.first;
        List.first = List.first->next;
        nodeHapus->next = Nil;
        dealokasi(nodeHapus);
    } else {
        cout << "List kosong!" << endl;
    }
}

void delLast(LinkedList &List) {
    /*
       I.S. list tidak kosong
       F.S. node terakhir di list terhapus
    */
    address nodeHapus, nodePrev;

    if (isEmpty(List) == false) {
        nodeHapus = List.first;

        if (nodeHapus->next == Nil) {
            List.first->next = Nil;
            dealokasi(nodeHapus);
            List.first = Nil;
        } else {
            while (nodeHapus->next != Nil) {
                nodePrev = nodeHapus;
                nodeHapus = nodeHapus->next;
            }

            nodePrev->next = Nil;
            dealokasi(nodeHapus);
        }
    } else {
        cout << "List kosong" << endl;
    }
}

void delAfter(LinkedList &List, address nodeHapus, address nodePrev) {
    /*
       I.S. list tidak kosong, Prev alamat salah satu elemen list
       F.S. nodeBantu adalah alamat dari Prev->next, menghapus Prev->next dari list
    */
    if (isEmpty(List) == true) {
        cout << "List kosong!" << endl;
    } else {
        if (nodePrev != Nil && nodePrev->next != Nil) {
            nodeHapus = nodePrev->next;
            nodePrev->next = nodeHapus->next;
            nodeHapus->next = Nil;
            dealokasi(nodeHapus);
        } else {
            cout << "Node sebelumnya (prev) tidak valid!" << endl;
        }
    }
}

// prosedur untuk menampilkan isi list
void printList(LinkedList List) {
    /*
       I.S. mungkin kosong
       F.S. jika list tidak kosong menampilkan semua info yang ada pada list
    */
    if (isEmpty(List)) {
        cout << "List kosong." << endl;
    } else {
        address nodeBantu = List.first;

        while (nodeBantu != Nil) {
            cout << "Nama : " << nodeBantu->isidata.nama
                 << ", NIM : " << nodeBantu->isidata.nim
                 << ", Usia : " << nodeBantu->isidata.umur
                 << endl;

            nodeBantu = nodeBantu->next;
        }
    }
}

// function untuk menampilkan jumlah node di dalam list
int nbList(LinkedList List) {
    /*
       I.S. list sudah ada
       F.S. menampilkan jumlah node di dalam list
    */
    int count = 0;
    address nodeBantu = List.first;

    while (nodeBantu != Nil) {
        count++;
        nodeBantu = nodeBantu->next;
    }

    return count;
}

// prosedur untuk menghapus list (menghapus semua node di dalam list)
void deleteList(LinkedList &List) {
    /*
       I.S. list sudah ada
       F.S. menghapus semua node di dalam list
    */
    address nodeBantu, nodeHapus;
    nodeBantu = List.first;

    while (nodeBantu != Nil) {
        nodeHapus = nodeBantu;
        nodeBantu = nodeBantu->next;
        dealokasi(nodeHapus);
    }

    List.first = Nil;
    cout << "List sudah terhapus!" << endl;
}
```
penjelasan singkat guided 2
Program ini berfungsi untuk mengimplementasikan struktur data Single Linked List dalam bahasa C++ untuk mengelola data mahasiswa, meliputi pembuatan list, penambahan dan penghapusan node, penampilan data, penghitungan jumlah node, serta penghapusan seluruh isi list menggunakan manajemen memori dinamis.
### 3. Main.cpp

```C++
source code guided 3
// main.cpp
#include "list.h"

#include <iostream>
using namespace std;

int main() {
    LinkedList List;
    address nodeA, nodeB, nodeC, nodeD, nodeE = Nil;

    createList(List);

    dataMahasiswa mhs;

    nodeA = alokasi("Dhimas", "2311102151", 20);
    nodeB = alokasi("Arvin", "2211100014", 21);
    nodeC = alokasi("Rizal", "2311100029", 20);
    nodeD = alokasi("Satrio", "2211102173", 21);
    nodeE = alokasi("Joshua", "2311102133", 21);

    insertFirst(List, nodeA);
    insertLast(List, nodeB);
    insertAfter(List, nodeC, nodeA);
    insertAfter(List, nodeD, nodeC);
    insertLast(List, nodeE);

    cout << "--- ISI LIST SETELAH DILAKUKAN INSERT ---" << endl;
    printList(List);
    cout << "jumlah node : " << nbList(List) << endl;
    cout << endl;

    delFirst(List);
    delLast(List);
    delAfter(List, nodeD, nodeC);

    cout << "--- ISI LIST SETELAH DILAKUKAN DELETE ---" << endl;
    printList(List);
    cout << "jumlah node : " << nbList(List) << endl;
    cout << endl;

    deleteList(List);

    cout << "--- ISI LIST SETELAH DILAKUKAN HAPUS LIST ---" << endl;
    printList(List);
    cout << "jumlah node : " << nbList(List) << endl;
    cout << endl;

    return 0;
}
```
penjelasan singkat guided 3
Program ini berfungsi untuk menguji implementasi Single Linked List dengan membuat list data mahasiswa, melakukan penambahan dan penghapusan node, menampilkan isi serta jumlah node, dan menghapus seluruh list untuk memastikan setiap operasi berjalan sesuai fungsinya.


## Unguided 

### 1. Buatlah ADT Singly Linked list sebagai berikut di dalam file “Singlylist.h” . Kemudian buatlah implementasi dari procedure-procedure yang digunakan didalam file “Singlylist.cpp” Kemudian buat program utama didalam file “main.cpp” dengan implementasi sebagai berikut : 

```C++
source code unguided 1
//singlylist.h
#ifndef SINGLYLIST_H_INCLUDED
#define SINGLYLIST_H_INCLUDED

typedef int infotype;
typedef struct ElmList *address;

struct ElmList {
    infotype info;
    address next;
};

struct List {
    address First;
};

void createList(List &L);
address alokasi(infotype x);
void dealokasi(address &P);
void printInfo(List L);
void insertFirst(List &L, address P);

void deleteFirst(List &L, address &P);
void deleteLast(List &L, address &P);
int nbList(List L);
void deleteList(List &L);

#endif

//singlylist.cpp


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

//main.cpp


#include <iostream>
#include "Singlylist.h"

using namespace std;

int main() {
    List L;
    address P1, P2, P3, P4, P5;

    createList(L);

    P1 = alokasi(2);
    insertFirst(L, P1);

    P2 = alokasi(0);
    insertFirst(L, P2);

    P3 = alokasi(8);
    insertFirst(L, P3);

    P4 = alokasi(12);
    insertFirst(L, P4);

    P5 = alokasi(9);
    insertFirst(L, P5);

    printInfo(L);

    return 0;
}


```
### Output Unguided 1 :

##### Output 1
https://github.com/arkanelhadi-cyber/Laprak-Struktur-Data/blob/main/WEEK%204/unguided/NO%201/Screenshot%202026-10-21%20224803.png

### penjelasan unguided 1 
Program ini berfungsi untuk mengimplementasikan struktur data Single Linked List menggunakan C++ dengan tipe data integer, yang mencakup pembuatan list, penambahan node di awal, penghapusan node pertama dan terakhir, penampilan isi list, penghitungan jumlah node, serta penghapusan seluruh node.

### 2. Dari soal Latihan pertama, lakukan penghapusan node 9 menggunakan deleteFirst(), node 2 menggunakan deleteLast(), dan node 8 menggunakan deleteAfter(). Kemudian tampilkan jumlah node yang tersimpan menggunakan nbList() dan lakukan penghapusan seluruh node menggunakan deleteList(). Output yang diharapkan : 
```C++
source code unguided 2
//singlylist.cpp

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
```
### Output Unguided 2 :

##### Output 1
https://github.com/arkanelhadi-cyber/Laprak-Struktur-Data/blob/main/WEEK%203/UNGUIDED/No%202/Screenshot%202026-10-12%20141300.png

penjelasan unguided 2
Program ini berfungsi untuk mengimplementasikan struktur data Single Linked List menggunakan C++ dengan operasi pembuatan list, penambahan node di akhir, penghapusan node pertama, terakhir, dan setelah node tertentu, serta penghitungan jumlah node dan penghapusan seluruh isi list.


## Kesimpulan
Kesimpulan:

Berdasarkan kedua program Single Linked List tersebut, dapat disimpulkan bahwa struktur data linked list digunakan untuk menyimpan dan mengelola data secara dinamis menggunakan node yang saling terhubung melalui pointer. Kedua program menerapkan operasi dasar seperti penambahan, penghapusan, dan penghitungan jumlah node. Perbedaannya terletak pada implementasi fungsi dan cara penambahan data, yaitu program pertama menambahkan node di awal list, sedangkan program kedua menambahkan node di akhir list.

## Referensi
[1] Triase. (2020). Diktat Edisi Revisi : STRUKTUR DATA. Medan: UNIVERSTAS ISLAM NEGERI SUMATERA UTARA MEDAN. 
<br>[2] Indahyati, Uce., Rahmawati Yunianita. (2020). "BUKU AJAR ALGORITMA DAN PEMROGRAMAN DALAM BAHASA C++". Sidoarjo: Umsida Press. Diakses pada 10 Maret 2024 melalui https://doi.org/10.21070/2020/978-623-6833-67-4.
<br>...
