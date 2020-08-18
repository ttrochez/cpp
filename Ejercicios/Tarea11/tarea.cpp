#include <iostream>
#include <stdlib.h>
#include <time.h>

using namespace std;

int main(int argc, char const *argv[])
{
    int arreglo[5][5];
    int random = 0;
    int totalSuma = 0;

    srand(time(NULL));

    for (int i = 0; i < 5; i++)
    {
        for(int j = 0; j < 5; j++)
        {
            random  = rand() % 1000 + 1;
            arreglo[i][j] = random;
            cout << " [ " << arreglo[i][j] << " ] ";
        }

        cout <<endl;
    }

    for (int i = 0; i < 5; i++)
    {
        for (int j = 0; j < 5; j++)
        totalSuma += arreglo[i][j];
    }

    cout <<endl;
    cout <<" La suma de los arreglos 5 x 5 es:" <<totalSuma;
    
    return 0;
}
