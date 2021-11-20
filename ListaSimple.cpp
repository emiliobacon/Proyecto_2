#include "ListaSimple.h"

void ListaSimple::InsertarNuevo(String^ curso)
{
	NodoSimple^ Nuevo = gcnew NodoSimple();
	Nuevo->Curso = curso;
	Nuevo->Siguiente = Cabeza;
	Cabeza = Nuevo;
}

int ListaSimple::Buscar(String^ curso)
{
	int count = 0;
	for (NodoSimple^ indice = Cabeza; indice != nullptr; indice = indice->Siguiente)
	{
		if (indice->Curso == curso)
		{
			return 1 ;
		}
		count++;
	}
	return -1;
}

int ListaSimple::Buscar2(String^ curso)
{
	int count = 0;
	for (NodoSimple^ indice = Cabeza; indice != nullptr; indice = indice->Siguiente)
	{
		if (indice->Curso == curso)
		{
			return count;
		}
		count++;
	}
	return -1;
}

bool ListaSimple::Eliminar(String^ curso)
{
	NodoSimple^ Actual = Cabeza;
	int Indice = Buscar2(curso);
	if (Indice == -1)
	{
		return false;
	}
	else if (Indice == 0)
	{
		Cabeza = Cabeza->Siguiente;
	}
	else
	{
		NodoSimple^ Anterior = Cabeza;
		for (int i = 0; i < Indice; i++)
		{
			Anterior = Actual;
			Actual = Actual->Siguiente;
		}
		Anterior->Siguiente = Actual->Siguiente;
	}
	delete(Actual);
	return true;
}

String^ ListaSimple::Recorrer()
{
	NodoSimple^ Recorrer = gcnew NodoSimple();
	String^ Datos;
	Recorrer = Cabeza;
	while (Recorrer != nullptr)
	{
		Datos += Recorrer->Curso + ", ";
		Recorrer = Recorrer->Siguiente;
	}
	return Datos;
}
