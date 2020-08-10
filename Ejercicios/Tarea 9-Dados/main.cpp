#include <iostream>
#include <stdlib.h>
#include <time.h>

using namespace std;

int dados()
{
    int numero = 0;

    system("cls"),
    
    srand(time(NULL));

    numero = rand() % 5 + 1;
    cout <<" Dado 1 es: " <<numero <<endl;

    numero = rand() % 5 + 1;

    cout <<" Dado 2 es: " <<numero <<endl;

    return 0; 
}

int main(int argc, char const *argv[])
{
    cout <<"Arrojando dados, good luck " <<endl <<endl;
    dados();

    return 0;
}
