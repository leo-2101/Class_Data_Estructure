// Ejercicio 49: Calcular promedio de notas
// Autor: Leonel David Alcerro Aguilar
// Cuenta #: 20242000294

#include <iostream>
using namespace std;

struct Estudiante {
    char nombre[50];
    char carne[15];
    char carrera[50];
    double notas[10];
    int cantNotas;
};

void leerEstudiante(Estudiante &e) {
    cout << "Nombre: ";   cin.getline(e.nombre,  50);
    cout << "Carnet #: ";    cin.getline(e.carne,   15);
    cout << "Carrera: ";  cin.getline(e.carrera, 50);
    cout << "Cantidad de notas (max 10): ";
    cin >> e.cantNotas;
    for (int i = 0; i < e.cantNotas; i++) {
        cout << "Nota " << i + 1 << ": ";
        cin >> e.notas[i];
    }
}

double calcularPromedio(Estudiante e) {
    double suma = 0;
    for (int i = 0; i < e.cantNotas; i++)
        suma += e.notas[i];
    return suma / e.cantNotas;
}

void mostrarPromedio(Estudiante e, double promedio) {
    cout << "Promedio de " << e.nombre << ": " << promedio << endl;
}

int main() {
    Estudiante est;
    leerEstudiante(est);
    mostrarPromedio(est, calcularPromedio(est));
    return 0;
}