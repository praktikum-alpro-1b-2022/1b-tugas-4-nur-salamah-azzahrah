#include <iostream>
using namespace std;

int main ()
{
    //Tugas 4 nomor 3
    //Memeriksa tahun yang dimasukkan pengguna adalah tahun kabisat atau bukan
    int tahun;
    cout << "Masukkan tahun: ";
    cin >> tahun;
    if ( tahun %400 == 0){
        cout << tahun << " merupakan tahun kabisat\n";
    } else if (tahun %100 == 0){
        cout << tahun << " bukan tahun kabisat\n";
    } else if (tahun %4 == 0){
        cout << tahun << " merupakan tahun kabisat\n";
    }
    else {
        cout << tahun << " bukan tahun kabisat\n";
    }
    return 0;
}
