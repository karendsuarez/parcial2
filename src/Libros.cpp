#include "../include/Libros.h"
#include <iostream>

Libro::Libro(std::string _titulo, std::string _autor, int _codigoLibro) {
    titulo = _titulo;
    autor = _autor;
    codigoLibro = _codigoLibro;
    disponible = true;
}

int Libro::getCodigoLibro() const {
    return codigoLibro;
}

bool Libro::isDisponible() const {
    return disponible;
}

// Lógica de condicionamiento para prestar un libro
bool Libro::prestarLibro() {
    if (disponible) { 
        disponible = false; 
        return true;        // Préstamo exitoso
    }
    return false; 
}

// Lógica de condicionamiento para devolver un libro
bool Libro::devolverLibro() {
    if (!disponible) {
        disponible = true; 
        return true;       
    }
    return false;
}

void Libro::mostrarInformacion() {
    std::cout << "Título: " << titulo 
              << " | Autor: " << autor 
              << " | Código Libro: " << codigoLibro 
              << " | Estado: " << (disponible ? "Disponible" : "Prestado") 
              << std::endl;
}