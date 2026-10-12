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