#include <iostream>
#include <string>
using namespace std;

int main() {
    string mensaje;
    int desplazamiento;

    cout << "Ingrese el mensaje: ";
    cin >> mensaje;
    cout << "Ingrese el desplazamiento: ";
    cin >> desplazamiento;

    string cifrado = mensaje;

    for (int i = 0; i < mensaje.length(); i++) {
        char c = mensaje[i];

        if (c >= 'a' && c <= 'z') {
            // Minúscula: mover dentro del alfabeto dando la vuelta con %
            cifrado[i] = (c - 'a' + desplazamiento) % 26 + 'a';
        } else if (c >= 'A' && c <= 'Z') {
            // Mayúscula: igual, pero tomando 'A' como base
            cifrado[i] = (c - 'A' + desplazamiento) % 26 + 'A';
        }
        // Si no es letra, se queda igual (ya está copiado en cifrado)
    }

    // Mostrar el resultado
    cout << "Mensaje cifrado: " << cifrado << endl;

    return 0;

}
