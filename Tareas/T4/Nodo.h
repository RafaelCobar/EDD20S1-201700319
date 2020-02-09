#ifndef NODO_H
#define NODO_H

#include<iostream>

class Nodo{
	public:
		char dato;
		Nodo 	*anterior, 
				*siguiente;
		Nodo(char);
};

#endif
