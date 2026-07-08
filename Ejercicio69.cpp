// Ejercicio 69: Función enqueue para cola
// Autor: Leonel David Alcerro Aguilar
// Cuenta #: 20242000294

#include <iostream>
using namespace std;

const int MAX = 3;

struct Cola {
    int elementos[MAX];
    int frente;
    int final;
};

void inicializarCola(Cola &c) {
    c.frente = -1;
    c.final = -1;
}


void enqueue(Cola &c, int valor) {
    // Validar si esta llena
    if (c.final == MAX - 1) {
        cout << "Error: La cola esta LLENA. No se puede insertar el " << valor << "." << endl;
    } else {
        if (c.frente == -1) {
            c.frente = 0; 
        }
        c.final++;
        c.elementos[c.final] = valor;
        cout << "Elemento " << valor << " insertado correctamente en la cola." << endl;
    }
}

int main() {
    Cola miCola;
    inicializarCola(miCola);
    
  
    cout << "Capacidad maxima de la cola: " << MAX << " elementos.\n" << endl;
    
    enqueue(miCola, 10);
    enqueue(miCola, 20);
    enqueue(miCola, 30);
    enqueue(miCola, 40); 
    
    return 0;
}