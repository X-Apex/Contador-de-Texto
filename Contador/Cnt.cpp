#include <iostream>
#include <string>
using namespace std;

int main() {
    string texto;
    cout << "Ingrese el texto: ";
    getline(cin, texto);

    int caracteres = 0;
    int palabras = 0;
    int oraciones = 0;
    bool dentroPalabra = false;

    for (char c : texto) {
        // Contar caracteres (sin espacios, tabulaciones ni saltos de línea)
        if (c != ' ' && c != '\t' && c != '\n') {
            caracteres++;
        }

        // Detectar palabras
        if (c != ' ' && c != '\t' && c != '\n') {
            if (!dentroPalabra) {
                palabras++;
                dentroPalabra = true;
            }
        } else {
            dentroPalabra = false;
        }

        // Detectar oraciones (terminan en ., ?, !)
        if (c == '.' || c == '?' || c == '!') {
            oraciones++;
        }
    }

    cout << "Numero de caracteres (sin espacios): " << caracteres << endl;
    cout << "Numero de palabras: " << palabras << endl;
    cout << "Numero de oraciones: " << oraciones << endl;

    return 0;
}
