#include <iostream>

using namespace std;

int main ()
{
    //Tugas 4 nomor 4:
    //Menghasilkan output seperti contoh
    char nomenu;
    cout << "           Menu Restaurant Mc'Yahud\n";
    cout << "==============================================\n";
    cout << "1. Nasi Goreng Informatika         Rp. 5.000,-\n";
    cout << "2. Nasi Soto Ayam Internet         Rp. 7.000,-\n";
    cout << "3. Gado-gado Disket                Rp. 4.500,-\n";
    cout << "4. Bubur Ayam LAN                  Rp. 4.000,-\n";
    cout << "==============================================\n";
    cout << "\n";
    cout << "Masukkan pilihan Anda: ";
    cin >> nomenu;

    switch (nomenu)
    {
    case '1':
        cout << "Pilihan No.1 Nasi Goreng Informatika   Rp. 5.000,-\n";
        break;
    case '2':
        cout << "Pilihan No.2 Nasi Soto Ayam Internet   Rp. 7.000,-\n";
        break;
    case '3':
        cout << "Pilihan No.3 Gado-gado Disket      Rp. 4.500,-\n";
        break;
    case '4':
        cout << "Pilihan No.4 Bubur Ayam LAN        Rp. 4.000,-\n";
        break;
    default:
        cout <<"Pilihan yang Anda masukkan salah\n";
        break;
    }
    return 0;
}
