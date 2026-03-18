
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

double sumar(double a, double b) {
return a + b;
}

double restar(double a, double b) {
return a - b;
}

double multiplicar(double a, double b) {
return a * b;
}

double dividir(double a, double b) {
    if (b == 0){
        cout <<"no se puede divir para cero" << endl; // con este condicional evitamos que hayauna falla cuando se quiera devidir para cero
        return 0;
    }


return a / b;
}

int main() {

int opcion;
double n1, n2;
char continuar = 's';

while (continuar == 's' || continuar == 'S'){
cout << "\nMENU DE OPERACIONES" << endl;
cout << "1. Sumar" << endl;
cout << "2. Restar" << endl;
cout << "3. Multiplicar" << endl;
cout << "4. Dividir" << endl;
cout << "5. Salir" << endl;

cout << "Ingrese una opcion: ";
cin >> opcion;

//agregamos un condicional para el enunciado N5

if (opcion == 5){
    cout << "SALIENDO DEL PROGRAMA..." << endl;
    break;
    }
// se agrega un condicional si la opcion va desde la primera ala cuarta opcion

if (opcion >= 1 && opcion <=4){
    cout << "Ingrese el primer numero: ";
    cin >> n1;
    cout << "Ingrese el segundo numero: ";
    cin >> n2;

}


// ERRORES: uso incorrecto de '=' en condiciones
if (opcion = 1) {
cout << "Resultado: " << sumar(n1, n2) << endl;
}

else if (opcion = 2) {
cout << "Resultado: " << restar(n1, n2) << endl;
}
else if (opcion = 3) {
cout << "Resultado: " << multiplicar(n1, n2) << endl;
}
else if (opcion = 4) {
cout << "Resultado: " << dividir(n1, n2) << endl;
}
else if (opcion == 5) {
cout << "Saliendo del programa..." << endl;
continuar == 'n';
}
else {
cout << "Opcion invalida." << endl;
}

if (opcion != 5) {
cout << "Desea continuar? (s/n): ";
cin >> continuar;
}
}

return 0;
}