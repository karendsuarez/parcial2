#pragma once
#include "Persona.h"

class Bibliotecario : public Persona {
private:
    //ATRIBUTOS
    int CodeEmpleado;
    double Salario;

public: 

    Bibliotecario(std::string _nombre, std::string _documento, int _edad, std::string _codigoEmpleado, double _salario);

    std::string getCodigoEmpleado() const;

    void MostrarRol() override;

    void MostararInfo() override;
};