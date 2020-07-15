#include <iostream>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

using namespace std;


int main(int argc, char** argv) 
{
	//Datos de entrada
    double subtotal =0;
    double total = 0;
    double impuesto =0.15;
    int descuento = 0;
    double calculoDescuento = 0;
    double calculoImpuesto = 0; 
    char  estaExenta;

    cout <<"Ingrese el subtotal de la factura: ";
    cin >> subtotal;
    
    cout <<"Ingrese el descuento (0, 10, 15, 20): ";
    cin >> descuento;

    cout <<"Factura exenta? escriba S o N: " ;
    cin >> estaExenta;

    //Proceso
    calculoDescuento = (subtotal * descuento) / 100;
     if(estaExenta == 's' || estaExenta == 'S')
     {
        calculoImpuesto = 0;

     } else{
         calculoImpuesto = (subtotal - calculoDescuento) * 0.15;/* code */
     }
        
    total = subtotal - calculoDescuento + calculoImpuesto;

    //Salida
    cout <<"El total a pagar es: " << total;
  	
    	
	return 0;
}
