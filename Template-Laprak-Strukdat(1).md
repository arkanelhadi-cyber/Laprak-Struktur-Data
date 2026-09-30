# <h1 align="center">Laporan Praktikum Modul 1 - Codeblocks IDE & Pengenalan Bahas C++ (Bagian Pertama)</h1>
<p align="center">Hably Arkan El Hady -109082500204 </p>

## Dasar Teori
isi dengan penjelasan dasar teori disertai referensi jurnal (gunakan kurung siku [] untuk pernyataan yang mengambil refernsi dari jurnal).
contoh :
Linked list atau yang disebut juga senarai berantai adalah Salah satu bentuk struktur data yang berisi kumpulan data yang tersusun secara sekuensial, saling bersambungan, dinamis, dan terbatas[1]. Linked list terdiri dari sejumlah node atau simpul yang dihubungkan secara linier dengan bantuan pointer.

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

### 1. ...

```C++
source code guided 1
```
penjelasan singkat guided 1

### 2. ...

```C++
source code guided 2
```
penjelasan singkat guided 2

### 3. ...

```C++
source code guided 3
```
penjelasan singkat guided 3

## Unguided 

### 1. Buatlah program yang menerima input-an dua buah bilangan betipe float, kemudian memberikan output-an hasil penjumlahan, pengurangan, perkalian, dan pembagian dari dua bilangan tersebut. 

```C++
source code unguided 1
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
```
### Output Unguided 1 :

##### Output 1
https://github.com/arkanelhadi-cyber/Laprak-Struktur-Data/blob/main/Unguided/Unguided%201/Screenshot%202026-09-30%20114718.png

##### Output 2
https://github.com/arkanelhadi-cyber/Laprak-Struktur-Data/blob/main/Unguided/Unguided%201/Screenshot%202026-09-30%20114730.png

penjelasan unguided 1 
sebuah program yang menginputkan angka pertama dan angka kedua dalam proses aritmatika

### 2. Buatlah sebuah program yang menerima masukan angka dan mengeluarkan output nilai angka tersebut dalam bentuk tulisan. Angka yang akan di- input-kan user adalah bilangan bulat positif mulai dari 0 s.d 100 
```C++
source code unguided 2
#include <iostream>
#include <string>

using namespace std;

string terbilang(int angka) {
	string satuan[] = {"nol", "satu", "dua", "tiga", "empat", "lima", "enam", "tujuh", "delapan", "sembilan"};

	if (angka < 10) {
		return satuan[angka];
	}
	if (angka == 10) {
		return "sepuluh";
	}
	if (angka == 11) {
		return "sebelas";
	}
	if (angka < 20) {
		return satuan[angka - 10] + " belas";
	}
	if (angka == 100) {
		return "seratus";
	}
	if (angka < 100) {
		int puluhan = angka / 10;
		int sisa = angka % 10;
		string hasil = satuan[puluhan] + " puluh";
		if (sisa != 0) {
			hasil += " " + satuan[sisa];
		}
		return hasil;
	}

	return "";
}

int main() {
	int angka;
	cout << "Masukkan angka (0-100): ";
	cin >> angka;

	if (cin.fail() || angka < 0 || angka > 100) {
		cout << "Input harus berupa bilangan bulat dari 0 sampai 100." << endl;
		return 1;
	}

	cout << terbilang(angka) << endl;
	return 0;
}
```
### Output Unguided 2 :

##### Output 1
https://github.com/arkanelhadi-cyber/Laprak-Struktur-Data/blob/main/Unguided/Unguided%202/Screenshot%202026-09-30%20195642.png

##### Output 2
https://github.com/arkanelhadi-cyber/Laprak-Struktur-Data/blob/main/Unguided/Unguided%202/Screenshot%202026-09-30%20195648.png

penjelasan unguided 2
Sebuah program yang mengubah angka menjadi huruf

### 3. Buatlah program yang dapat memberikan input dan output sbb. 

```C++
source code unguided 3
#include <iostream>
using namespace std;

int main() {
    int angka;
    cout << "Masukkan angka: ";
    cin >> angka;
    for (int i = 0; i < angka ; i++) {
        for (int k = 0; k < i; k++) {
            cout << "  ";
        }
        for (int j = angka-i; j > 0; j--) {
            cout << j << " ";
        }
        cout << "* ";
        for (int j = 1 ; j <= angka-i; j++) {
            cout << j << " ";
        }   
        cout << '\n';
    }
    for(int i =0; i < angka; i++)
    {
        cout << "  ";
    }
    cout << "*";
    return 0;
}
```
### Output Unguided 3 :

##### Output 1
https://github.com/arkanelhadi-cyber/Laprak-Struktur-Data/blob/main/Unguided/Unguided%203/Screenshot%202026-09-30%20200242.png

##### Output 2
https://github.com/arkanelhadi-cyber/Laprak-Struktur-Data/blob/main/Unguided/Unguided%203/Screenshot%202026-09-30%20200252.png

penjelasan unguided 3
Sebuah program  yang membentuk pola angka dengan dua sisi: angka menurun di kiri, tanda * di tengah, dan angka menaik dikanan; setiap baris makin menjorok ke kanan

## Kesimpulan
Berdasarkan tiga program unguided yang telah dibuat, dapat disimpulkan bahwa bahasa C++ dapat digunakan untuk mengolah input dan menghasilkan output sesuai kebutuhan. Pada Unguided 1, digunakan variabel bertipe `float` dan operator aritmatika untuk melakukan penjumlahan, pengurangan, perkalian, serta pembagian. Pada Unguided 2, dibuat fungsi `terbilang()` dan percabangan untuk mengubah bilangan bulat dari 0 sampai 100 menjadi bentuk tulisan. Pada Unguided 3, digunakan perulangan bersarang untuk membentuk pola angka menurun, tanda `*`, dan angka menaik. Ketiga program tersebut membantu memahami penggunaan variabel, input-output, fungsi, percabangan, operator, serta perulangan dalam pemrograman C++.

## Referensi
[1] Triase. (2020). Diktat Edisi Revisi : STRUKTUR DATA. Medan: UNIVERSTAS ISLAM NEGERI SUMATERA UTARA MEDAN. 
<br>[2] Indahyati, Uce., Rahmawati Yunianita. (2020). "BUKU AJAR ALGORITMA DAN PEMROGRAMAN DALAM BAHASA C++". Sidoarjo: Umsida Press. Diakses pada 10 Maret 2024 melalui https://doi.org/10.21070/2020/978-623-6833-67-4.
<br>...
