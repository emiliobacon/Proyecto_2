#pragma once
#include "NodoDoble.h"


ref class ListaDoble
{
public: 

	NodoDobleTrabajador^ Cabeza;

	void InsertarNuevo(String^ codigo, String^ nombre, String^ apellido1, String^ apellido2, String^ dpi, Double salario, String^ fechaingreso, String^ departamento, bool Docente, String^ Asignatura);

	void InsertarDocente(String^ codigo, String^ nombre, String^ apellido1, String^ apellido2, String^ dpi, Double salario, String^ fechaingreso, String^ departamento, bool Docente, String^ Asignatura, int indice);

	void InsertarNuevo2(String^ codigo, String^ nombre, String^ apellido1, String^ apellido2, String^ dpi, Double salario, String^ fechaingreso, String^ departamento, bool Docente, String^ cargo);

	void InsertarNoDocente(String^ codigo, String^ nombre, String^ apellido1, String^ apellido2, String^ dpi, Double salario, String^ fechaingreso, String^ departamento, bool Docente, String^ cargo, int indice);
	
	String^ Buscar(String^ dpi);

	int Buscar2(String^ dpi);

	bool Eliminar(String^ dpi);

	String^ Recorrer();

	double PromedioSalarios();

	void CrearCodigo();

	String^ RecorrerParaImprimir();

	int CantidadDocentesCurso(String^ curso);

	NodoDobleTrabajador^ BuscarNodo(String^ dpi);

	void InsertarCursos(NodoDobleTrabajador^ nodo, String^ curso);
	void EliminarCursos(NodoDobleTrabajador^ nodo, String^ curso);

	void Modificar(NodoDobleTrabajador^ nodo, String^ nombre, String^ apellido, String^ apellido2, String^ dpi, double Salario, String^ fecha, String^ departamento, String^ cargo);

	void Modificar(NodoDobleTrabajador^ nodo, String^ nombre, String^ apellido, String^ apellido2, String^ dpi, double Salario, String^ fecha, String^ departamento);
};

