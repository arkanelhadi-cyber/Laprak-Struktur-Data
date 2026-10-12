# <h1 align="center">Modul 3 ABSTRACT DATA TYPE (ADT)  </h1>
<p align="center">Hably Arkan El Hady -109082500204 </p>

## Dasar Teori
ADT adalah TYPE dan sekumpulan PRIMITIF (operasi dasar) terhadap TYPE tersebut. Selain itu, dalam sebuah ADT yang lengkap, disertakan pula definisi invarian dari TYPE dan aksioma yang berlaku. ADT merupakan definisi STATIK.

Definisi type dari sebuah ADT dapat mengandung sebuah definisi ADT lain. Misalnya:
1.ADT waktu yang terdiri dari dari ADT JAM dan ADT DATE
2.Garis terdiri dari dua buah ADT POINT

Segi4 yang terdiri dari pasangan dua buah POINT (Top, Left) dan (Bottom,Right)

TYPE  diterjemahkan menjadi type terdefinisi dalam bahasa yang bersangkutan. Jika dalam bahasa C menggunakan struct PRIMITIF, dalam konteks prosedural, diterjemahkan menjadi fungsi atau prosedur. PRIMITIF dikelompokan menjadi: 

1.Konstruktor/Kreator, pemebentuk nilai type.Semua objek (variabel) bertype tersebut harus melalui konstruktor. Biasanya namanya diawali Make. 
2.Selector, untuk mengakses tipe komponen(biasanya namanya diawali Get).
3.Prosedur pengubah nilai komponen (biasanya namanya diawali Get). 
4.Tipe validator komponen, yang dipakai untuk mentest apakah dapat membentuk tipe sesuai dengan batasan
5.Destruktor/Dealokator yaitu untuk “menghancurkan” nilai objek/variabel (sekaligus memori penyimpanannya).
6.Baca/Tulis, untuk interface dengan input/output device.
7.Operator relasional, terhadap tipe tersebut untuk mendefinisikan lebih besar, lebih kecil, sama dengan dan sebagainya.
8.Aritmatika terhadap tipe tersebut, karena biasanya aritmatika dalam bahasa C hanya terdefinisi untuk bilangan numerik.
9.Konversi dari tipe tersebut ke tipe dasar dan sebaliknya

ADT biasanya diimplementasikan menjadi dua buah modul utama dan 1 modul interface program utama (driver). Dua modul tersebut adalah sebagai berikut: 

1.Definisi/Spesifikasi Type dan Primitif/Header fungsi (.h) 
-Spesifikasi type sesuai dengan kaidah bahasa yang dipakai 
-Spesifikasi dari primitif sesuai dengan kaidah dalam konteks prosedural,yaitu: 
-Fungsi : nama, domain, range, dan prekondisi jika ada 
-Prosedur : Initial state, Final state, dan proses yang dilakukan

2.Body/realisasi dari primitif (.c) 
Berupa kode program dalam bahasa yang bersangkutan (dalam praktikum ini berarti dengan bahasa C++). Realisasi fungsi dan prosedur harus sedapat mungkin memanfaatkan selector dan konstruktor. Untuk memahami lebih jelas mengenai konsep ADT, perhatikan ilustrasi berikut. 

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

### 1. mahasiswa.h

```C++
source code guided 1
#ifndef MAHASISWA_H_INCLUDED
#define MAHASISWA_H_INCLUDED
#include <string>
using namespace std;

struct mahasiswa {
    string nama;
    string nim;
    float uts, uas, tugas;
    float nilaiAkhir;
};

float hitungNilaiAkhir(float uts, float uas, float tugas);
void inputMhs(mahasiswa &m);
void tampilMhs(mahasiswa m);

#endif // MAHASISWA_H_INCLUDED
```
penjelasan singkat guided 1
Program ini berfungsi sebagai file header yang mendefinisikan struktur data mahasiswa serta deklarasi fungsi untuk menginput, menghitung, dan menampilkan data mahasiswa.
### 2. Mahasiswa.cpp

```C++
source code guided 2
#include <iostream>
#include "mahasiswa.h"

using namespace std;

void inputMhs(mahasiswa &m) {
    cout << "input nim = ";
    cin >> (m).nim;
    cout << "input nilai = ";
    cin >> (m).nilai1;
    cout << "input nilai2 = ";
    cin >> (m).nilai2;
}

float rata2(mahasiswa m) {
    return float(m.nilai1+m.nilai2)/2;
}
```
penjelasan singkat guided 2
Program ini berfungsi untuk menginput data NIM dan dua nilai mahasiswa, kemudian menghitung rata-rata dari kedua nilai tersebut.
### 3. Main.cpp

```C++
source code guided 3
#include <iostream>
#include "mahasiswa.h"
using namespace std;

int main() {
    mahasiswa mhs;
    inputMhs(mhs);
    cout << "rata-rata = " << rata2(mhs) ;
    return 0;
}
```
penjelasan singkat guided 3
Program ini berfungsi untuk menginput data NIM dan dua nilai mahasiswa, kemudian menghitung rata-rata dari kedua nilai tersebut.


## Unguided 

### 1. Buat program yang dapat menyimpan data mahasiswa (max. 10) ke dalam sebuah array dengan field nama, nim, uts, uas, tugas, dan nilai akhir. Nilai akhir diperoleh dari FUNGSI dengan rumus 0.3*uts+0.4*uas+0.3*tugas.

```C++
source code unguided 1
//mahasiswa.h
#ifndef MAHASISWA_H_INCLUDED
#define MAHASISWA_H_INCLUDED
#include <string>
using namespace std;

struct mahasiswa {
    string nama;
    string nim;
    float uts, uas, tugas;
    float nilaiAkhir;
};

float hitungNilaiAkhir(float uts, float uas, float tugas);
void inputMhs(mahasiswa &m);
void tampilMhs(mahasiswa m);

#endif // MAHASISWA_H_INCLUDED

//mahasiswa.cpp
#include <iostream>
#include "mahasiswa.h"
using namespace std;

float hitungNilaiAkhir(float uts, float uas, float tugas) {
    return 0.3 * uts + 0.4 * uas + 0.3 * tugas;
}

void inputMhs(mahasiswa &m) {
    cout << "Nama   : "; cin >> m.nama;
    cout << "NIM    : "; cin >> m.nim;
    cout << "UTS    : "; cin >> m.uts;
    cout << "UAS    : "; cin >> m.uas;
    cout << "Tugas  : "; cin >> m.tugas;
    m.nilaiAkhir = hitungNilaiAkhir(m.uts, m.uas, m.tugas);
}

void tampilMhs(mahasiswa m) {
    cout << m.nama << " | " << m.nim << " | UTS: " << m.uts
         << " | UAS: " << m.uas << " | Tugas: " << m.tugas
         << " | Nilai Akhir: " << m.nilaiAkhir << endl;
}

//main.cpp
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
```
### Output Unguided 1 :

##### Output 1
https://github.com/arkanelhadi-cyber/Laprak-Struktur-Data/blob/main/WEEK%203/UNGUIDED/No%201/Screenshot%202026-10-12%20141009.png

### penjelasan unguided 1 
Program ini berfungsi untuk mengelola data nilai mahasiswa, mulai dari menginput data mahasiswa, menghitung nilai akhir berdasarkan bobot UTS, UAS, dan tugas, hingga menampilkan daftar mahasiswa beserta nilai akhirnya.

### 2. Buatlah ADT pelajaran sebagai berikut di dalam file "pelajaran.h"
```C++
source code unguided 2
//Pelajaran.h

#ifndef PELAJARAN_H_INCLUDED
#define PELAJARAN_H_INCLUDED
#include <string>
using namespace std;

struct pelajaran {
    string namaMapel;
    string kodeMapel;
};

pelajaran create_pelajaran(string namapel, string kodepel);
void tampil_pelajaran(pelajaran pel);

#endif // PELAJARAN_H_INCLUDED

//pelajaran.cpp
#include <iostream>
#include "pelajaran.h"
using namespace std;

pelajaran create_pelajaran(string namapel, string kodepel) {
    pelajaran p;
    p.namaMapel = namapel;
    p.kodeMapel = kodepel;
    return p;
}

void tampil_pelajaran(pelajaran pel) {
    cout << "nama pelajaran : " << pel.namaMapel << endl;
    cout << "nilai : " << pel.kodeMapel << endl;
}

//main.cpp
#include <iostream>
#include "pelajaran.h"
using namespace std;

int main() {
    string namapel = "Struktur Data";
    string kodepel = "STD";
    pelajaran pel = create_pelajaran(namapel, kodepel);
    tampil_pelajaran(pel);

    return 0;
}
```
### Output Unguided 2 :

##### Output 1
https://github.com/arkanelhadi-cyber/Laprak-Struktur-Data/blob/main/WEEK%203/UNGUIDED/No%202/Screenshot%202026-10-12%20141300.png

penjelasan unguided 2
Program ini berfungsi untuk membuat dan menampilkan data pelajaran menggunakan tipe data bentukan `struct`, dengan menyimpan nama mata pelajaran dan kode pelajaran melalui fungsi `create_pelajaran()` serta menampilkannya menggunakan fungsi `tampil_pelajaran()`.

### 3. Buatlah program dengan ketentuan : 
-2 buah array 2D integer berukuran 3x3 dan 2 buah pointer integer 
-fungsi/prosedur yang menampilkan isi sebuah array integer 2D 
-fungsi/prosedur yang akan menukarkan isi dari 2 array integer 2D pada posisi tertentu 
-fungsi/prosedur yang akan menukarkan isi dari variabel yang ditunjuk oleh 2 buah pointer  

```C++
source code unguided 3
#include <iostream>
using namespace std;

void tampilArray(int arr[3][3]) {
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            cout << arr[i][j] << "\t";
        }
        cout << endl;
    }
}

void tukarArray(int A[3][3], int B[3][3], int baris, int kolom) {
    int temp = A[baris][kolom];
    A[baris][kolom] = B[baris][kolom];
    B[baris][kolom] = temp;
}
void tukarPointer(int *p1, int *p2) {
    int temp = *p1;
    *p1 = *p2;
    *p2 = temp;
}

int main() {
    int A[3][3] = {{1, 2, 3}, {4, 5, 6}, {7, 8, 9}};
    int B[3][3] = {{10, 20, 30}, {40, 50, 60}, {70, 80, 90}};

    int x = 100, y = 200;
    int *p1 = &x;
    int *p2 = &y;

    cout << "Array A:" << endl; tampilArray(A);
    cout << "\nArray B:" << endl; tampilArray(B);

    int baris = 1, kolom = 1;
    tukarArray(A, B, baris, kolom);
    cout << "\nSetelah tukar posisi [" << baris << "][" << kolom << "]" << endl;
    cout << "Array A:" << endl; tampilArray(A);
    cout << "\nArray B:" << endl; tampilArray(B);

    cout << "\nSebelum tukar pointer: *p1 = " << *p1 << ", *p2 = " << *p2 << endl;
    tukarPointer(p1, p2);
    cout << "Sesudah tukar pointer: *p1 = " << *p1 << ", *p2 = " << *p2 << endl;

    return 0;
}
```
### Output Unguided 3 :

##### Output 1
https://github.com/arkanelhadi-cyber/Laprak-Struktur-Data/blob/main/WEEK%203/UNGUIDED/No%202/Screenshot%202026-10-12%20141300.png

### penjelasan unguided 3
Program ini berfungsi untuk menampilkan array dua dimensi berukuran 3×3, menukar elemen pada posisi tertentu antara dua array, serta menukar nilai variabel menggunakan pointer dalam bahasa C++.

## Kesimpulan
dapat disimpulkan bahwa bahasa pemrograman C++ memiliki berbagai fitur untuk mengolah data, seperti penggunaan tipe data bentukan (struct), fungsi, array dua dimensi, dan pointer. Program data mahasiswa digunakan untuk menginput, menghitung, dan menampilkan nilai akhir mahasiswa, sedangkan program array dan pointer digunakan untuk menampilkan serta menukar elemen array dan nilai variabel. Dengan memahami konsep-konsep tersebut, program dapat disusun secara lebih terstruktur, efisien, dan mudah dipahami.

## Referensi
[1] Triase. (2020). Diktat Edisi Revisi : STRUKTUR DATA. Medan: UNIVERSTAS ISLAM NEGERI SUMATERA UTARA MEDAN. 
<br>[2] Indahyati, Uce., Rahmawati Yunianita. (2020). "BUKU AJAR ALGORITMA DAN PEMROGRAMAN DALAM BAHASA C++". Sidoarjo: Umsida Press. Diakses pada 10 Maret 2024 melalui https://doi.org/10.21070/2020/978-623-6833-67-4.
<br>...
