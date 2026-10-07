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