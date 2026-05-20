#include "../include/persona.h"

Persona::Persona(std::string _nombre, int _edad, std::string _documento) {
    nombre = _nombre;
    edad = _edad;
    documento = _documento;
}

//Implementacion de los Getters
std::string Persona::getNombre() const { 
    return nombre; 
}

int Persona::getEdad() const { 
    return edad; 
}

std::string Persona::getDocumento() const { 
    return documento; 
}