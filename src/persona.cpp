#include "Persona.h"
#include <iostream>

Persona::Persona(std::string _nombre, int _edad, std::string _documento) {
    nombre = _nombre;
    edad = _edad;
    documento = _documento;
}

// Implementación de los Getters
std::string Persona::getNombre() const { 
    return nombre; 
}

std::string Persona::getDocumento() const { 
    return documento; 
}

// Método para mostrar información
void Persona::mostrarInformacion() {
    std::cout << "Nombre: " << nombre << " | Documento: " << documento << " | Edad: " << edad << std::endl;
}

