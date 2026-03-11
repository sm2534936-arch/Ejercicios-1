//Programado por: Sebastian Morales CI: 32453623

#include <iostream> // Incluye la librería para utilizar la funcion cout
using namespace std; // Permite usar elementos de la librería estándar (como cout) sin el prefijo std::

// Definición de la función swap que recibe dos PUNTEROS a enteros (*a y *b)
void swap(int *a, int *b) {
    int temporal = *a; // 1. Guarda el VALOR que está en la dirección de 'a' en una caja temporal
    *a = *b;           // 2. Copia el VALOR de la dirección de 'b' en la dirección de 'a'
    *b = temporal;     // 3. Copia el VALOR guardado en 'temporal' en la dirección de 'b'
}

int main() {
    // Declaración e inicialización de variables locales
    int x = 50, y = 10;
    
    // Muestra el estado inicial de las variables
    cout << "Antes: x=" << x << ", y=" << y << endl;

    // Llamada a la función enviando las DIRECCIONES de memoria de x e y usando el operador &
    // Esto se conoce como "Pasar por referencia usando punteros"
    swap(&x, &y);

    // Muestra el estado final; x ahora tiene el valor que era de y, y viceversa
    cout << "Despues: x=" << x << ", y=" << y << endl;

    return 0; // Indica que el programa finalizó correctamente
}
