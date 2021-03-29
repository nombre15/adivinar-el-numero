#include <iostream>
#include <cstdlib>
#include <ctime>
#include <windows.h>
using namespace std;

int main()
{
	SetConsoleTitle("adivina el numero");
	
	inicio1:
    srand(time(0));
    for(int x=1; x<2 ; x++){
    	
    	int numero;
    	int y;
    	int z;
    	
    	numero = 1+ (rand()%10);
    	inicio:
    	
    	cout << "adivina el numero!" << endl;
    	cin >> y;
    	
    	if(y<numero ){
    		
    		cout << "\nmas arriba " << endl;
    		goto inicio;
		}
		
		if(y>numero){
    		
    		cout << "\nmas abajo " << endl;
    		goto inicio;
		}
		
		if(y==numero){
			
			
			cout << "\nadivinaste!" << endl;
			elegir:
			cout << "quieres jugar otra vez?   1 = si ; 2 = no" << endl;
			cin >> z;
			
			if(z == 1){
				goto inicio1;
			}
			if(z == 2){
				cout << "adios!" << endl;
				break;
			}
			else{
				cout << "esa no es una opcion " << endl << endl;
				goto elegir;
			}
		 }				
	}
    return 0;
}

