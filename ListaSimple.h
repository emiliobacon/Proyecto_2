#pragma once
#include "NodoSimple.h"
using namespace System;

ref class ListaSimple
{
public: 
	NodoSimple^ Cabeza;
	NodoSimple^ Cola; 

	void InsertarNuevo(String^ curso);
	int Buscar(String^ curso);
	int Buscar2(String^ curso);
	bool Eliminar(String^ curso);

	
	String^ Recorrer();
};

