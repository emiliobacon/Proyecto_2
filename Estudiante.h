#pragma once
#include "Persona.h"
#include "DoublyLinkedList.h"
#include <string>
#include "Curso.h"
using std::string;


class Estudiante :
    public Persona
{
protected:
    string nivelAcademico;
    int carnet;
    string facultad;
    int añoIngreso;
    DoublyLinkedList<Curso>* listaCursos;

public:

    Estudiante(string nombre, string apellidos, int DPI, string nivelAcademico, int carnet, string facultad, int añoIngreso) :Persona(nombre, apellidos, DPI) {
        this->nivelAcademico = nivelAcademico;
        this->carnet = carnet;
        this->facultad = facultad;
        this->añoIngreso = añoIngreso;
        this->listaCursos = new DoublyLinkedList<Curso>();
    }

    void insertCurso(Curso *nuevoCurso) { //Agregar cursos al estudiante
        this->listaCursos->add(nuevoCurso);

    }
    string getNivelAcademico() {
        return this->nivelAcademico;
    }
    string getFacultad() {
        return this->facultad;
    }
    int getCarnet() {
        return this->carnet;
    }
    int getAñoIngreso() {
        return this->añoIngreso;
    }

};

