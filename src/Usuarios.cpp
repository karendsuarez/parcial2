#include "../include/Usuarios.h"
#include <iostream>

Usuario::Usuario(std::string _nombre, int _documento, int _edad, int _codigoUsuario)
    : Persona(_nombre, _documento, _edad) { 
    codigoUsuario = _codigoUsuario;
    cantidadLibrosPrestados = 0; 
}

int Usuario::getCodigoUsuario() const {
    return codigoUsuario;
}

int Usuario::getCantidadLibrosPrestados() const {
    return cantidadLibrosPrestados;
}

void Usuario::incrementarLibrosPrestados() {
    cantidadLibrosPrestados++;
}

void Usuario::decrementarLibrosPrestados() {
    if (cantidadLibrosPrestados > 0) {
        cantidadLibrosPrestados--;
    }
}

void Usuario::mostrarRol() {
    std::cout << "Rol: Usuario" << std::endl;
}

void Usuario::mostrarInformacion() {
    Persona::mostrarInformacion(); 
    std::cout << " | Código Usuario: " << codigoUsuario 
              << " | Libros Prestados: " << cantidadLibrosPrestados << std::endl;
}