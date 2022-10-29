#include <iostream>
#include <string>
using namespace std;

int main ()
{
    //Tugas 4 nomor 5
    //Membuat sistem penjualan susu
    string desk, ukuran;
    int kodeSusu, jumlah;

    //Array Section here
    string namaProduk[3] = {"Dancow", "Indomilk", "Sustacal"};
    //string ukuranProduk[3] = {"B", "S", "K"};
    int harga[3][3] = {{10000, 4250, 2100}, {8500, 4000, 2025},{17000, 14000, 8300}};

    cout << "----------------------------------------------------------\n";
    cout << "| Kode Susu | Nama Produk |    Ukuran    |      Harga    |\n";
    cout << "----------------------------------------------------------\n";
    cout << "|     1     |   Dancow    |  B = Besar   |  Rp. 10.000,- |\n";
    cout << "|           |             |  S = Sedang  |  Rp.  4.250,- |\n";
    cout << "|           |             |  K = Kecil   |  Rp.  2.100,- |\n";
    cout << "----------------------------------------------------------\n";
    cout << "|     2     |   Indomilk  |  B = Besar   |  Rp.  8.500,- |\n";
    cout << "|           |             |  S = Sedang  |  Rp.  4.000,- |\n";
    cout << "|           |             |  K = Kecil   |  Rp.  2.025,- |\n";
    cout << "----------------------------------------------------------\n";
    cout << "|     3     |   Sustacal  |  B = Besar   |  Rp. 17.000,- |\n";
    cout << "|           |             |  S = Sedang  |  Rp. 14.500,- |\n";
    cout << "|           |             |  K = Kecil   |  Rp.  8.300,- |\n";
    cout << "----------------------------------------------------------\n";
    cout << "\n";


    cout << "Masukkan kode susu (1-3): ";
    cin >> kodeSusu;
    cout << "Masukkan jumlah pembelian: ";
    cin >> jumlah;
    cout << "Masukkan ukuran (B/S/K): ";
    cin >> ukuran;

    if(kodeSusu == 1){
        if(ukuran == "B"){
            cout << "\nSusu " << namaProduk[0] << endl;
            cout << "Harga Susu Rp. " << harga[0][0] << ".00" << endl;
            cout << "Jumlah Pembelian Rp. " << harga[0][0]*jumlah << ".00" << endl;
        } else if(ukuran == "S"){
            cout << "\nSusu " << namaProduk[0] << endl;
            cout << "Harga Susu Rp. " << harga[0][1] << ".00" << endl;
            cout << "Jumlah Pembelian Rp. " << harga[0][1]*jumlah << ".00" << endl;
        } else if(ukuran == "K"){
            cout << "\nSusu " << namaProduk[0] << endl;
            cout << "Harga Susu Rp. " << harga[0][2] << ".00" << endl;
            cout << "Jumlah Pembelian Rp. " << harga[0][2]*jumlah << ".00" << endl;
        }
    } else if(kodeSusu == 2){
        if(ukuran == "B"){
            cout << "\nSusu " << namaProduk[1] << endl;
            cout << "Harga Susu Rp. " << harga[1][0] << ".00" << endl;
            cout << "Jumlah Pembelian Rp. " << harga[1][0]*jumlah << ".00" << endl;
        } else if(ukuran == "S"){
            cout << "\nSusu " << namaProduk[1] << endl;
            cout << "Harga Susu Rp. " << harga[1][1] << ".00" << endl;
            cout << "Jumlah Pembelian Rp. " << harga[1][1]*jumlah << ".00" << endl;
        } else if(ukuran == "K"){
            cout << "\nSusu " << namaProduk[1] << endl;
            cout << "Harga Susu Rp. " << harga[1][2] << ".00" << endl;
            cout << "Jumlah Pembelian Rp. " << harga[1][2]*jumlah << ".00" << endl;
        }
    } else if(kodeSusu == 3){
        if(ukuran == "B"){
            cout << "\nSusu " << namaProduk[2] << endl;
            cout << "Harga Susu Rp. " << harga[2][0] << ".00" << endl;
            cout << "Jumlah Pembelian Rp. " << harga[2][0]*jumlah << ".00" << endl;
        } else if(ukuran == "S"){
            cout << "\nSusu " << namaProduk[2] << endl;
            cout << "Harga Susu Rp. " << harga[2][1] << ".00" << endl;
            cout << "Jumlah Pembelian Rp. " << harga[2][1]*jumlah << ".00" << endl;
        } else if(ukuran == "K"){
            cout << "\nSusu " << namaProduk[2] << endl;
            cout << "Harga Susu Rp. " << harga[2][2] << ".00" << endl;
            cout << "Jumlah Pembelian Rp. " << harga[2][2]*jumlah << ".00" << endl;
        }
    } else {
        cout <<"Pilihan yang Anda masukkan salah\n";
    }
    return 0;
}
