// Ejercicio 54: Arreglo de libros (biblioteca)
// Autor: Leonel David Alcerro Aguilar
// Cuenta #: 20242000294
// intentar agregar una funcion extra que pueda editar la informacion ya registrada de un libro, 
//por ejemplo cambiar el titulo o el autor de un libro ya registrado.

#include <iostream>
#include <string>
using namespace std;

struct Libro {
    string titulo;
    string autor;
    string editorial;
    int año;
};

void registrarLibros(Libro biblioteca[], int n) {
    for (int i = 0; i < n; i++) {
        cout << "\n--- Ingresando datos del Libro " << (i + 1) << " ---" << endl;
        cout << "Titulo: ";
        getline(cin, biblioteca[i].titulo);
        cout << "Autor: ";
        getline(cin, biblioteca[i].autor);
        cout << "Editorial: ";
        getline(cin, biblioteca[i].editorial);
        cout << "Año de publicacion: ";
        cin >> biblioteca[i].año;
        cin.ignore();
    }
}

void mostrarBiblioteca(Libro biblioteca[], int n) {
    cout << "\n========== REGISTRO DE BIBLIOTECA ==========" << endl;
    for (int i = 0; i < n; i++) {
        cout << "Libro " << (i + 1) << ": " << biblioteca[i].titulo 
             << " | Autor: " << biblioteca[i].autor 
             << " | Edit: " << biblioteca[i].editorial 
             << " | Año: " << biblioteca[i].año << endl;
    }
}

int main() {
    int cantidad;
    cout << "Cuantos libros desea registrar? ";
    cin >> cantidad;
    cin.ignore(); 
    
    Libro biblioteca[100]; // Arreglo de structs
    
    registrarLibros(biblioteca, cantidad);
    mostrarBiblioteca(biblioteca, cantidad);
    
    return 0;
}