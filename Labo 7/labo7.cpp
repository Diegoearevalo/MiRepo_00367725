#include <iostream>
#include <fstream>
using namespace std;

void leerArchivo(const char nombre[], int v[], int &n);
void clasificarNumeros(int v[], int n);
void ordenarArchivo(const char nombre[]);
void mostrarArchivo(const char nombre[]);

int main() {
    int num[100], n = 0;

    cout << "CLASIFICADOR Y ORDENADOS DE NUMEROS" << endl << endl;

    leerArchivo("datos.txt", num, n);
    clasificarNumeros(num, n);

    cout << "Numeros pares antes de ordenar" << endl;
    mostrarArchivo("pares.txt");

    cout << "Numeros impares antes de ordenar" << endl;
    mostrarArchivo("impares.txt");

    ordenarArchivo("pares.txt");
    ordenarArchivo("impares.txt");

    cout << "Numeros pares despues de ordenar" << endl;
    mostrarArchivo("pares.txt");

    cout << "Numeros impares despues de ordenar" << endl;
    mostrarArchivo("impares.txt");

    return 0;
}

void leerArchivo(const char nombre[], int v[], int &n) {
    ifstream archivo(nombre);

    if (!archivo) {
        cout << "Error no hay archivo " << nombre << endl;
        return;
    }

    while (archivo >> v[n]) {
        n++;
    }

    archivo.close();
}

void clasificarNumeros(int v[], int n) {
    ofstream pares("pares.txt");
    ofstream impares("impares.txt");

    for (int i = 0; i < n; i++) {
        if (v[i] % 2 == 0)
            pares << v[i] << " ";
        else
            impares << v[i] << " ";
    }

    pares.close();
    impares.close();
}

void ordenarArchivo(const char nombre[]) {
    ifstream archivo(nombre);
    int v[100], n = 0;

    while (archivo >> v[n]) n++;
    archivo.close();

        for (int i = 0; i < n - 1; i++) {
        for (int j = 0; j < n - i - 1; j++) {
        if (v[j] > v[j + 1]) {
        int aux = v[j];
        v[j] = v[j + 1];
        v[j + 1] = aux;
            }
        }
    }

    ofstream salida(nombre);
    for (int i = 0; i < n; i++) {
        salida << v[i] << " ";
    }
    salida.close();
}

void mostrarArchivo(const char nombre[]) {
    ifstream archivo(nombre);
    int x;

    if (!archivo) {
        cout << "No se pudo abrir " << nombre << endl;
        return;
    }
    while (archivo >> x) {
        cout << x << " ";
    }
    cout << endl;
    archivo.close();
}