#include <iostream>
#include <string>
using namespace std;


int main() {

    //pedir la contraseña al usuario
    string password;
    cout << "Ingrese una contraseña: ";
    getline(cin, password);
                        
    // 8 carecteres o mas, los demas empiezan en false
    bool largo = password.length() >= 8;
    bool mayuscula = false;
    bool numero = false;
    bool especial = false;

    //recorrer la contraseña caracter por caracter
    for (int i = 0; i < password.length(); i++) {
        char c = password[i];

        // letra mayuscula (A-Z)
        if (c >= 'A' && c <= 'Z') {
            mayuscula = true;
        }

        // numero (0-9)
        if (c >= '0' && c <= '9') {
            numero = true;
        }

        // caracter especial de la lista
        if (c == '!' || c == '@' || c == '#' || c == '$' ||
            c == '%' || c == '&' || c == '*') {
            especial = true;
        }
    }

    // sumar las reglas cumplidas
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