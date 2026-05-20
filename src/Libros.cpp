#include "Libro.h"

Libro::Libro(std::string _titulo, std::string _autor, std::string _codigoLibro) {
    titulo = _titulo;
    autor = _autor;
    codigoLibro = _codigoLibro;
    disponible = true;
}

std::string Libro::getCodigoLibro() const { return codigoLibro; }
std::string Libro::getTitulo() const { return titulo; }
bool Libro::getDisponible() const { return disponible; }

void Libro::prestarLibro() { disponible = false; }
void Libro::devolverLibro() { disponible = true; }

void Libro::mostrarInformacion() {
    std::cout << "Título: " << titulo << " | Autor: " << autor 
              << " | Código Libro: " << codigoLibro 
              << " | Estado: " << (disponible ? "Disponible" : "Prestado") << std::endl;
}