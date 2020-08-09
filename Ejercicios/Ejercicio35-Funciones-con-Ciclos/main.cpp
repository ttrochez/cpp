#include <iostream>

using namespace std;

void imprimirCaracteres(char caracter, int ciclos)
{
    for (int i = 0; i < ciclos; i++)
    {
        cout << caracter;
    }

    cout <<endl;

}

int main(int argc, char const *argv[])
{
    imprimirCaracteres('@', 10);
    imprimirCaracteres('$', 25);
    cout <<"Hola Mundo" <<endl;
    imprimirCaracteres('*', 100);
   
    return 0;
}
