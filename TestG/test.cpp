#include "pch.h"
#include "gtest/gtest.h"
#include "../GrupEstudi/Estudiante.h"

TEST(EstudianteTest, Constructora) {
    Estudiante estudiante;
    EXPECT_EQ("", estudiante.getNombre());
    EXPECT_EQ("", estudiante.getNumeroTelefono());
    EXPECT_EQ("", estudiante.getFechaNacimiento());
}

TEST(EstudianteTest, ConstructoraConParametros) {
    std::string nombre = "Juan";
    std::string telefono = "123456789";
    std::string fechaNacimiento = "01/01/2000";

    Estudiante estudiante(nombre, telefono, fechaNacimiento);

    EXPECT_EQ(nombre, estudiante.getNombre());
    EXPECT_EQ(telefono, estudiante.getNumeroTelefono());
    EXPECT_EQ(fechaNacimiento, estudiante.getFechaNacimiento());
}

TEST(EstudianteTest, SettersYGetters) {
    Estudiante estudiante;
    std::string nombre = "Ana";
    std::string telefono = "987654321";
    std::string fechaNacimiento = "05/05/1995";

    estudiante.setNombre(nombre);
    estudiante.setNumeroTelefono(telefono);
    estudiante.setFechaNacimiento(fechaNacimiento);

    EXPECT_EQ(nombre, estudiante.getNombre());
    EXPECT_EQ(telefono, estudiante.getNumeroTelefono());
    EXPECT_EQ(fechaNacimiento, estudiante.getFechaNacimiento());
}

