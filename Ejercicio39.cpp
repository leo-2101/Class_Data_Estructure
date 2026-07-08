// Ejercicio 39: Comparar dos cadenas
// Autor: Leonel David Alcerro Aguilar
// Cuenta #: 20242000294

#include <iostream>
#include <string>
using namespace std;

bool compararCadenas(string cadena1, string cadena2) {
    
    if (cadena1.length() != cadena2.length()) {
        return false;
    }
    
    
    for (int i = 0; i < cadena1.length(); i++) {
        if (cadena1[i] != cadena2[i]) {
            return false; 
        }
    }
    
    return true; 
}

int main() {
    string str1, str2;
    
    cout << "Ingrese la primera cadena: ";
    getline(cin, str1);
    
    cout << "Ingrese la segunda cadena: ";
    getline(cin, str2);
    
    if (compararCadenas(str1, str2)) {
        cout << "\nResultado: Las cadenas son EXACTAMENTE iguales." << endl;
    } else {
        cout << "\nResultado: Las cadenas son DIFERENTES." << endl;
    }
    
    return 0;
}