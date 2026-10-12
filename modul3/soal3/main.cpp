#include <iostream>
#include "matriks.h"
using namespace std;

int main(){
    int A[3][3] = {{1,2,3},{4,5,6},{7,8,9}};
    int B[3][3] = {{9,8,7},{6,5,4},{3,2,1}};
    int x = 10, y = 20;
    int *p1 = &x;
    int *p2 = &y;

    cout << "Array A:" << endl;
    tampilArray(A);
    cout << "Array B:" << endl;
    tampilArray(B);

    cout << "\nTukar A[1][2] dengan B[1][2]" << endl;
    tukarArray(A, B, 1, 2);
    cout << "Array A:" << endl;
    tampilArray(A);
    cout << "Array B:" << endl;
    tampilArray(B);

    cout << "\nSebelum tukar pointer: x = " << x << ", y = " << y << endl;
    tukarPointer(p1, p2);
    cout << "Sesudah tukar pointer: x = " << x << ", y = " << y << endl;

    return 0;
}
