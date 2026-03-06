//Programado por; Sebastian Morales CI; 32453623
//fecha; 06/03/2026


#include <iostream> //Esta libreria nos permite utilizar la funcion cout para mostrar en pantalla
using namespace std;
// Función que recibe "las llaves" (punteros)
void intercambiar(int *ptrA, int *ptrB) {
int auxiliar = *ptrA; // Guardo lo que hay en la primera caja
*ptrA = *ptrB; // Pongo lo de la segunda caja en la primera
*ptrB = auxiliar; // Pongo lo que guardé en la segunda caja
}
int main() {
int x = 5, y = 10; //le asigna valor a x,y de tipo entero
cout << "Original: x=" << x << ", y=" << y << endl; //muestra en pantalla el orden original
// Enviamos las direcciones con '&'
intercambiar(&x, &y);
cout << "Intercambiado: x=" << x << ", y=" << y << endl; //muestra en pantalla el intercambio
return 0; //finaliza el progra correctamente
}


