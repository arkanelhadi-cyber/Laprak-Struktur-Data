# <h1 align="center">Modul 2 PENGENALAN BAHASA C++ (BAGIAN KEDUA)</h1>
<p align="center">Hably Arkan El Hady -109082500204 </p>

## Dasar Teori
Dalam pemrograman C++, pemahaman mengenai struktur data dasar, dan alokasi memori kode sangatlah penting. Konsep dasar yang sering digunakan antara lain Pointer, Function, dan Procedure.

A. Pointer
Pointer adalah variabel yang menyimpan alamat memori dari variabel lain, bukan menyimpan nilainya secara langsung. Dengan pointer, kita dapat melakukan perubahan data langsung di lokasi memori, serta dapat memindahkan variabel pada program.

B. Function
Function adalah blok kode terpisah yang menerima masukan (parameter), melakukan proses tertentu, dan mengembalikan suatu nilai (return value) ke pemanggilnya.

C. Procedure
Procedure pada dasarnya mirip dengan fungsi, namun tidak mengembalikan nilai (menggunakan tipe void). Prosedur digunakan untuk mengeksekusi serangkaian instruksi seperti menampilkan output atau mengubah nilai variabel global.

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

### 1. Array 1

```C++
source code guided 1
#include <iostream>
using namespace std;

int main() {
   int nilai[5];

   nilai[0] = 80;
   nilai[1] = 75;  
   nilai[2] = 90;
   nilai[3] = 85;
    nilai[4] = 95;

    for (int i = 0; i < 5; i++) {
        cout << "Nilai ke-" << i + 1 << "="
         << nilai[i] << endl;
    }

    return 0;
}
```
penjelasan singkat guided 1
Program ini mendeskripsikan penggunaan Array 1 Dimensi berukuran 5 elemen untuk menyimpan nilai integer, lalu mencetak setiap elemennya menggunakan perulangan for.
### 2. Array 2

```C++
source code guided 2
#include <iostream>
using namespace std;

int main() {
    int nilai[3][3] = {
        {80, 75, 90},
        {85, 90, 88},
        {70, 80, 85}
    };

    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            cout << nilai[i][j] << " ";
        }
        cout << endl; 
    }
    cout << endl;
    cout << nilai[1][2] << endl; 
    return 0;
}
```
penjelasan singkat guided 2
Program mengimplementasikan Array 2 Dimensi (matriks 3x3). Program menampilkan seluruh matriks menggunakan nested loop serta mengakses elemen spesifik pada baris indeks ke-1 dan kolom indeks ke-2.
### 3. Array 3

```C++
source code guided 3
#include <iostream>
using namespace std;

int main() {
   int data [2][3][3] = {
    { 
        {10, 20, 30},
        {40, 50, 60},
   },
    {
        {70, 80, 90},
        {100, 110, 120},
    }
   };

   cout << data[0][1][2] << endl;
   return 0;
}
```
penjelasan singkat guided 3
Program ini mendemonstrasikan Array 3 Dimensi berukuran 2 x 2 x 3 dan mencetak nilai pada posisi indeks [0][1][2], yaitu 60.

### 4. Alamat

```C++
source code guided 4
#include <iostream>
using namespace std;

int main(){
    int angka = 100;

    cout << "Nilai angka = " << angka << endl;
    cout << "Alamat angka = " << &angka << endl;

    return 0;
}
```
penjelasan singkat guided 4
Program ini menampilkan nilai dari variabel angka (100) dan mengakses alamat memori variabel tersebut di RAM dengan menggunakan operator address-of (&angka).

### 5. Pointer 1 dan 2

```C++
source code guided 5
//Pointer 1
#include <iostream>
using namespace std;

int main(){
    char arr[6];

    arr[0] = 'a';
    arr[1] = 'b';
    arr[2] = 'c';  
    arr[3] = 'b';
    arr[4] = 'd';
    arr[5] = 'e';

    cout << arr[3] << endl;
    cout << &(arr[4]) << endl;
    
    return 0;
}
//Pointer 2
#include <iostream>
using namespace std;

int main() {
    int angka = 100;
    int *pointer;
    
    pointer = &angka;

    cout << "Nilai angka = " << angka << endl;
    cout << "Alamat angka = " << &angka << endl;
    cout << "Nilai pointer = " << pointer << endl;
    cout << "Nilai yang ditunjuk pointer = " << *pointer << endl;

    return 0;
}
```
penjelasan guided 5
Program menampilkan nilai elemen array karakter pada indeks ke-3 ('b') dan menampilkan alamat memori dari elemen indeks ke-4 (&(arr[4])) menggunakan operator address-of (&). Program ini menunjukkan dasar variabel pointer. Variabel pointer menyimpan alamat dari angka, dan operator dereference (*pointer) digunakan untuk mengakses nilai yang ada pada alamat tersebut (100).

### 6. Function

```C++
source code guided 6
#include <iostream>
using namespace std;

int maks3(int a, int b, int c) {
    int temp_maks = a;

    if (b > temp_maks) 
        temp_maks = b;
    
    if (c > temp_maks) 
        temp_maks = c;
    
    return temp_maks;
}

int main (){
    int x, y, z;

    cout <<"masukan nilai 1 : ";
    cin >> x;

    cout <<"masukan nilai 2 : ";
    cin >> y;

    cout <<"masukan nilai 3 : ";
    cin >> z;

    cout << "nilai maksimum ="
         << maks3(x, y, z) << endl;

    return 0;
}
```
penjelasan guided 6
Program menggunakan fungsi maks3() yang menerima 3 masukan integer dan mengembalikan nilai terbesar di antara ketiganya.

### 7. Procedure

```C++
source code guided 7
#include <iostream>
using namespace std;

void sapa() {
    cout << "Hello, selamat datang di praktikum minggu ke-2" << endl;
}

int main() {
    sapa();
    return 0;
}
```
penjelasan guided 7
Program ini menggunakan prosedur sapa() bernilai balik void untuk menampilkan teks ucapan selamat datang di layar tanpa mengembalikan nilai data apapun.

### 8. CallByValue / Pointer / Reference

```C++
source code guided 8
//Value
#include <iostream>
using namespace std;

void tukar(int &x, int &y) {
    int temp;

    temp = x;
    x = y;
    y = temp;
}

int main(){
    int a = 4;
    int b = 6;

    cout << "Sebelum ditukar: " << endl;
    cout << "a = " << a << endl;
    cout << "b = " << b << endl;

    tukar(a, b);

    cout << "\nSetelah ditukar: " << endl;
    cout << "a = " << a << endl;
    cout << "b = " << b << endl;

    return 0;
}
//Pointer
#include <iostream>
using namespace std;

void tukar (int *x, int *y) {
    int temp;

    temp = *x;
    *x = *y;
    *y = temp;
}

int main() {
    int a = 4;
    int b = 6;

    cout << "Sebelum ditukar: " << endl;
    cout << "a = " << a << endl;
    cout << "b = " << b << endl;

    tukar(&a, &b);

    cout << "\nSetelah ditukar: " << endl;
    cout << "a = " << a << endl;
    cout << "b = " << b << endl;

    return 0;
}
//Reference
#include <iostream>

using namespace std;

void tukar(int &x, int &y);

int main () {
    int a, b;
    a=4;  b=6;
    cout << "kondisi sebelum ditukar \n";
    cout << " a = "<<a<<" b = "<<b<<endl;
    tukar(a,b);
    cout<<"kondisi setelah ditukar \n";
    cout << " a = "<<a<<" b = "<<b<<endl;
    return 0;
}

void tukar (int &x, int &y) {
    int temp;
    temp = x;
    x = y;
    y = temp;
    cout<< "nilai akhir pada fungsi tukar \n";
    cout << " x = "<<x<<" y="<<y<<endl;
}
```
penjelasan guided 8
Program membandingkan 3 metode pemanggilan parameter:Call by Value: Perubahan nilai di fungsi tidak mengubah nilai asli variabel di main(). Call by Pointer: Mengirimkan alamat memori (&a), perubahan pada pointer mempengaruhi nilai asli variabel di main(). Call by Reference: Menggunakan alias (&x), perubahan langsung mengubah variabel asli di main()

## Unguided 

### 1. Buatlah program yang dapat melakukan operasi penjumlahan, pengurangan, dan perkalian matriks 3x3 

```C++
source code unguided 1
#include <iostream>
using namespace std;

int main() {
    int A[3][3] = {
        {1, 2, 3},
        {4, 5, 6},
        {7, 8, 9}
    };

    int B[3][3] = {
        {9, 8, 7},
        {6, 5, 4},
        {3, 2, 1}
    };

    int Hasil[3][3];

    cout << "=== HASIL PENJUMLAHAN (A + B) ===" << endl;
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            Hasil[i][j] = A[i][j] + B[i][j];
            cout << Hasil[i][j] << "\t";
        }
        cout << endl;
    }
    cout << endl;

    cout << "=== HASIL PENGURANGAN (A - B) ===" << endl;
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            Hasil[i][j] = A[i][j] - B[i][j];
            cout << Hasil[i][j] << "\t";
        }
        cout << endl;
    }
    cout << endl;

    cout << "=== HASIL PERKALIAN (A x B) ===" << endl;
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            
            Hasil[i][j] = 0;

            for (int k = 0; k < 3; k++) {
                Hasil[i][j] += A[i][k] * B[k][j];
            }

            cout << Hasil[i][j] << "\t";
        }
        cout << endl;
    }

    return 0;
}
```
### Output Unguided 1 :

##### Output 1
https://github.com/arkanelhadi-cyber/Laprak-Struktur-Data/blob/main/WEEK%202/Laprak%20W2/Unguided%201/Screenshot%202026-10-07%20113108.png


### penjelasan unguided 1 
Program mengimplementasikan Array 2D untuk menghitung matriks 3x3. Operasi penjumlahan dan pengurangan dihitung elemen per elemen, sedangkan perkalian matriks menggunakan tiga tingkatan perulangan (nested loop) untuk mengalikan baris matriks A dengan kolom matriks B

### 2. Berdasarkan guided pointer dan reference sebelumnya, buatlah keduanya dapat menukar nilai dari 3 variabel
```C++
source code unguided 2
//Pointer

#include <iostream>
using namespace std;

void tukar(int *x, int *y, int *z) {
    int temp = *x; 
    *x = *z;       
    *z = *y;       
    *y = temp;    
}

int main() {
    int a = 4;
    int b = 6;
    int c = 8;

    cout << "Sebelum ditukar:" << endl;
    cout << "a = " << a << ", b = " << b << ", c = " << c << endl;

    tukar(&a, &b, &c);

    cout << "\nSetelah ditukar:" << endl;
    cout << "a = " << a << ", b = " << b << ", c = " << c << endl;

    return 0;
}

//Reference
#include <iostream>
using namespace std;

void tukar(int *x, int *y, int *z) {
    int temp = *x; 
    *x = *z;       
    *z = *y;       
    *y = temp;    
}

int main() {
    int a = 4;
    int b = 6;
    int c = 8;

    cout << "Sebelum ditukar:" << endl;
    cout << "a = " << a << ", b = " << b << ", c = " << c << endl;

    tukar(&a, &b, &c);

    cout << "\nSetelah ditukar:" << endl;
    cout << "a = " << a << ", b = " << b << ", c = " << c << endl;

    return 0;
}
```
### Output Unguided 2 :

##### Output 1
https://github.com/arkanelhadi-cyber/Laprak-Struktur-Data/blob/main/WEEK%202/Laprak%20W2/Unguided%202/Pointer/Screenshot%202026-10-07%20193647.png

##### Output 2
https://github.com/arkanelhadi-cyber/Laprak-Struktur-Data/blob/main/WEEK%202/Laprak%20W2/Unguided%202/Reference/Screenshot%202026-10-07%20193723.png

penjelasan unguided 2
Program ini melakukan penukaran posisi nilai 3 variabel (a, b, c) secara berputar menggunakan fungsi dengan perantara pointer (*) dan reference (&), sehingga nilai pada variabel di main() langsung berubah.

### 3. Diketahui sebuah array 1 dimensi sebagai berikut : arrA = {11, 8, 5, 7, 12, 26, 3, 54, 33, 55} Buatlah program yang dapat mencari nilai minimum, maksimum, dan rata – rata dari array tersebut! Gunakan function cariMinimum() untuk mencari nilai minimum dan function cariMaksimum() untuk mencari nilai maksimum, serta gunakan prosedur hitungRataRata() untuk menghitung nilai rata – rata! Buat program menggunakan menu switch-case seperti berikut ini : --- Menu Program Array --- • Tampilkan isi array • cari nilai maksimum • cari nilai minimum • Hitung nilai rata - rata. 

```C++
source code unguided 3
#include <iostream>
using namespace std;


int cariMaksimum(int arr[], int ukuran) {
    int maksimum = arr[0];

    for (int i = 1; i < ukuran; i++) {
        if (arr[i] > maksimum) {
            maksimum = arr[i];
        }
    }

    return maksimum;
}


int cariMinimum(int arr[], int ukuran) {
    int minimum = arr[0];

    for (int i = 1; i < ukuran; i++) {
        if (arr[i] < minimum) {
            minimum = arr[i];
        }
    }

    return minimum;
}


void hitungRataRata(int arr[], int ukuran) {
    int total = 0;

    for (int i = 0; i < ukuran; i++) {
        total += arr[i];
    }

    double rataRata = (double) total / ukuran;

    cout << "Nilai rata-rata = " << rataRata << endl;
}

int main() {

    int arrA[] = {11, 8, 5, 7, 12, 26, 3, 54, 33, 55};

    int ukuran = 10;
    int pilihan;

    do {
        cout << "\n===== Menu Program Array =====\n";
        cout << "1. Tampilkan isi array\n";
        cout << "2. Cari nilai maksimum\n";
        cout << "3. Cari nilai minimum\n";
        cout << "4. Hitung nilai rata-rata\n";
        cout << "5. Keluar\n";
        cout << "Pilih menu: ";
        cin >> pilihan;

        switch (pilihan) {

            case 1:
                cout << "\nIsi array:\n";

                for (int i = 0; i < ukuran; i++) {
                    cout << arrA[i] << " ";
                }

                cout << endl;
                break;

            case 2:
                cout << "\nNilai maksimum = "
                     << cariMaksimum(arrA, ukuran) << endl;
                break;

            case 3:
                cout << "\nNilai minimum = "
                     << cariMinimum(arrA, ukuran) << endl;
                break;

            case 4:
                cout << "\n";
                hitungRataRata(arrA, ukuran);
                break;

            case 5:
                cout << "\nProgram selesai.\n";
                break;

            default:
                cout << "\nPilihan tidak tersedia!\n";
        }

    } while (pilihan != 5);

    return 0;
}
```
### Output Unguided 3 :

##### Output 1
https://github.com/arkanelhadi-cyber/Laprak-Struktur-Data/blob/main/WEEK%202/Laprak%20W2/Unguided%203/Screenshot%202026-10-07%20194228.png

### penjelasan unguided 3
Program ini mengelola data array 1 dimensi menggunakan mwnu switch-case. Perhitungan nilai minimum dan maksimum dikembalikan melalui fungsi cariMinimum() dan cariMaksimum(), sedangkan pencetakan array dan perhitungan rata-rata dilakukan melalui prosedur

## Kesimpulan
1. Array (1D, 2D, 3D) memfasilitasi pengelompokan dan pengolahan data sejenis secara berurutan di dalam memori.
2. Pointer dan Reference memungkinkan manipulasi data langsung pada lokasi memori fisik melalui pemanggilan parameter.(Call by Pointer/Reference).
3. Function dan Procedure meningkatkan modularitas kode C++ sehingga program menjadi lebih rapi dan mudah dikembangkan.
## Referensi
[1] Triase. (2020). Diktat Edisi Revisi : STRUKTUR DATA. Medan: UNIVERSTAS ISLAM NEGERI SUMATERA UTARA MEDAN. 
<br>[2] Indahyati, Uce., Rahmawati Yunianita. (2020). "BUKU AJAR ALGORITMA DAN PEMROGRAMAN DALAM BAHASA C++". Sidoarjo: Umsida Press. Diakses pada 10 Maret 2024 melalui https://doi.org/10.21070/2020/978-623-6833-67-4.
<br>...
