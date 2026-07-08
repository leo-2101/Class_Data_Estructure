// Ejercicio 19: Menor elemento en arreglo
// Autor: Leonel David Alcerro Aguilar
// Cuenta #: 20242000294

#include <iostream>
using namespace std;

int leerTamaño (){
    int n;
    do {
        cout << "Cuantos elementos tiene el arreglo? (Minimo 1, Maximo 100): ";
        cin >> n;

        if (n < 1 || n > 100){
            cout << "Tamaño invalido. Por favor ingrese un numero entre 1 y 100." << endl;
        } 
    } while (n < 1 || n > 100);
      
    return n; 
}

void leerArreglo (double arreglo[], int n){
    for (int i = 0; i < n; i++){
        cout << "Elemento [" << i << "]: ";
        cin >> arreglo[i];
    }
}

double encontrarMenor (double arreglo[], int n){
    double menor = arreglo[0];
    for (int i = 1; i < n; i++){
        if (arreglo[i] < menor){
            menor = arreglo[i];
        }
    }
    return menor;
} 

void mostrarMenor (double menor){
    cout << "El menor elemento del arreglo es: " << menor << endl;
}

int main (){
    double arreglo[100];
    int n = leerTamaño();
    leerArreglo(arreglo, n);
    mostrarMenor(encontrarMenor(arreglo, n));
    return 0;
}