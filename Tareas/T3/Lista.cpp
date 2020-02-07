
#include "Lista.h"
#include "Nodo.h"

#include<iostream>
#include<conio.h>
#include<stdlib.h>
#include<string>
using namespace std;

Lista::Lista(){
	ptrInicio = NULL;
}

bool Lista::listaVacia(){
	if(ptrInicio == NULL){
		return true;
	} else {
		return false;
	}
}

void Lista::insertar(int _carne, string _nombre){ //Inserta Nodo al final de la lista
	Nodo *ptrNuevo = new Nodo(_carne, _nombre);
	if(listaVacia()){
		ptrInicio = ptrNuevo;
	} else {
		Nodo *aux = ptrInicio;
		while(aux->ptrSig != NULL){
			aux = aux->ptrSig;
			
		}
		aux->ptrSig = ptrNuevo;
	}
				fflush(stdin);
}

void Lista::buscarParaEliminar(int _carne){
	Nodo *aux = ptrInicio;
	while(aux != NULL){
		if(aux->student.getCarne() == _carne){
			eliminarDesdeElemento(aux);
			cout<<"\nElemento Eliminado\n";
			return;
		}
		aux = aux->ptrSig;		
	}	
	cout<<"\nNodo NO ENCONTRADO\n";	
}

void Lista::eliminarDesdeElemento(Nodo *&temp){
		Nodo *aux = temp;		
		if(aux != NULL){			
			Nodo *nuevo = aux->ptrSig;
			delete aux;
			eliminarDesdeElemento(nuevo);
		}
}



void Lista::buscar(int _carne){
	Nodo *aux = ptrInicio;
	while(aux != NULL){
		if(aux->student.getCarne() == _carne){
			cout<<"\nNodo ENCOTNRADO ["<<aux->student.getCarne()<<" | "<<aux->student.getNombre()<<" ]\n";
			return;
		}
		aux = aux->ptrSig;		
	}	
	cout<<"\nNodo NO ENCONTRADO\n";
}

void Lista::mostrar(){
	Nodo *aux = ptrInicio;
	while(aux != NULL){
		cout<<"[ "<<aux->student.getCarne()<<" | "<<aux->student.getNombre()<<" ] ->";
		aux = aux->ptrSig;
	}
}




