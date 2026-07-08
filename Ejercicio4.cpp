// Ejercicio 4: Division de dos numeros
// Autor: Leonel David Alcerro Aguilar
// Cuenta #: 20242000294

#include <iostream>
using namespace std;

void leerNumeros(double &a, double &b) {
    cout << "Ingrese el primer numero: ";
    cin >> a;
    cout << "Ingrese el segundo numero: ";
    cin >> b;
}

double dividir(double a, double b) { 
    return a / b;
}

bool esDivisorValido(double b) {
    return b != 0;
}

void mostrarResultado(double resultado) {
    cout << "El resultado de la division es: " << resultado << endl;
}

int main () {
    double a, b;
    leerNumeros(a, b);
    if (!esDivisorValido(b)) {
        cout << "Error: No se puede dividir por cero." << endl;
    } else {
        mostrarResultado(dividir(a, b));
    }
    
    return 0;
}

