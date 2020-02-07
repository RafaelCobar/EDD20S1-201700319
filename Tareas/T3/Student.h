#ifndef STUDENT_H
#define STUDENT_H

#include<string>
using namespace std;

class Student{
	//Atributos
	private:
		int carne;
		string nombre;
	
	//Metodos
	public:
		
		void setCarne(int _carne);		
		void setNombre(string _nombre);
		
		int getCarne();
		string getNombre();		
};


#endif
