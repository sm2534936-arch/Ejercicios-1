//Programado por: Sebastian Morales CI:32453623
//fecha: 17/03/2026

#include<iostream>
#include<conio.h>
#include<stdlib.h>

using namespace std;
void pedirDatos();
void ordenarArreglo(int *, int);
void mostrarArreglo(int *, int);

int nElementos, *elemento;


 int main(){
 	pedirDatos();
 	ordenarArreglo(elemento, nElementos);
 	mostrarArreglo(elemento, nElementos);
 	
 	delete[] elemento;
 	
 	getch();
 	return 0;
 	
 	
 }
 
 void pedirDatos(){
 	cout<<" digite el numero de elementos del arreglo: ";
 	cin>>nElementos;
 	
 	elemento = new int[nElementos];
 	
 	for(int i=0;i<nElementos;i++){
 		cout<<"digite un numero["<<i<<"] ";
 	    cin>>*(elemento+i);
 	    
	 }
 	
 }
    
     void ordenarArreglo(int *elemento, int nElementos){
     	int aux;
     	
     	for(int i=0;i<nElementos;i++){
     		for(int j=0;j<nElementos-1; j++){
     			if(*(elemento+j) > *(elemento+j+1)){
     				aux = *(elemento+j);
     				*(elemento+j) = *(elemento+j+1);
     				*(elemento+j+1) = aux;
				 }
			 }
		 }
	 }
	 
	 
	  void mostrarArreglo(int *elemento, int nElementos){
	  	cout<<"\n\nMostrando arreglo ordenado: ";
	  	for(int i=0;i<nElementos;i++){
	  		cout<<*(elemento+i)<<" ";
		  }
	  	
	  }
	 
	 