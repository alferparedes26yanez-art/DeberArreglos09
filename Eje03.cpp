/*

Clase 9 - Tarea de depuración
Ejercicio 3: Análisis de números enteros
Autor: Alex pareedes 
Fecha: 17/03/26

ENUNCIADO:
Desarrollar un programa que solicite 6 números enteros y luego muestre:
1. La suma de todos los números
2. El número mayor
3. El número menor
4. La cantidad de números pares
5. La cantidad de números negativos

El programa utiliza funciones y arreglos, pero contiene errores intencionales.
El estudiante debe corregirlo completamente y comprobar su funcionamiento.
*/

#include <iostream>
using namespace std;

int calcularSuma(int numeros[], int n) {
    int suma = 0;
    for (int i = 0; i < n; i++) {
        suma = suma + numeros[i];
    }
    return suma;
}

int encontrarMayor(int numeros[], int n) {
    int mayor = numeros[0]; //no se inicia con el primer dato
    for (int i = 1; i < n; i++) {
        if (numeros[i] > mayor) {
            mayor = numeros[i];
        }
    }
    return mayor;
}

int encontrarMenor(int numeros[], int n) {
    int menor = numeros[0]; //no se estaba utilizando el primer dato
    for (int i = 1; i < n; i++) {
        if (numeros[i] < menor) {
            menor = numeros[i];
        }
    }
    return menor;
}

int contarPares(int numeros[], int n) {
    int contador = 0;
    for (int i = 0; i < n; i++) {
        // asi mal la division ya que la deivicon de un numero par da 0
        if (numeros[i] % 2 == 0) {
            contador++;
        }
    }
    return contador;
}

int contarNegativos(int numeros[], int n) {
    int contador = 0;
    for (int i = 0; i < n; i++) { //tiene que ser I < n
        if (numeros[i] < 0) {
            contador++;
        }
    }
    return contador;
}

int main() {
    const int N = 6;
    int numeros[N];

    cout << "--- ANALISIS DE 6 NUMEROS ENTEROS ---" << endl;

    for (int i = 0; i < N; i++) { //tiene que ser I < n
        cout << "Ingrese el numero " << i + 1 << ": ";
        cin >> numeros[i];
    }

    cout << "\n--- RESULTADOS ---" << endl;
    cout << "1. Suma total: " << calcularSuma(numeros, N) << endl;
    cout << "2. Numero mayor: " << encontrarMayor(numeros, N) << endl;
    cout << "3. Numero menor: " << encontrarMenor(numeros, N) << endl;
    cout << "4. Cantidad de pares: " << contarPares(numeros, N) << endl;
    cout << "5. Cantidad de negativos: " << contarNegativos(numeros, N) << endl;

    return 0; // faltaba ";"
}