#pragma once
#include "Estudiante.h"
#include "Curso.h"

class Asignacion_EyC
{
protected:
	Estudiante* estudiante;
	Curso* curso;
	double nota;

public:
	Asignacion_EyC(Estudiante* estudiante, Curso* curso, double nota) {
		this->estudiante = estudiante;
		this->curso = curso;
		this->nota = nota;
	}

	Estudiante* getEstudiante() {
		return this->estudiante;
	}
	Curso* getCurso() {
		return this->curso;
	}
	double getNota() {
		return this->nota;
	}
	
	
};

