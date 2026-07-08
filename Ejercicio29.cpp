// Ejercicio 29: Menor elemento por columna
// Autor: Leonel David Alcerro Aguilar
// Cuenta #: 20242000294

#include <iostream>
using namespace std;

const int MAX = 10;

void leerDimensiones(int &filas, int &cols) {
    cout << "Filas: ";    cin >> filas;
    cout << "Columnas: "; cin >> cols;
}

void leerMatriz(double M[][MAX], int filas, int cols) {
    for (int i = 0; i < filas; i++)
        for (int j = 0; j < cols; j++) {
            cout << "M[" << i << "][" << j << "]: ";
            cin >> M[i][j];
        }
}

double minimoColumna(double M[][MAX], int filas, int col) {
    double minimo = M[0][col];
    for (int i = 1; i < filas; i++) {
        if (M[i][col] < minimo)
            minimo = M[i][col];
    }
    return minimo;
}

void mostrarMinimosPorColumna(double M[][MAX], int filas, int cols) {
    for (int j = 0; j < cols; j++) {
        cout << "Minimo columna " << j << ": "
             << minimoColumna(M, filas, j) << endl;
    }
}

int main() {
    double M[MAX][MAX];
    int filas, cols;

    leerDimensiones(filas, cols);
    leerMatriz(M, filas, cols);
    mostrarMinimosPorColumna(M, filas, cols);
    return 0;
}