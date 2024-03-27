#pragma once
#include "pch.h"
#include <string>  

class Estudiante
{
private:
    std::string nombre;
    std::string numeroTelefono;
    std::string fechaNacimiento;

public:
    // Constructora
    Estudiante();

    // Constructora con parámetros
    Estudiante(std::string nombre, std::string numeroTelefono, std::string fechaNacimiento);

    // Setters
    void setNombre(std::string nombre);
    void setNumeroTelefono(std::string numeroTelefono);
    void setFechaNacimiento(std::string fechaNacimiento);

    // Getters
    std::string getNombre() const;
    std::string getNumeroTelefono() const;
    std::string getFechaNacimiento() const;
};


