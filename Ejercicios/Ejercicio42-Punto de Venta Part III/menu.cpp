#include <iostream>

using namespace std;

extern void productos(int opcion);

void menu()
{
    int opcion = 0 ;

    while(true)
    {
        system("cls");
        
        cout <<"****" <<endl;
        cout <<"MENU" <<endl;
        cout <<"****" <<endl;
        cout <<endl;

        cout <<"1 - Bebidas calientes" <<endl;
        cout <<"2 - Bebidas Frias" <<endl;
        cout <<"3 - Reposteria" <<endl;
        cout <<"4 - Imprimir Factura" <<endl;
        cout <<"0 - Salir" <<endl;

        cout <<"Ingrese una opcion entre 1 - 3: ";

        cin >> opcion;

        if (opcion == 0)
        {
            cout <<"Saliste del Menu" ;
            break;
        }

        productos(opcion);
    }



}