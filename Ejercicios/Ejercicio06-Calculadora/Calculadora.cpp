#include <iostream>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

using namespace std;


int main(int argc, char** argv) {
	// Datos de Entrada
	int a = 0;
	int b = 0;
	int suma = 0, resta = 0, multiplicacion = 0, division = 0; 
	
	cout <<"Ingrese el valor de a: "; cin>> a;
	
	cout <<"Ingrese el valor de b: "; cin>> b;
	
		// Proceso
	suma = a + b;
	resta = a - b;
    multiplicacion = a * b;
	division = a / b;

    // Salida
	
	cout <<"La suma es: "<<suma<<endl;
	cout <<"La resta es:" <<resta<<endl;
    cout <<"La multiplicacion es:"<<multiplicacion<<endl;
    cout <<"La division es;"<<division<<endl;


	return 0;
}
