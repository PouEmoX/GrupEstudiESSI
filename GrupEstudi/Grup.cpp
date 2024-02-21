#include "pch.h"
#include "Grup.h"

// Constructor
Grup::Grup(System::String^ estudiante, System::String^ tema, System::String^ dia, System::String^ hora)
    : estudianteCreador(estudiante), tema(tema), dia(dia), hora(hora) {}


System::String^ Grup::getEstudianteCreador() {
    return estudianteCreador;
}

System::String^ Grup::getTema() {
    return tema;
}

System::String^ Grup::getDia() {
    return dia;
}

System::String^ Grup::getHora() {
    return hora;
}

/*
// Métodos de acceso
void Grup::setEstudianteCreador(System::String^ estudiante) {
    estudianteCreador = estudiante;
}

void Grup::setTema(System::String^ tema) {
    this->tema = tema;
}

void Grup::setDia(System::String^ dia) {
    this->dia = dia;
}

void Grup::setHora(System::String^ hora) {
    this->hora = hora;
}
*/
