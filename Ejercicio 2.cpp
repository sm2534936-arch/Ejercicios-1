//Programado por: Sebastian Morales CI; 32453623
//Fecga: 06/03/2025
#include <iostream> //Libreria que permite utilizar la funcion cout para mostrar en pantalla
using namespace std; //ahorra tener que escribir std: antes de cada comando
int main() {
int notas[] = {15, 18, 20, 12}; // Crea un arreglo de 4 numeros enteros
int *p = notas; // 'p' apunta al inicio (al 15)
cout << "Recorriendo la calle de las notas:" << endl;
for (int i = 0; i < 4; i++) {
// *(p + i) significa: "Ve a la casa i y dime qué hay dentro"
cout << "Nota " << i << ": " << *(p + i) << " (Direccion: " <<
(p + i) << ")" << endl;
}
return 0;
}
