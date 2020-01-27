/*

Rafael Cóbar
201700319

Tarea 1:

	Realizar una matriz cuadrada de N*N donde el borde (contorno) de la matriz
	tenga solor numeros 1 y el resto cualquier otro numero diferente de 1 (en 
	este caso se tomara el numero 0).
	por ej:
	Matriz de 4*4
	
	1 1 1 1
	1 0 0 1 
	1 0 0 1
	1 1 1 1
	
*/

#include<iostream>
#include<conio.h>

using namespace std;

int main(){
	
	int n;
	
	cout<<"Ingrese la cantidad 'n' para la matriz cuadrada\ndonde 'n' es la misma cantidad de filas y columnas: ";
	cin>>n;
	
	int matriz[n][n];
	
	for(int i=0; i<n; i++){ // i = filas
	
		for(int j=0; j<n; j++ ){ // j = columnas
			
			if(i==0){ // si es la primera fila
				cout<<"1 ";
			} 
			else if(i == (n-1)){// si es la ultima fila
				cout<<"1 ";
			} else{ // cualquier otra fila
			
				if(j == 0){// si es la primera columna
					cout<<"1 ";
				}
				else if( j == (n-1)){// si es la ultima columna
					cout<<"1";
				}
				else {//cualquier otra columna
					cout<<"0 ";
				}
			}
			
		}
		cout<<endl;
	}
	
	getch();
	return 0;
}


