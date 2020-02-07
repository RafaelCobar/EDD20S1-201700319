#include<iostream>
#include "Lista.h"
#include "Nodo.h"

#include <iostream>
#include <conio.h>
#include <stdlib.h>
#include <string>

using namespace std;

//prototipo
void menu();

//variable global
Lista lista;



int main(){
	menu();
	getch();
	return 0;
}

void menu(){
	int opcion;
	int carne;
	string nombre;
	do{
		cout<<"------- MENU -------"<<endl;
		cout<<"1. Insertar Estudiante"<<endl;
		cout<<"2. Eliminar Estudiante"<<endl;
		cout<<"3. Buscar Estudiante"<<endl;
		cout<<"4. Mostrar Lista"<<endl;
		cout<<"5. Salir"<<endl;
		cout<<"Ingrese una opcion: ";
		cin>>opcion;
		
		switch(opcion){
			case 1:
				cout<<"\nIngresa el No. de Carne: "; cin>>carne;
				cout<<"Ingrese su Nombre: "; 
				cin>>nombre;
				lista.insertar(carne, nombre);
				cout<<"Informacion Ingresada CORRECTAMENTE";
				
				break;
			case 2:
				cout<<"\nIngresa el No. de Carne: "; cin>>carne;
				lista.buscarParaEliminar(carne);
				break;
			case 3:
				cout<<"\nIngresa el No. de Carne: "; 
				cin>>carne;
				lista.buscar(carne);
				break;
			case 4:
				lista.mostrar();
				break;
		}
				fflush(stdin);
		cout<<"\n\n";		
		system("pause");
		system("cls");
		
	}while(opcion != 5);
}
