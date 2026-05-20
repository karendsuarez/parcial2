#pragma once
#include <string>
#include <iostream>

class Persona{
protected:
    std::string nombre;
    int documento;
    int edad;

public:

    Persona(std::string _nombre, std::string _documento, int _edad);
    virtual ~Persona() = default; //Destructor virtual para asegurar una correcta liberación de memoria

    std::string getNombre() const;
    std::string getDocumento() const;

    virtual void MostrarRol() = 0;

    virtual void MostararInfo();
    };

