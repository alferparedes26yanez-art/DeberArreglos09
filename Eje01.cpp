/*

Bootcamp Programación Cero a POO

Clase 9 - Tarea de depuración

Ejercicio 1: Registro y análisis de 5 notas

Autor: alex paredes

Fecha: 16/03/2026


ENUNCIADO:

Desarrollar un programa que solicite 5 notas de estudiantes, las guarde en un arreglo

y luego muestre:

1. El promedio general

2. La nota mayor

3. La cantidad de notas aprobadas (mayores o iguales a 14)


El programa entregado contiene errores intencionales.

El estudiante debe corregir el código y verificar su funcionamiento con pruebas.

*/

#include <iostream>
using namespace std;



double calcularPromedio(double notas[], int n) {

    double suma = 0;
    for (int i = 0; i < n; i++) { // debe ser i < n

        suma = suma + notas[i];
    }   
    return suma / n;

}


double encontrarMayor(double notas[], int n) {
    
    double mayor = notas[0];// debemos inicializar con la primera nota
    for (int i = 0; i < n; i++) {

        if (notas[i] > mayor) {
        mayor = notas[i];

        }

}
return mayor;

}

int contarAprobadas(double notas[], int n) {
    int contador = 0;
    for (int i = 0; i < n; i++) {

        if (notas[i] >= 14) {// DEBERIA SER >=
        contador++;

        }

}

return contador;

}



int main() {
    const int N = 5;
    double notas[N];

    cout << "INGRESO DE NOTAS" << endl;

    for (int i = 0; i < N; i++){// deberia ser i < N

        cout << "Ingrese la nota " << i + 1 << ": ";
        cin >> notas[i];


    while (notas[i] < 0 || notas[i] > 20) {//se debe usar or

        cout << "Nota invalida. Ingrese nuevamente: ";
        cin >> notas[i];

    }

}

cout << "\nRESULTADOS" << endl;
cout << "Promedio: " << calcularPromedio(notas, N) << endl;
cout << "Nota mayor: " << encontrarMayor(notas, N) << endl;
cout << "Cantidad de aprobadas: " << contarAprobadas(notas, N) << endl;

 

return 0;

}