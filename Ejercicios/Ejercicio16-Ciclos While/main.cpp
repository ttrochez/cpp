#include <iostream>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

using namespace std;


int main(int argc, char** argv) {
	
	int a = 10;
	int b = 3;
		
	while(a > b){
		cout <<"Ingrese el valor de a: " <<endl;
		cin >> a;
	}
	
	cout <<"Saliste del ciclo";
	


	return 0;
}
