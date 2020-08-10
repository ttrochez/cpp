#include <iostream>

using namespace std;

int sumar(int a, int b)
{
    int resultado = 0;
    resultado = a + b;

    return a + b;
}

void sumarValorPorReferencia(int a, int b, int &resultado)
{
    resultado = a + b;
}

int main(int argc, char const *argv[])
{
    int num1 = 35;
    int num2 = 17;
    int r = 0;

    sumarValorPorReferencia(num1, num2, r);

    cout <<r;    

    return 0;
}
