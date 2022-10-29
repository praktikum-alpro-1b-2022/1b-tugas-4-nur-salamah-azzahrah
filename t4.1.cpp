#include <iostream>
using namespace std;

int main ()
{
    //Tugas 4 nomor 1
    //Membedakan antara angka genap dan ganjil
    int bilangan;
    cout << "Masukkan bilangan : ";
    cin  >> bilangan;
    if (bilangan %2 == 0){
        cout << bilangan << " adalah bilangan genap\n";
    }else{
        cout << bilangan << " adalah bilangan ganjil\n";
    }
    return 0;
}
