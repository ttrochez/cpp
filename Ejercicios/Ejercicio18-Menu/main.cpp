#include <iostream>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

using namespace std;

int main(int argc, char** argv) {
	
	int opcion = 0;
	
	while(true){
		
		system("cls");
		cout <<"****" <<endl;
		cout <<"MENU" <<endl;
		cout <<"****" <<endl;
		
		cout <<endl;
		cout <<"1 - Cafe y Granita" <<endl,
		cout <<"2 - Reposteria" <<endl;
		cout <<"o - Salir" <<endl;
		
		cout <<"Ingrese una opcion del menu: " ;
		cin >> opcion;
		
		if(opcion == 1){
			system("cls");
			cout <<"Estas en el menu de Cafe y Granita" <<endl;
			system("pause,");
		}
		
		if(opcion == 2){
			system("cls");
			cout <<"Esta en el menus de Reposteria"<<endl;
			system("pause");
			
		}
		
		if(opcion == 0){
			break;
		}
		
	}
	cout <<endl;
	cout <<"Saliste del sistema";




	return 0;
}
