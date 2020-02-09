#include "LISTADOBLE.H"

ListaDoble::ListaDoble(){
	inicio = fin = NULL;
}

void ListaDoble::insertarAlInicio(char _dato){
	Nodo *nuevo = new Nodo(_dato);
	if(inicio == NULL){
		inicio = fin = nuevo;
	} else {
		nuevo->siguiente = inicio;
		inicio->anterior = nuevo;
		inicio = nuevo;
	}
	cout<<"\nCaracter "<<_dato<<" Agregado"<<endl;
}

void ListaDoble::eliminarUltimo(){
	if(inicio != NULL){
		Nodo *aux = fin;
		fin = fin->anterior;
		fin->siguiente = NULL;
		delete aux;	
		cout<<"\n---> Elemento Eliminado <---\n\n";	
	} else {
		cout<<"\n---> Lista Vacia <---\n\n";			
	}
}

Nodo* ListaDoble::Buscar(string _cadena){
	Nodo *aux = inicio;
	
	if((aux != NULL) && (_cadena.size() > 0)){
		char caracter = _cadena[0];
		while(aux != NULL){
			if(aux->dato == caracter){
				cout<<"Caracater "<<caracter<<" Encontrado \n"<<endl;
				return aux;
			}
			aux = aux->siguiente;
		}
	}
	cout<<"CADENA "<<_cadena<<" NO Encontrada \n"<<endl;
	return aux;
}

void ListaDoble::imprimirLista(){
	if(inicio != NULL){
		cout<<"\n---> Imprimiendo Lista de Inicio a Fin"<<endl;
		Nodo *aux = inicio;
		cout<<"NULL -> ";
		while(aux != NULL){
			cout<<"[ "<<aux->dato<<" ] -> ";
			aux = aux->siguiente;
		}
		cout<<"NULL";
	}
	
	if(fin != NULL){
		cout<<"\n---> Imprimiendo Lista de Fin a Inicio"<<endl;
		Nodo *aux = fin;
		cout<<"NULL -> ";
		while(aux != NULL){
			cout<<"[ "<<aux->dato<<" ] -> ";
			aux = aux->anterior;
		}
		cout<<"NULL";
	}
}

