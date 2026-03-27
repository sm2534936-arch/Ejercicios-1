//Programado por: Sebastian Morales CI:32453623
//Fecha: 27/03/2026




#include <iostream>   
#include <string>     
#include <algorithm>  
using namespace std;


struct Producto {
    int id;              
    string descripcion;   
    int cantidad;         
    float precio;         
};


bool compararAlfabeticamente(Producto a, Producto b) {
    return a.descripcion < b.descripcion;
}

// función encargada de imprimir los datos en pantalla
void mostrarInventario(Producto *inv, int n) {
    if (n == 0) { // Si el contador de productos es cero
        cout << "\n[!] El inventario esta vacio." << endl;
        return;
    }
    
 
    sort(inv, inv + n, compararAlfabeticamente);

    cout << "\n--- INVENTARIO ORDENADO (A-Z) ---" << endl;
    for (int i = 0; i < n; i++) { // Recorremos el arreglo con un ciclo
        cout << "ID: " << inv[i].id 
             << " | Desc: " << inv[i].descripcion 
             << " | Cant: " << inv[i].cantidad 
             << " | Precio: $" << inv[i].precio << endl;
    }
}

int main() {
    int n = 0;               // Variable para el tamaño del inventario
    int opcion;              // Variable para capturar la elección del menú
    Producto *inventario = nullptr; // Puntero inicializado en nada

    do {
        // muestra el menú indicando al usuario que wscoja una opcion
        cout << "\n--- SISTEMA DE INVENTARIO ---" << endl;
        cout << "1. Registrar productos " << endl;
        cout << "2. Eliminar producto por ID" << endl;
        cout << "3. Mostrar inventario" << endl;
        cout << "4. Salir" << endl;
        cout << "Seleccione una opcion: ";
        cin >> opcion;

        switch (opcion) {
            case 1: { 
                // Si ya había datos, liberamos esa memoria antes de crear nuevos
                if (inventario != nullptr) delete[] inventario;
                
                cout << "Cantidad de productos a registrar: ";
                cin >> n;

                // 'new' reserva un bloque de memoria exacto para 'n' productos
                inventario = new Producto[n];

                for (int i = 0; i < n; i++) {
                    cout << "\nProducto " << i + 1 << endl;
                    cout << "ID: "; cin >> inventario[i].id;
                    cin.ignore(); // Limpia el salto de línea del buffer
                    cout << "Descripcion: "; getline(cin, inventario[i].descripcion);
                    cout << "Cantidad: "; cin >> inventario[i].cantidad;
                    cout << "Precio: "; cin >> inventario[i].precio;
                }
                break;
            }

            case 2: { // eliminacion
                if (n == 0) {
                    cout << "No hay productos para eliminar." << endl;
                    break;
                }
                int idEliminar;
                cout << "Ingrese el ID del producto a eliminar: ";
                cin >> idEliminar;

                
                int indiceEncontrado = -1;
                for (int i = 0; i < n; i++) {
                    if (inventario[i].id == idEliminar) {
                        indiceEncontrado = i;
                        break;
                    }
                }

                if (indiceEncontrado != -1) {
                    // si existe, creamos un arreglo nuevo con espacio para uno menos 
                    Producto *nuevoInventario = new Producto[n - 1];
                    int k = 0; // indice para el nuevo arreglo
                    
                    for (int i = 0; i < n; i++) {
                        // Copiamos todos los productos excepto el que queremos borrar
                        if (i != indiceEncontrado) {
                            nuevoInventario[k++] = inventario[i];
                        }
                    }
                    
                    delete[] inventario;       // destruimos el arreglo viejo
                    inventario = nuevoInventario; // Apuntamos al nuevo arreglo reducido
                    n--;                       // Actualizamos el contador total
                    cout << "Producto eliminado con exito." << endl;
                } else {
                    cout << "ID no encontrado." << endl;
                }
                break;
            }

            case 3:
                mostrarInventario(inventario, n);
                break;

            case 4:
                cout << "saliedo y liberando memoria.." << endl;
                break;

            default:
                cout << "Opcion no valida." << endl;
        }
    } while (opcion != 4); // el ciclo se repite mientras la opción no sea 4

    // limpieza final de la memoria al cerrar el programa
    delete[] inventario;
    return 0;
}