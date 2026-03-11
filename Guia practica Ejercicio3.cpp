//Programado por: Sebastian Morales CI: 32453623

#include <iostream>

using namespace std;

int main() {
    // Declaración e inicialización del arreglo de 5 enteros
    int arr[5] = {10, 20, 30, 40, 50};

    // Declaramos un puntero que apunte al primer elemento del arreglo
    // Un arreglo decae naturalmente a un puntero a su primer elemento
    int* ptr = arr;

    cout << "Recorriendo el arreglo con aritmetica de punteros:" << endl;
    cout << "--------------------------------------------------" << endl;

    for (int i = 0; i < 5; i++) {
        // *(ptr + i): Accedemos al contenido (valor)
        // (ptr + i): Obtenemos la dirección de memoria actual
        cout << "Elemento [" << i << "]" << endl;
        cout << "  Valor: " << *(ptr + i) << endl;
        cout << "  Direccion: " << (ptr + i) << endl;
        cout << "--------------------------------------------------" << endl;
    }

    return 0;
}