// Ejercicio 9: Factorial de un numero
// Autor: Leonel David Alcerro Aguilar
// Cuenta #: 20242000294

#include <iostream>
using namespace std;

int leerEnteroNoNegativo() {
    int n;
    cout <<"Ingrese un numero entero no negativo: ";
    cin >> n;
    return n;
}

long long calcularFactorial(int n) {
    long long resultado = 1;
    for (int i = 1; i <= n; i++) {
        resultado *= i;
    }
    return resultado;
}

void mostrarFactorial(int n, long long resultado) {
    cout << n << " ! = " << resultado << endl;
}

int main (){
    int n = leerEnteroNoNegativo();
    if (n < 0){
        cout << "Error: El numero no puede ser negativo." << endl;
    } else {
        mostrarFactorial(n, calcularFactorial(n));
    }
    return 0;
}