#include "LISTADOBLE.H"

#include<iostream>
#include<conio.h>
#include<stdlib.h>
using namespace std;

ListaDoble lista;

void Menu();
void switchCase(int op);

int main(){
	Menu();
	getch();
	return 0;
}

void Menu(){
	int op;
	do{
		cout<<"\t--Menu--"<<endl;
		cout<<"1. Insertar Caracter"<<endl;
		cout<<"2. Eliminar Ultimo Caracter"<<endl;
		cout<<"3. Buscar"<<endl;
		cout<<"4. Imprimir"<<endl;
		cout<<"5. Salir"<<endl;
		cout<<"Ingrese opcion = ";
		cin>>op;
		switchCase(op);
	} while(op != 5);
}

void switchCase(int op){
	cout<<"\n\n";
	string cadena;
	char caracter;
	switch(op){
		case 1:
			cout<<"Ingrese caracter = "; 
			cin>>caracter;
			lista.insertarAlInicio(caracter);
			break;
		case 2:
			lista.eliminarUltimo();
			break;
		case 3:
			fflush(stdin);
			cout<<"Ingrese cadena = "; 
			getline(cin, cadena);
			lista.Buscar(cadena);
			break;
		case 4:
			lista.imprimirLista();
			break;
	}
	cout<<"\n\n";
	system("pause");
	system("cls");
}


