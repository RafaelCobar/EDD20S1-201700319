#include "Nodo.h"
#include "Student.h"
using namespace std;

Nodo::Nodo(int _carne, string _nombre){
	student.setCarne(_carne);
	student.setNombre(_nombre);	
	ptrSig = NULL;
}

