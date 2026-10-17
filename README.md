# Validador de Contraseñas Seguras

Este proyecto es una aplicación interactiva en consola desarrollada en **C++** como parte de un taller de ciberseguridad. Su función principal es analizar la solidez de una contraseña introducida por el usuario, evaluando múltiples criterios de seguridad informática mediante un sistema de puntaje automatizado.

---

## Reglas de Evaluación

El programa analiza la estructura de la contraseña introducida y verifica que cumpla con **4 criterios fundamentales**:

| # | Criterio de Evaluación | Requisito Mínimo |
| :---: | :--- | :--- |
| **1** | Longitud de caracteres | Al menos **8 caracteres** |
| **2** | Letras mayúsculas | Al menos una letra **(`A-Z`)** |
| **3** | Dígitos numéricos | Al menos un número **(`0-9`)** |
| **4** | Caracteres especiales | Al menos un símbolo permitido: **`! @ # $ % & *`** |

---

## Niveles de Seguridad

El sistema asigna de forma automática un puntaje del **0 al 4** basado en el número de reglas cumplidas. La solidez de la contraseña se clasifica según la siguiente escala:

| Reglas Cumplidas | Nivel de Seguridad | Estado |
| :---: | :--- | :--- |
| **0 a 2** | `DÉBIL` | Requiere mejoras inmediatas |
| **3** | `MEDIA` | Aceptable, pero puede mejorar |
| **4** | `FUERTE` | Cumple con los estándares del taller |

---

## Tecnologías Utilizadas

* **Lenguaje de Programación:** C++
* **Entorno de Ejecución:** Consola del sistema (Terminal)
* **Enfoque:** Seguridad informática y lógica algorítmica

---
## Instrucciones de Uso

1. **Ejecuta** la aplicación en tu consola.
2. **Introduce** la contraseña que deseas evaluar cuando el sistema lo solicite.
3. **Revisa** el diagnóstico automático y el nivel de seguridad asignado.
