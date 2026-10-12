#ifndef latihan1_H_INCLUDED
#define latihan1_H_INCLUDED
#include <string>
using namespace std;

struct mahasiswa{
  string nama;
  string nim;
  int uts,uas,tugas;
  float nilaiakhir;
};

void inputmhs(mahasiswa &m);
void tampilmhs(mahasiswa  m);
float hitungnilaiakhir(mahasiswa m);

#endif
