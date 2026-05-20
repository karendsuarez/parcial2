#include "../include/Bibliotecarios.h"
#include <iostream>

Bibliotecario::Bibliotecario(std::string _nombre, int _documento, int _edad, int _codeEmpleado, int _salario) 
    : Persona(_nombre, _documento, _edad) { // Se lo pasa como int a Persona
    codeEmpleado = _codeEmpleado;
    salario = _salario;
}

int Bibliotecario::getCodeEmpleado() const { 
    return codeEmpleado; 
}

void Bibliotecario::mostrarRol() {
    std::cout << "Rol: Bibliotecario" << std::endl;
}

void Bibliotecario::mostrarInformacion() {
    Persona::mostrarInformacion(); // Llama de forma limpia a la base
    std::cout << " | Código Empleado: " << codeEmpleado << " | Salario: $" << salario << std::endl;
}