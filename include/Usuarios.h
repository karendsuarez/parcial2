#pragma once
#include "Persona.h"
#include <string>

class Usuaio : public Persona {
private:
    //ATRIBUTOS
    int CodeUsuario;
    int CantLibrosPrestados;

public: 
    int Usuario(std::string _nombre, std::string _documento, int _edad, std::string _codeUsuario);

    std::string getCodigoUsuario() const;

    int getCantidadLibrosPrestados() const;

    void incrementarLibros();

    void decrementarLibros();

    void MostrarRol() override;

    void MostararInfo() override;
};