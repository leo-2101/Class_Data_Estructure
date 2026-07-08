// Ejercicio 74: Cola en orden inverso
// Autor: Leonel David Alcerro Aguilar
// Cuenta #: 20242000294

#include <iostream>
using namespace std;

const int MAX = 100;

// ----- Estructura de la Cola -----
struct Cola {
    int elementos[MAX];
    int frente = -1;
    int final = -1;
};

void enqueue(Cola &c, int v) {
    if(c.frente == -1) c.frente = 0;
    c.final++;
    c.elementos[c.final] = v;
}

int dequeue(Cola &c) {
    int valor = c.elementos[c.frente];
    c.frente++;
    return valor;
}

bool colaVacia(Cola c) {
    return c.frente == -1 || c.frente > c.final;
}

// ----- Estructura de la Pila Auxiliar -----
struct Pila {
    int elementos[MAX];
    int cima = -1;
};

void push(Pila &p, int v) {
    p.cima++;
    p.elementos[p.cima] = v;
}

int pop(Pila &p) {
    int valor = p.elementos[p.cima];
    p.cima--;
    return valor;
}

bool pilaVacia(Pila p) {
    return p.cima == -1;
}

// ----- Logica Principal -----
void imprimirColaInversa(Cola &c) {
    Pila auxiliar;
    
   
    while (!colaVacia(c)) {
        int dato = dequeue(c);
        push(auxiliar, dato);
    }
    
    
    cout << "Cola en orden INVERSO: ";
    while (!pilaVacia(auxiliar)) {
        cout << pop(auxiliar) << " ";
    }
    cout << endl;
}

int main() {
    Cola miCola;
    
    
    enqueue(miCola, 1);
    enqueue(miCola, 2);
    enqueue(miCola, 3);
    enqueue(miCola, 4);
    enqueue(miCola, 5);
    
    cout << "Orden original ingresado a la cola: 1 2 3 4 5" << endl;
    
  
    imprimirColaInversa(miCola);
    
    return 0;
}