
/*
Clase 9 - Tarea de depuración
Ejercicio 2: Menú de operaciones con funciones
Autor: alex paredes
Fecha: 17/03/26

ENUNCIADO:
Desarrollar un programa que muestre un menú con las siguientes opciones:
1. Sumar dos números
2. Restar dos números
3. Multiplicar dos números
4. Dividir dos números
5. Salir

El programa debe usar funciones para cada operación.
El código entregado contiene errores intencionales.
El estudiante debe corregirlo y probar cada opción del menú.
*/

#include <iostream>
using namespace std;

double sumar(double a, double b) { return a + b; }
double restar(double a, double b) { return a - b; }
double multiplicar(double a, double b) { return a * b; }

// VALIDACIÓN: Evitar el colapso por división para cero
double dividir(double a, double b) {
    if (b == 0) {
        cout << "Error: No se puede dividir para cero." << endl;
        return 0;
    }
    return a / b;
}

int main() {
    int opcion;
    double n1, n2;
    char continuar = 's';

    while (continuar == 's' || continuar == 'S') {
        cout << "\nMENU DE OPERACIONES" << endl;
        cout << "1. Sumar" << endl;
        cout << "2. Restar" << endl;
        cout << "3. Multiplicar" << endl;
        cout << "4. Dividir" << endl;
        cout << "5. Salir" << endl;
        cout << "Ingrese una opcion: ";
        cin >> opcion;

        // agregamos un condicional si esocge la opcion 5
        if (opcion == 5) {
            cout << "Saliendo del programa..." << endl;
            break; // Rompe el bucle directamente
        }

        //condicional solo si escoge numeros de 1 al 4
        if (opcion >= 1 && opcion <= 4) {
            cout << "Ingrese el primer numero: ";
            cin >> n1;
            cout << "Ingrese el segundo numero: ";
            cin >> n2;

            // CORRECCIÓN: Uso de '==' para comparar
            if (opcion == 1) {
                cout << "Resultado Suma: " << sumar(n1, n2) << endl;
            } else if (opcion == 2) {
                cout << "Resultado Resta: " << restar(n1, n2) << endl;
            } else if (opcion == 3) {
                cout << "Resultado Multiplicacion: " << multiplicar(n1, n2) << endl;
            } else if (opcion == 4) {
                // mejoramos proceso de division
                if (n2 != 0) {
                    cout << "Resultado Division: " << dividir(n1, n2) << endl;
                } else {
                    dividir(n1, n2); 
                }
            }
        } else {
            cout << "Opcion invalida. Intente de nuevo." << endl;
            continue; // Salta al inicio del menú
        }

        cout << "\nDesea realizar otra operacion? (s/n): ";
        cin >> continuar;
    }

    return 0;
}