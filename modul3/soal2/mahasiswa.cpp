#include <iostream>
#include "mahasiswa.h"

using namespace std;
void inputMHS(mahasiswa &m){
  cout << "input nama =";
  cin >> (m).nim;
  cout << "input nilai";
  cin >> (m).nilai1;
 cout <<" input nilai2 =";
 cin >> (m).nilai2;
}

float rata2(mahasiswa m){
  return float(m.nilai1+m.nilai2)/2;
};
