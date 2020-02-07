#ifndef LISTA_H
#define LISTA_H

#include "Student.h"
#include "Nodo.h"
using namespace std;


class Lista{
	private:
		Nodo *ptrInicio;
		
	public:
		Lista(); //Constructor
		
		//Metodos
		bool listaVacia();
		void insertar(int , string); //Insertar al final
		void buscarParaEliminar(int );
		void eliminarDesdeElemento(Nodo *&);
		void buscar(int);
		void mostrar();
		
};


#endif
