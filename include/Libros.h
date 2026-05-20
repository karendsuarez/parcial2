#pragma once
#include <string>

class libros {
    //ATRIBUTOS 
    std::string titulo;
    std::string autor;
    int codeLibro;
    bool disponible;
public:
    
    void PrestarLibro();

    void DevolverLibro();

    void MostrarInfo ();

};