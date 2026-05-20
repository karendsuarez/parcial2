#include "Bibliotecario.h"

Bibliotecario::Bibliotecario(std::string _nombre, std::string _documento, int _edad, std::string _codigoEmpleado, double _salario)
    : Persona(_nombre, _documento, _edad) {
    codigoEmpleado = _codigoEmpleado;
    salario = _salario;
}

std::string Bibliotecario::getCodigoEmpleado() const { return codigoEmpleado; }

void Bibliotecario::mostrarRol() {
    std::cout << "Rol: Bibliotecario" << std::endl;
}

void Bibliotecario::mostrarInformacion() {
    Persona::mostrarInformacion();
    std::cout << " | Código Empleado: " << codigoEmpleado 
              << " | Salario: $" << salario << std::endl;
}