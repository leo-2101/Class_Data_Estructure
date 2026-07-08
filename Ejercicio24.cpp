// Ejercicio 24: Multiplicacion de dos matrices
// Autor: Leonel David Alcerro Aguilar
// Cuenta #: 20242000294

#include <iostream>
using namespace std;

const int MAX = 10;

void leerDimensiones(int &filas, int &cols, char nombre) {
    cout << "Filas de " << nombre << ": ";
    cin >> filas;
    cout << "Columnas de " << nombre << ": ";
    cin >> cols;
}

void leerMatriz(double M[][MAX], int filas, int cols, char nombre) {
    cout << "Ingrese los elementos de " << nombre << ": " << endl;
    for (int i = 0; i < filas; i++)
        for (int j = 0; j < cols; j++) {
            cout << nombre << "[" << i << "][" << j << "]: ";
            cin >> M[i][j];
        }
}

bool dimensionesCompatibles(int colsA, int filasB) {
    return colsA == filasB;
}

void multiplicarMatrices(double A[][MAX], double B[][MAX], double C[][MAX], int m, int n, int q) {
    for (int i = 0; i < m; i++)
        for (int j = 0; j < q; j++) {
            C[i][j] = 0;
            for (int k = 0; k < n; k++)
                C[i][j] += A[i][k] * B[k][j];
        }
} 

void mostrarMatriz(double M[][MAX], int filas, int cols) {
    for (int i = 0; i < filas; i++) {
        for (int j = 0; j < cols; j++)
            cout << M[i][j] << "\t";
        cout << endl;
    }
}

int main() {
    double A[MAX][MAX], B[MAX][MAX], C[MAX][MAX];
    int m, n, p, q;

    leerDimensiones(m, n, 'A');
    leerDimensiones(p, q, 'B');

    if (!dimensionesCompatibles(n, p)) {
        cout << "Error: columnas de A deben ser iguales a filas de B." << endl;
        return 1;
    }

    leerMatriz(A, m, n, 'A');
    leerMatriz(B, p, q, 'B');
    multiplicarMatrices(A, B, C, m, n, q);

    cout << "Resultado de A x B:" << endl;
    mostrarMatriz(C, m, q);
    return 0;
}