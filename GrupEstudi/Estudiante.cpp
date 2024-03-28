#include "pch.h"
#include "Estudiante.h"

// Constructora
Estudiante::Estudiante() {
    nombre = "";
    numeroTelefono = "";
    fechaNacimiento = "";
}

// Constructora con parámetros
Estudiante::Estudiante(std::string nombre, std::string numeroTelefono, std::string fechaNacimiento) {
    this->nombre = nombre;
    this->numeroTelefono = numeroTelefono;
    this->fechaNacimiento = fechaNacimiento;
}

// Setters
void Estudiante::setNombre(std::string nombre) {
    this->nombre = nombre;
}

void Estudiante::setNumeroTelefono(std::string numeroTelefono) {
    this->numeroTelefono = numeroTelefono;
}

void Estudiante::setFechaNacimiento(std::string fechaNacimiento) {
    this->fechaNacimiento = fechaNacimiento;
}

// Getters
std::string Estudiante::getNombre() const {
    return nombre;
}

std::string Estudiante::getNumeroTelefono() const {
    return numeroTelefono;
}

std::string Estudiante::getFechaNacimiento() const {
    return fechaNacimiento;
}

