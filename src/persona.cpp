#include "../include/Persona.h"
#include <iostream>

Persona::Persona(std::string _nombre, int _documento, int _edad) {
    nombre = _nombre;
    documento = _documento;
    edad = _edad;
}

std::string Persona::getNombre() const { 
    return nombre; 
}

int Persona::getDocumento() const { 
    return documento; 
}

void Persona::mostrarInformacion() {
    std::cout << "Nombre: " << nombre << " | Documento: " << documento << " | Edad: " << edad << std::endl;
}