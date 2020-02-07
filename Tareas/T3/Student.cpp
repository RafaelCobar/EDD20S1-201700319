
#include "Student.h"
#include<string>
using namespace std;


void Student::setCarne(int _carne){
	carne = _carne;
}

void Student::setNombre(string _nombre){
	nombre = _nombre;
}

int Student::getCarne(){
	return carne;
}

string Student::getNombre(){
	return nombre;
}


