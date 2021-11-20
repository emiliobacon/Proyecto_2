#pragma once
#include <string>
using std::string;

class Curso
{
protected:
	string nombreCurso;

public: 

	Curso(string nombreCurso) {
		this->nombreCurso = nombreCurso;
	}

	string getNombreCurso() {
		return this->nombreCurso;
	}

};

