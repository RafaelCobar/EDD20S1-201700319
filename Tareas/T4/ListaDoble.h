#ifndef LISTADOBLE_H
#define LISTADOBLE_H

#include "NODO.H"

#include<iostream>
#include<stdlib.h>
using namespace std;

class ListaDoble{
	private:
		Nodo *inicio;
		Nodo *fin;
		
	public:
		ListaDoble();
		void insertarAlInicio(char );
		void eliminarUltimo();
		Nodo* Buscar(string );
		void imprimirLista();
		
};

#endif

