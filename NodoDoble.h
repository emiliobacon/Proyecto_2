#pragma once
#include "ListaSimple.h"
using namespace System;

ref class NodoDobleTrabajador
{
public:
	String^ Nombre;
	String^ Apellido1;
	String^ Apellido2;
	String^ DPI;
	Double Salario;
	String^ FechaInicio;
	String^ Departamento;
	bool Docente;
	String^ Asignatura;
	String^ Cargo;
	String^ Codigo;

	ListaSimple^ ListaCursos = gcnew ListaSimple(); 

	
	NodoDobleTrabajador^ Anterior;
	NodoDobleTrabajador^ Siguiente;
};

