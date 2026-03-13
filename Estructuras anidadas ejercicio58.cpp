#include <iostream>
using namespace std;

struct info_direccion {
    char calle[30];
    char ciudad[20];
};

struct empleado {
    char nombre[20];
    struct info_direccion dir; 
    double salario;
} e; 

int main() {
   
    cout << "Ingrese nombre: ";   cin >> e.nombre;
    cout << "Ingrese calle: ";    cin >> e.dir.calle;
    cout << "Ingrese ciudad: ";   cin >> e.dir.ciudad;
    cout << "Ingrese salario: ";  cin >> e.salario;

    cout << "\n--- DATOS DEL EMPLEADO ---" << endl;
    cout << "Nombre: " << e.nombre << endl;
    cout << "Ubicacion: " << e.dir.calle << " (" << e.dir.ciudad << ")" << endl;
    cout << "Salario: $" << e.salario << endl;

    return 0;
}