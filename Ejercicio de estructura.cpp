//Programado por: Sebastian Morales

#include <iostream>
#include <string> 

using namespace std;


struct Estudiante {
    string nombre;
    int edad;
    float promedio;
}; // <--- ¡No olvides el punto y coma!

int main() {
 
    Estudiante alumno1;

    
    alumno1.nombre = "Juan Perez"; 
    alumno1.edad = 20;
    alumno1.promedio = 18.5;

    
    cout << "--- Datos del Estudiante ---" << endl;
    cout << "Nombre: " << alumno1.nombre << endl;
    cout << "Edad: "   << alumno1.edad << " anos" << endl;
    cout << "Promedio: " << alumno1.promedio << endl;

    return 0;
}
