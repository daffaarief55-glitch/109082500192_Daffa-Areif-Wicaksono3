#include <iostream>
#include "latihan1.h"
using namespace std;

int main(){
    mahasiswa data[10];
    int n;

    cout << "jumlah mahasiswa (maks 10): ";
    cin >> n;

    for(int i = 0; i < n; i++){
        cout << "\nMahasiswa ke-" << i + 1 << endl;
        inputmhs(data[i]);
    }

    cout << "\n=== Data Mahasiswa ===" << endl;
    for(int i = 0; i < n; i++){
        tampilmhs(data[i]);
    }
    return 0;
}
