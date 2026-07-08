// Ejercicio 64: Verificar pila vacía
// Autor: Leonel David Alcerro Aguilar
// Cuenta #: 20242000294


#include <iostream>
using namespace std;

const int CAPACIDAD = 10;

struct Pila {
    int datos[CAPACIDAD];
    int tope;
};

void inicializarPila(Pila &p) {
    p.tope = -1;
}

bool pilaVacia(Pila p) {
    return p.tope == -1;
}

bool pilaLlena(Pila p) {
    return p.tope == CAPACIDAD - 1;
}

void push(Pila &p, int valor) {
    if (!pilaLlena(p)) {
        p.datos[++p.tope] = valor;
    } else {
        cout << "Pila llena." << endl;
    }
}

void mostrarEstadoPila(Pila p) {
    if (pilaVacia(p)) {
        cout << "La pila esta vacia." << endl;
    } else {
        cout << "La pila NO esta vacia (contiene " << p.tope + 1 << " elemento(s))." << endl;
    }
}

int main() {
    Pila p;
    inicializarPila(p);

    mostrarEstadoPila(p);   
    push(p, 5);
    mostrarEstadoPila(p);   
    push(p, 15);
    mostrarEstadoPila(p);   
    return 0;
}