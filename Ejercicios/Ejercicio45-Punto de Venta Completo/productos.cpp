#include <iostream>
#include "factura.h"

using namespace std;

// extern void agregarProducto(string descripcion, int cantidad, double precio);

void productos(int opcion)
{

    system("cls");

    int opcionProducto = 0;

    switch (opcion)
    {
        case 1:
        {
            
            cout << "*****************" <<endl;
            cout << "BEBIDAS CALIENTES" <<endl;
            cout << "*****************" <<endl;
            cout << "1 - Capuccino" <<endl;
            cout << "2 - Expresso" <<endl;
            cout << "3 - Chailatte" <<endl;
            cout << endl;

            cout <<"Ingrese una opcion:" ;
            cin >> opcionProducto;
            
            switch (opcionProducto)
            {
            case 1:
                agregarProducto("1 Capuccino Lps. 40.00", 1, 40);
                break;
            case 2:
                agregarProducto("2 Expresso Lps. 45.00", 1, 45);
                break;
            case 3:
                agregarProducto("3 Chailatte Lps. 45.00", 1, 45);
                break;
            default:
                {   
                    cout <<"Opcion no valida";
                    return;
                    break;
                }
            }

            cout << endl;
            cout <<"Producto agregado" <<endl <<endl;
            system("pause");

            break;
        }
        case 2:
        {
            cout << "*************" <<endl;
            cout << "BEBIDAS FRIAS" <<endl;
            cout << "*************" <<endl;
            cout << "1 - Mochaccino" <<endl;
            cout << "2 - Frapuchata" <<endl;
            cout << "3 - Granita de cafe" <<endl;
            cout << endl;
            
            cout <<"Ingrese una opcion:" ;
            cin >> opcionProducto;
            
            switch (opcionProducto)
            {
            case 1:
                agregarProducto("1 Mochaccino Lps. 43.00", 1, 43);
                break;
            case 2:
                agregarProducto("2 Frapuchata Lps. 45.00", 1, 45);
                break;
            case 3:
                agregarProducto("3 Granita de cafe Lps. 40.00", 1, 40);
                break;
            default:
                {   
                    cout <<"Opcion no valida";
                    return;
                    break;
                }
            }

            cout << endl;
            cout <<"Producto agregado" <<endl <<endl;
            system("pause");

            break;
        
        }
        case 3:
        {
            cout << "**********" <<endl;
            cout << "REPOSTERIA" <<endl;
            cout << "**********" <<endl;
            

            cout << "1 - Tarta de cafe" <<endl;
            cout << "2 - Pan con queso y frijoles" <<endl;
            cout << "3 - Tiramisu" <<endl;
            cout << endl;

            cout <<"Ingrese una opcion:" ;
            cin >> opcionProducto;
            
            switch (opcionProducto)
            {
            case 1:
                agregarProducto("1 Tarta de cafe Lps. 65.00", 1, 65);
                break;
            case 2:
                agregarProducto("2 Pan con queso y frijoles Lps. 40.00", 1, 40);
                break;
            case 3:
                agregarProducto("3 Tiramisu Lps. 60.00", 1, 60);
                break;
            default:
                {   
                    cout <<"Opcion no valida";
                    return;
                    break;
                }
            }

            cout << endl;
            cout <<"Producto agregado" <<endl <<endl;
            system("pause");

            break;
        }
        
    }
   
}