#include <iostream>
#include <string>
using namespace std; 

int main() {
    string usuarioCorrecto = "pedro123";
    string contraseñaCorrecta = "paco1234";

    string usuario, password;
    int intentos = 0;
    bool acceso = false;

    while ( intentos < 3 && !acceso) {
        intentos ++;

        cout << "---intento " << intentos << " de 3---" << endl;


        cout << "Usuario: ";
        getline(cin, usuario);
        cout << "Contraseña:";
        getline(cin, password);

        if (usuario == usuarioCorrecto && password == contraseñaCorrecta) {
            acceso = true;
            cout << "acceso concedido" << endl;
        } else{
            cout << "usuario o contraseña incorrecta" << endl;

        }
    }

    if (!acceso) {
        cout << "Se han agotado los intentos" << endl;
    }

    return 0;

}
