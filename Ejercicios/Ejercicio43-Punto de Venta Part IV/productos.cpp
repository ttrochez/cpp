#include <iostream>

using namespace std;

extern void agregarProducto(string descripcion, int cantidad, double precio);

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
        cin >> opcionProducto;
          
        switch (opcionProducto)
        {
        case 1:
            agregarProducto("Capuccino", 1, 40);
            break;
        case 2:
            agregarProducto("Expresso", 1, 45);
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
        system("pause");
        break;
    }
    case 3:
    {
        cout << "**********" <<endl;
        cout << "REPOSTERIA" <<endl;
        cout << "**********" <<endl;
        system("pause");
        break;
    }
   
}