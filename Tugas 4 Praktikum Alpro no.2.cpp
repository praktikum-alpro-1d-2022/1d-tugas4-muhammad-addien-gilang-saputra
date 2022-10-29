#include <iostream>
using namespace std;

    int main (){
        string username, password;

        cout << "Masukkan Username: ";
        cin  >> username;
        cout << "Masukkan Password: ";
        cin  >> password;

        // nested if
        if (username == "Azizi"){
            if (password == "Asadel"){
            cout << "Username dan Password sesuai, Login berhasil";

            }   else
                cout << "Username sesuai, password tidak sesuai!";

        }else
            if (password == "Asadel")
                cout << "Username tidak sesuai, password sesuai!";

                else
                cout << "Username dan password tidak sesuai!";


        return 0;
        }
