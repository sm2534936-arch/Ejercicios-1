//Programado por: Sebastian Morales CI:32453623
//Fecha: 24/03/2026

#include <iostream>
#include <string>
#include <algorithm> // Para la función sort

using namespace std;

// Definimos la estructura del producto
struct Producto {
    int id;
    string descripcion;
    int cantidad;
    float precio;
};

// función para comparar dos productos por descripción (orden alfabético)
bool compararAlfabeticamente(Producto a, Producto b) {
    return a.descripcion < b.descripcion;
}

int main() {
    int n;

    cout << "Ingrese la cantidad de productos a registrar: ";
    cin >> n;

   
    Producto *inventario = new Producto[n];

    // entrada de datos
    for (int i = 0; i < n; i++) {
        cout << "\n--- Producto " << i + 1 << " ---" << endl;
        cout << "ID: ";
        cin >> inventario[i].id;
        cin.ignore(); // limpiar el buffer para leer el string
        cout << "Descripcion: ";
        getline(cin, inventario[i].descripcion);
        cout << "Cantidad: ";
        cin >> inventario[i].cantidad;
        cout << "Precio: ";
        cin >> inventario[i].precio;
    }

    // ordenamiento
    sort(inventario, inventario + n, compararAlfabeticamente);

    // mostrar resultados
    cout << "\n==========================================" << endl;
    cout << "        INVENTARIO ORDENADO (A-Z)         " << endl;
    cout << "==========================================" << endl;
    for (int i = 0; i < n; i++) {
        cout << "ID: " << inventario[i].id 
             << " | Desc: " << inventario[i].descripcion 
             << " | Cant: " << inventario[i].cantidad 
             << " | Precio: $" << inventario[i].precio << endl;
    }

   
    delete[] inventario; 
    inventario = nullptr; 

    cout << "\nMemoria liberada exitosamente." << endl;

    return 0;
}