#include <iostream>
using namespace std;

    int main (){
        char nomenuMakanan;
        float harga1, harga2, harga3, harga4;

        cout << "|Menu Restaurant MC'Yahud|" << endl;
        cout << "========================" << endl;
        cout << "|MAKANAN :                 | HARGA |" << endl;
        cout << "|1.Nasi Goreng Informatika |Rp.5000|" << endl;
        cout << "|2.Nasi Soto Ayam Internet |Rp.7000|" << endl;
        cout << "|3.Gado-Gado Disket        |Rp.4500|" << endl;
        cout << "|4.Bubur Ayam LAN          |Rp.4000|" << endl;
        cout << "========================" << endl;


        cout << "Masukkan pilihan anda : ";
        cin >> nomenuMakanan;

        switch (nomenuMakanan) {
        case '1':
            cout << "Pilihan No.1 Nasi Goreng Informatika Rp.5000" << endl;
            harga1 = 5000;
            break;
        case '2':
            cout << "Pilihan NO.2 Nasi Soto Ayam Internet Rp.7000" << endl;
            break;
        case '3':
            cout << "Pilihan NO.3 Gado-Gado Disket Rp.4500" << endl;
            break;
        case '4':
            cout << "Pilihan No.4 Bubur Ayam LAN Rp.4000" << endl;
            break;
        default:
            cout << "Tidak Ada Di Menu" << endl;

        }


        return 0;
    }
