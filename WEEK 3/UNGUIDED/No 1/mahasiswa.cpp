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