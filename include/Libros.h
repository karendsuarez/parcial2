#pragma once
#include <string>

class Libro {
private:
    //ATRIBUTOS
    std::string titulo;
    std::string autor;
    int codigoLibro;      // Restriccion de solo numeros
    bool disponible;      // Control de disponibilidad

public:
    Libro(std::string _titulo, std::string _autor, int _codigoLibro);

    std::string getTitulo() const;
    int getCodigoLibro() const;
    bool isDisponible() const;

    bool prestarLibro();  //Cambia estado a prestado si aplica
    bool devolverLibro(); //Cambia estado a disponible si aplica
    void mostrarInformacion();
};