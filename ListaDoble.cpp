#include "ListaDoble.h"
#include "NodoDoble.h"

#include <iostream>
#include <vector>

void ListaDoble::InsertarNuevo(String^ codigo, String^ nombre, String^ apellido1, String^ apellido2, String^ dpi, Double salario, String^ fechainicio, String^ departamento, bool Docente, String^ asignatura)
{
	NodoDobleTrabajador^ Nuevo = gcnew NodoDobleTrabajador();
	Nuevo->Codigo = codigo;
	Nuevo->Nombre = nombre;
	Nuevo->Apellido1 = apellido1;
	Nuevo->Apellido2 = apellido2;
	Nuevo->DPI = dpi;
	Nuevo->Salario = salario;
	Nuevo->FechaInicio = fechainicio;
	Nuevo->Departamento = departamento; 
	Nuevo->Docente = Docente;
	
	Nuevo->ListaCursos->InsertarNuevo(asignatura);

	Nuevo->Siguiente = Cabeza;
	if (Cabeza != nullptr)
	{
		Cabeza->Anterior = Nuevo;
	}
	Cabeza = Nuevo;
}

void ListaDoble::InsertarDocente(String^ codigo, String^ nombre, String^ apellido1, String^ apellido2, String^ dpi, Double salario, String^ fechaingreso, String^ departamento, bool Docente, String^ Asignatura, int indice)
{
	if (indice == 0)
	{
		InsertarNuevo(codigo, nombre, apellido1, apellido2, dpi, salario, fechaingreso, departamento, true, Asignatura);
	}
	else
	{
		NodoDobleTrabajador^ Nuevo = gcnew NodoDobleTrabajador();
		Nuevo->Codigo = codigo;
		Nuevo->Nombre = nombre;
		Nuevo->Apellido1 = apellido1;
		Nuevo->Apellido2 = apellido2;
		Nuevo->DPI = dpi;
		Nuevo->Salario = salario;
		Nuevo->FechaInicio = fechaingreso;
		Nuevo->Departamento = departamento;
		Nuevo->Docente = Docente;
		Nuevo->ListaCursos->InsertarNuevo(Asignatura);

		int PosicionActual = 0;
		NodoDobleTrabajador^ NodoActual = Cabeza;
		while (PosicionActual < indice)
		{
			NodoActual = NodoActual->Siguiente;
			PosicionActual++;
		}
		Nuevo->Siguiente = NodoActual;
		NodoActual->Anterior->Siguiente = Nuevo;
		Nuevo->Anterior = NodoActual->Anterior;
		if (Nuevo->Siguiente != nullptr)
		{
			Nuevo->Siguiente->Anterior = Nuevo;
		}
	}
}

void ListaDoble::InsertarNuevo2(String^ codigo, String^ nombre, String^ apellido1, String^ apellido2, String^ dpi, Double salario, String^ fechainicio, String^ departamento, bool Docente, String^ cargo)
{
	NodoDobleTrabajador^ Nuevo = gcnew NodoDobleTrabajador();
	Nuevo->Codigo = codigo;
	Nuevo->Nombre = nombre;
	Nuevo->Apellido1 = apellido1;
	Nuevo->Apellido2 = apellido2;
	Nuevo->DPI = dpi;
	Nuevo->Salario = salario;
	Nuevo->FechaInicio = fechainicio;
	Nuevo->Departamento = departamento;
	Nuevo->Docente = Docente;
	Nuevo->Cargo = cargo;

	Nuevo->Siguiente = Cabeza;
	if (Cabeza != nullptr)
	{
		Cabeza->Anterior = Nuevo;
	}
	Cabeza = Nuevo;
}

void ListaDoble::InsertarNoDocente(String^ codigo, String^ nombre, String^ apellido1, String^ apellido2, String^ dpi, Double salario, String^ fechaingreso, String^ departamento, bool Docente, String^ cargo, int indice)
{
	if (indice == 0)
	{
		InsertarNuevo2(codigo, nombre, apellido1, apellido2, dpi, salario, fechaingreso, departamento, false, cargo);
	}
	else
	{
		NodoDobleTrabajador^ Nuevo = gcnew NodoDobleTrabajador();
		Nuevo->Codigo = codigo; 
		Nuevo->Nombre = nombre;
		Nuevo->Apellido1 = apellido1;
		Nuevo->Apellido2 = apellido2;
		Nuevo->DPI = dpi;
		Nuevo->Salario = salario;
		Nuevo->FechaInicio = fechaingreso;
		Nuevo->Departamento = departamento;
		Nuevo->Docente = Docente;
		Nuevo->Cargo = cargo;

		int PosicionActual = 0;
		NodoDobleTrabajador^ NodoActual = Cabeza;
		while (PosicionActual < indice)
		{
			NodoActual = NodoActual->Siguiente;
			PosicionActual++;
		}
		Nuevo->Siguiente = NodoActual;
		NodoActual->Anterior->Siguiente = Nuevo;
		Nuevo->Anterior = NodoActual->Anterior;
		if (Nuevo->Siguiente != nullptr)
		{
			Nuevo->Siguiente->Anterior = Nuevo;
		}
	}
}

String^ ListaDoble::Buscar(String^ dpi)
{
		int count = 0;
		for (NodoDobleTrabajador^ indice = Cabeza; indice != nullptr; indice = indice->Siguiente)
		{
			if (indice->DPI == dpi)
			{
				return indice->Nombre;
			}
			count++;
		}
		return nullptr;
	
}

int ListaDoble::Buscar2(String^ dpi)
{
	int count = 0;
	for (NodoDobleTrabajador^ indice = Cabeza; indice != nullptr; indice = indice->Siguiente)
	{
		if (indice->DPI == dpi)
		{
			return count;
		}
		count++;
	}
	return -1;
}

bool ListaDoble::Eliminar(String^ dpi)
{
	NodoDobleTrabajador^ Actual = Cabeza;
		int Indice = Buscar2(dpi);
		if(Indice == -1)
				return false; 
		else if (Indice == 0)
		{	
			Actual = Cabeza;
			Cabeza->Siguiente->Anterior = nullptr;
			Cabeza = Cabeza->Siguiente;
		}
		else
		{
			for (int i = 0; i < Indice; i++)
			{
				Actual = Actual->Siguiente;
			}
			Actual->Anterior->Siguiente = Actual->Siguiente;
			Actual->Siguiente->Anterior = Actual->Anterior;
		}
		delete(Actual);
		return true; 
}

String^ ListaDoble::Recorrer()
{
	NodoDobleTrabajador^ Recorrer = gcnew NodoDobleTrabajador();
	String^ Datos;
	Recorrer = Cabeza;
	while (Recorrer != nullptr)
	{
		Datos += Recorrer->Nombre + " " + Recorrer->Apellido1 + "\n";
		Recorrer = Recorrer->Siguiente;
	}
	return Datos;
}

double ListaDoble::PromedioSalarios()
{
	NodoDobleTrabajador^ Recorrer = gcnew NodoDobleTrabajador();
	double Datos = 0;
	double Contador = 0;
	Recorrer = Cabeza;
	while (Recorrer != nullptr)
	{
		Datos += Recorrer->Salario;
		Recorrer = Recorrer->Siguiente;
		Contador++;
	}
	return(Datos / Contador);
}

void ListaDoble::CrearCodigo()
{
	
}

String^ ListaDoble::RecorrerParaImprimir()
{
		NodoDobleTrabajador^ Recorrer = gcnew NodoDobleTrabajador();
		String^ Datos;
		Recorrer = Cabeza;
		while (Recorrer != nullptr)
		{
			Datos += Recorrer->Codigo + "," + Recorrer->Apellido1 + "," + Recorrer->Apellido2 + "," + Recorrer->Nombre + "," + Recorrer->DPI + "," + Recorrer->FechaInicio + "," + Recorrer->Cargo + ", " + Recorrer->Departamento + "," + Recorrer->Salario + "," + Recorrer->ListaCursos->Recorrer() + "\n";
			Recorrer = Recorrer->Siguiente;
		}
		return Datos;
}

int ListaDoble::CantidadDocentesCurso(String^ curso)
{
	NodoDobleTrabajador^ Recorrer = gcnew NodoDobleTrabajador();
	int numDocentes = 0;
	Recorrer = Cabeza;

	while (Recorrer != nullptr)
	{
		if (Recorrer->ListaCursos->Buscar(curso) == 1)
		{
			numDocentes ++;
			Recorrer = Recorrer->Siguiente;
		}
		else
		Recorrer = Recorrer->Siguiente;

		
	}
	return numDocentes;
}

NodoDobleTrabajador^ ListaDoble::BuscarNodo(String^ dpi)
{
	int count = 0;
	for (NodoDobleTrabajador^ indice = Cabeza; indice != nullptr; indice = indice->Siguiente)
	{
		if (indice->DPI == dpi)
		{
			return indice;
		}
		count++;
	}
	return nullptr;
}

void ListaDoble::InsertarCursos(NodoDobleTrabajador^ nodo, String^ curso)
{
	nodo->ListaCursos->InsertarNuevo(curso);
}

void ListaDoble::EliminarCursos(NodoDobleTrabajador^ nodo, String^ curso)
{
	nodo->ListaCursos->Eliminar(curso);
}

void ListaDoble::Modificar(NodoDobleTrabajador^ nodo, String^ nombre, String^ apellido, String^ apellido2, String^ dpi, double Salario, String^ fecha, String^ departamento, String^ cargo)
{
	nodo->Nombre = nombre;
	nodo->Apellido1 = apellido;
	nodo->Apellido2 = apellido2;
	nodo->DPI = dpi;
	nodo->Salario = Salario;
	nodo->FechaInicio = fecha;
	nodo->Departamento = departamento;
	nodo->Cargo = cargo;

}

void ListaDoble::Modificar(NodoDobleTrabajador^ nodo, String^ nombre, String^ apellido, String^ apellido2, String^ dpi, double Salario, String^ fecha, String^ departamento)
{
	nodo->Nombre = nombre;
	nodo->Apellido1 = apellido;
	nodo->Apellido2 = apellido2;
	nodo->DPI = dpi;
	nodo->Salario = Salario;
	nodo->FechaInicio = fecha;
	nodo->Departamento = departamento;
	

}



