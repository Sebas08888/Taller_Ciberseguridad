#include <iostream>
#include <string>
using namespace std;

int main() {
    // Credenciales correctas (definidas en el código)
    string usuarioCorrecto = "pedro123";
    string contrasenaCorrecta = "paco1234";

    // Arreglos para guardar el registro de los 5 intentos
    string usuarios[5];
    bool exitoso[5];

    string usuario, password;

    // Primer for: pedir los 5 intentos (siempre se hacen los 5)
    for (int i = 0; i < 5; i++) {
        cout << "--- Registro #" << i + 1 << " ---" << endl;

        cout << "Usuario: ";
        getline(cin, usuario);
        cout << "Contraseña: ";
        getline(cin, password);

        // Guardar el usuario ingresado
        usuarios[i] = usuario;

        // Verificar credenciales y guardar el resultado
        if (usuario == usuarioCorrecto && password == contrasenaCorrecta) {
            exitoso[i] = true;
            cout << "-> Acceso concedido" << endl;
        } else {
            exitoso[i] = false;
            cout << "-> Acceso denegado" << endl;
        }
        cout << endl;
    }

    // Contadores para el reporte
    int exitosos = 0;
    int fallidos = 0;

    // Segundo for: imprimir el reporte y contar
    cout << "========== REPORTE DE SEGURIDAD ==========" << endl;
    for (int i = 0; i < 5; i++) {
        cout << "Usuario: " << usuarios[i] << " | Estado: ";
        if (exitoso[i]) {
            cout << "OK" << endl;
            exitosos++;
        } else {
            cout << "FALLIDO" << endl;
            fallidos++;
        }
    }

    // Calcular la tasa de fallo como porcentaje
    float tasa = ((float)fallidos / 5) * 100;

    cout << endl;
    cout << "Intentos exitosos: " << exitosos << "/5" << endl;
    cout << "Tasa de fallo: " << tasa << "%" << endl;

    // Alerta si la tasa de fallo supera el 60%
    if (tasa > 60) {
        cout << "*** ALERTA: Tasa de fallo alta - posible ataque ***" << endl;
    }

    return 0;
}