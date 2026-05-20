#pragma once
#include <string>
#include <iostream>

class Libro {
private:
    //ATRIBUTOS 
    std::string titulo;
    std::string autor;
    int codeLibro;
    bool disponible;
public:
    
    Libro(std::string _titulo, std::string _autor, int _codeLibro);

    int getCodeLibro() const;
    std::string getTitulo() const;
    bool getDisponible() const;

    void PrestarLibro();
    void DevolverLibro();
    void MostrarInfo ();

};