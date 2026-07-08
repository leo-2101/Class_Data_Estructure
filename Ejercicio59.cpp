// Ejercicio 59: Multiplicar dos fracciones
// Autor: Leonel David Alcerro Aguilar
// Cuenta #: 20242000294

#include <iostream>
using namespace std;

struct Fraccion {
    int numerador;
    int denominador;
};

Fraccion multiplicarFracciones(Fraccion f1, Fraccion f2) {
    Fraccion resultado;
    resultado.numerador = f1.numerador * f2.numerador;
    resultado.denominador = f1.denominador * f2.denominador;
    return resultado;
}

int main() {
    Fraccion frac1, frac2, resultado;
    
    cout << "--- Primera Fraccion ---" << endl;
    cout << "Numerador: "; cin >> frac1.numerador;
    cout << "Denominador: "; cin >> frac1.denominador;
    
    cout << "\n--- Segunda Fraccion ---" << endl;
    cout << "Numerador: "; cin >> frac2.numerador;
    cout << "Denominador: "; cin >> frac2.denominador;
    
    if (frac1.denominador == 0 || frac2.denominador == 0) {
        cout << "\nError: El denominador no puede ser cero." << endl;
        return 1;
    }
    
    resultado = multiplicarFracciones(frac1, frac2);
    
    cout << "\nEl resultado de la multiplicacion es: " 
         << resultado.numerador << " / " << resultado.denominador << endl;
         
    return 0;
}