#include <iostream>
#include <string>
using namespace std;

int main() {
    string password;
    cout << "Ingrese una contraseña: ";
    getline(cin, password);
                        
    bool largo = password.length() >= 8;
    bool mayuscula = false;
    bool numero = false;
    bool especial = false;

    for (int i = 0; i < password.length(); i++) {
        char c = password[i];

        if (c >= 'A' && c <= 'Z') {
            mayuscula = true;
        }
        if (c >= '0' && c <= '9') {
            numero = true;
        }
        if (c == '!' || c == '@' || c == '#' || c == '$' ||
            c == '%' || c == '&' || c == '*') {
            especial = true;
        }
    }

    int puntaje = largo + mayuscula + numero + especial;

    if (puntaje <= 2) {
        cout << "DEBIL" << endl;
    } else if (puntaje == 3) {
        cout << "MEDIA" << endl;
    } else {
        cout << "FUERTE" << endl;
    }

    return 0;
}