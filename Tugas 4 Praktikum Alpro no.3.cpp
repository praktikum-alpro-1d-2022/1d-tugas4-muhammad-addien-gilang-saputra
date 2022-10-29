#include <iostream>
using namespace std;

    int main () {

        int Tahun;

        cout << "==========================" << endl;
        cout << "|Menentukan Tahun Kabisat|" << endl;
        cout << "==========================" << endl;


        cout << "|Masukkan Tahun : ";
        cin  >> Tahun;

        if(Tahun % 4 == 0 && Tahun % 100 != 0 || Tahun % 400 == 0){

            cout <<"Ini Tahun Kabisat";
        }

        else{

            cout << "Ini Bukan Tahun Kabisat";
        }

        return 0;



    }
