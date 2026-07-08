// Ejercicio 14: Identificar numero par o impar
// Autor: Leonel David Alcerro Aguilar
// Cuenta #: 20242000294

#include <iostream>
using namespace std;

int leerEntero() {
    int n;
    cout <<"Ingrese un numero entero: ";
    cin >> n;
    return n;
}

bool esPar(int n) {
    return n % 2 == 0;
}

void mostrarParidad(int n, bool par) {
    if (par) {
        cout << n << " es un numero par." << endl;
    } else {
        cout << n << " es un numero impar." << endl;
    }
}

int main (){
    int n = leerEntero();
    mostrarParidad(n, esPar(n));
    return 0;
}