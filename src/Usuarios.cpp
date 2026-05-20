#include "Usuario.h"

Usuario::Usuario(std::string _nombre, std::string _documento, int _edad, std::string _codigoUsuario)
    : Persona(_nombre, _documento, _edad) {
    codigoUsuario = _codigoUsuario;
    cantidadLibrosPrestados = 0;
}

std::string Usuario::getCodigoUsuario() const { return codigoUsuario; }
int Usuario::getCantidadLibrosPrestados() const { return cantidadLibrosPrestados; }
void Usuario::incrementarLibros() { cantidadLibrosPrestados++; }
void Usuario::decrementarLibros() { if (cantidadLibrosPrestados > 0) cantidadLibrosPrestados--; }

void Usuario::mostrarRol() {
    std::cout << "Rol: Usuario" << std::endl;
}

void Usuario::mostrarInformacion() {
    Persona::mostrarInformacion();
    std::cout << " | Código Usuario: " << codigoUsuario 
              << " | Libros Prestados: " << cantidadLibrosPrestados << std::endl;
}