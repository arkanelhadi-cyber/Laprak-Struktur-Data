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