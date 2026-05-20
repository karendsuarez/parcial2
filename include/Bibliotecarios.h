#pragma once
#include "Persona.h"

class Bibliotecario : public Persona {
private:
    //ATRIBUTOS
    int codeEmpleado;
    int salario;

public:
   
    Bibliotecario(std::string _nombre, int _documento, int _edad, int _codeEmpleado, int _salario);
    int getCodeEmpleado() const;
    void mostrarRol() override;
    void mostrarInformacion() override;
};