#include <iostream>

using namespace std;

int main(int argc, char const *argv[])
{
    int a = 10;
    int b = 35;

    while(a > b){
        cout <<"(while) a > b" <<endl;
        break;
        
    }

    do{
        cout <<"(do while) a > b" <<endl;
        break;
    } while(a > b);

    

    return 0;
}
