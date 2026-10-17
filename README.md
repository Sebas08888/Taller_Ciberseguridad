SecurePass Analyzer
SecurePass Analyzer es una aplicación de consola desarrollada en C++17 para evaluar la seguridad básica de contraseñas mediante un sistema de puntuación.

El proyecto tiene un enfoque educativo y está organizado en módulos para facilitar su mantenimiento, compilación y ampliación.

Características
Análisis de contraseñas en tiempo de ejecución.
Evaluación de cuatro criterios de seguridad.
Puntuación automática de 0 a 4.
Clasificación en niveles de seguridad.
Dataset de ejemplos en formato CSV.
Pruebas automatizadas con CTest.
Compilación multiplataforma mediante CMake.
Reglas de evaluación

Regla	Condición
Longitud	Al menos 8 caracteres
Mayúsculas	Al menos una letra A-Z
Números	Al menos un dígito 0-9
Símbolos	Al menos uno de !, @, #, $, %, & o *
Clasificación
0-2 puntos: DÉBIL.
3 puntos: MEDIA.
4 puntos: FUERTE.
Cada criterio aporta un punto si se cumple.

Estructura
src/: implementación y aplicación principal.
include/: interfaz de la clase analizadora.
dataset/: ejemplos ficticios con resultados esperados.
tests/: pruebas automáticas.
CMakeLists.txt: configuración del proyecto.
Requisitos
Compilador compatible con C++17.
CMake 3.16 o superior.
Compilación
Desde la raíz del repositorio:


cmake -S . -B build
cmake --build build
Ejecución
En Linux o macOS:


./build/securepass
En Windows, con una configuración de CMake que genere ejecutables en el directorio build:


.\build\Debug\securepass.exe
La ubicación exacta del ejecutable depende del generador utilizado.

Ejecutar pruebas

ctest --test-dir build --output-on-failure
Limitaciones
Esta aplicación evalúa únicamente cuatro características básicas. Una contraseña clasificada como fuerte según estas reglas no necesariamente es segura frente a ataques reales. El programa no comprueba si una contraseña ha sido filtrada, si es predecible o si se reutiliza en otros servicios.

No se recomienda introducir contraseñas personales o de producción en una herramienta educativa.

Licencia
Este proyecto puede publicarse con una licencia de código abierto, como MIT, si el autor decide adoptar sus términos.
