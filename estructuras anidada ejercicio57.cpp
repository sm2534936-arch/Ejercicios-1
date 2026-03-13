#include <iostream>
using namespace std;



	struct info_direccion{
		char direccion[30];
		char ciudad[20];
		char provincia[20];
		
	};
	
	struct empleado{
		char nombre[20];
		struct info_direccion dir_empleado;
		double salario;
		
	};
	
	int main ()
	
	{
		 empleado emp1 = {"juan perez", {"calle florida", "ANZOATEGUI"}, 2500};
		
		cout << "empleado: " << emp1.nombre << endl; 
		cout << "direccion: " << emp1.dir_empleado.direccion <<", " << emp1.dir_empleado.ciudad << endl;
		cout << "salario: $ " << emp1.salario << endl;
		
		
		return 0;
		
		
	}
	


