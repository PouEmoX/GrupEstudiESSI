#pragma once
#include <string>
#include <iostream>

using namespace System;
using namespace System::Windows::Forms;
using namespace std;

ref class Grup
{

private:
    System::String^ estudianteCreador;
    System::String^ tema;
    System::String^ dia;
    System::String^ hora;

public:
    // Constructor
    Grup(System::String^ estudiante, System::String^ tema, System::String^ dia, System::String^ hora);


    System::String^ getEstudianteCreador();

    System::String^ getTema();

    System::String^ getDia();

    System::String^ getHora();

    /*
    // Métodos de acceso
    void setEstudianteCreador(System::String^ estudiante);

    void setTema(System::String^ tema);

    void setDia(System::String^ dia);
    System::String^ getDia();

    void setHora(System::String^ hora);
    System::String^ getHora();
    */
};
