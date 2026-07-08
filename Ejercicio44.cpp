// Ejercicio 44: Reemplazar subcadena 
// Autor: Leonel David Alcerro Aguilar
// Cuenta #: 20242000294

#include <iostream>
#include <cstring>
using namespace std;

void leerCadena(char destino[], int maxLen, const char mensaje[]) {
    cout << mensaje;
    cin.getline(destino, maxLen);
}

bool hayCoincidencia(char original[], int pos, char buscar[], int lenBus) {
    for (int k = 0; k < lenBus; k++) {
        if (original[pos + k] != buscar[k])
            return false;
    }
    return true;
}

void reemplazar(char original[], char buscar[], char reemplazo[], char resultado[]) {
    int lenOrig = strlen(original);
    int lenBus  = strlen(buscar);
    int lenReem = strlen(reemplazo);
    int r = 0;

    for (int i = 0; i < lenOrig; ) {
        if (i + lenBus <= lenOrig && hayCoincidencia(original, i, buscar, lenBus)) {
            for (int k = 0; k < lenReem; k++)
                resultado[r++] = reemplazo[k];
            i += lenBus;
        } else {
            resultado[r++] = original[i++];
        }
    }
    resultado[r] = '\0';
}

void mostrarResultado(char resultado[]) {
    cout << "Resultado: " << resultado << endl;
}

int main() {
    char original[500], buscar[100], reemplazo[100], resultado[1000];

    leerCadena(original,  500, "Cadena original: ");
    leerCadena(buscar,    100, "Subcadena a buscar: ");
    leerCadena(reemplazo, 100, "Subcadena de reemplazo: ");

    reemplazar(original, buscar, reemplazo, resultado);
    mostrarResultado(resultado);
    return 0;
}