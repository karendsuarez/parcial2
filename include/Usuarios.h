#pragma once
#include "Persona.h"

class Usuario : public Persona {
private:
    //ATRIBUTOS
    int codigoUsuario;             
    int cantidadLibrosPrestados;   //atributo requerido

public:
   
    Usuario(std::string _nombre, int _documento, int _edad, int _codigoUsuario);
    
    // Getters útiles
    int getCodigoUsuario() const;
    int getCantidadLibrosPrestados() const;
    
    // Auxiliares para la lógica de préstamos
    void incrementarLibrosPrestados();
    void decrementarLibrosPrestados();

    // Métodos obligatorios a sobrescribir
    void mostrarRol() override;
    void mostrarInformacion() override;
};