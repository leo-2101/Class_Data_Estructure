// Ejercicio 34: Ordenar descendente por seleccion
// Autor: Leonel David Alcerro Aguilar
// Cuenta #: 20242000294

#include <iostream>
using namespace std;

int leerTamaño() {
    int n;
    do {
        cout << "Cantidad de elementos (1 - 100): ";
        cin >> n;
        if (n < 1 || n > 100) {
            cout << "Error: el tamaño debe estar entre 1 y 100." << endl;
        }
    } while (n < 1 || n > 100);
    return n;
}

void leerArreglo(double arr[], int n) {
    for (int i = 0; i < n; i++) {
        cout << "arr[" << i << "]: ";
        cin >> arr[i];
    }
}

void intercambiar(double &a, double &b) {
    double temp = a;
    a = b;
    b = temp;
}

void ordenarDescendente(double arr[], int n) {
    for (int i = 0; i < n - 1; i++) {
        int posMax = i;
        for (int j = i + 1; j < n; j++) {
            if (arr[j] > arr[posMax])
                posMax = j;
        }
        intercambiar(arr[i], arr[posMax]);
    }
}

void mostrarArreglo(double arr[], int n) {
    cout << "Arreglo ordenado descendente: ";
    for (int i = 0; i < n; i++)
        cout << arr[i] << " ";
        cout << endl;
}

int main() {
    double arr[100]; 
    int n = leerTamaño();
    leerArreglo(arr, n);
    ordenarDescendente(arr, n);
    mostrarArreglo(arr, n);
    return 0;
}