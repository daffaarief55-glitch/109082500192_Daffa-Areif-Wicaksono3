#include <iostream>
#include "latihan1.h"
using namespace std;

float hitungnilaiakhir(mahasiswa m){
    return 0.3 * m.uts + 0.4 * m.uas + 0.3 * m.tugas;
}

void inputmhs(mahasiswa &m){
    cout << "nama  : "; cin >> m.nama;
    cout << "nim   : "; cin >> m.nim;
    cout << "uts   : "; cin >> m.uts;
    cout << "uas   : "; cin >> m.uas;
    cout << "tugas : "; cin >> m.tugas;
    m.nilaiakhir = hitungnilaiakhir(m);
}

void tampilmhs(mahasiswa m){
    cout << m.nama << " | " << m.nim
         << " | nilai akhir = " << m.nilaiakhir << endl;
}
