#pragma once
#include <string>
using std::string;

class Persona
{
protected:
    string nombre;
    string apellidos;
    int DPI;

public:

    Persona(string nombre, string apellidos, int DPI) {
        this->nombre = nombre;
        this->apellidos = apellidos;
        this->DPI = DPI;
    }

    virtual string getNombre() {
        return this->nombre;
    }
    virtual int getDpi() {
        return this->DPI;
    }
    virtual string getApellidos() {
        return this->apellidos;
    }

};

