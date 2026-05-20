#pragma once
#include <string>

class Persona {
protected:
    std::string nombre;
    int documento; 
    int edad;

public:
    Persona(std::string _nombre, int _documento, int _edad);
    virtual ~Persona() = default; 

    std::string getNombre() const;
    int getDocumento() const; 

    virtual void mostrarRol() = 0;
    virtual void mostrarInformacion();       
};