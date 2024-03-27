#include "pch.h"
#include "CppUnitTest.h"
#include "../GrupEstudi/Estudiante.h"  

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace VisualStudioTests
{
    TEST_CLASS(EstudianteTests)
    {
    public:

        TEST_METHOD(Constructora)
        {
            Estudiante estudiante;
            Assert::AreEqual(std::string(""), estudiante.getNombre());
            Assert::AreEqual(std::string(""), estudiante.getNumeroTelefono());
            Assert::AreEqual(std::string(""), estudiante.getFechaNacimiento());
        }

        TEST_METHOD(ConstructoraConParametros)
        {
            std::string nombre = "Juan";
            std::string telefono = "123456789";
            std::string fechaNacimiento = "01/01/2000";

            Estudiante estudiante(nombre, telefono, fechaNacimiento);

            Assert::AreEqual(nombre, estudiante.getNombre());
            Assert::AreEqual(telefono, estudiante.getNumeroTelefono());
            Assert::AreEqual(fechaNacimiento, estudiante.getFechaNacimiento());
        }

        TEST_METHOD(SettersYGetters)
        {
            Estudiante estudiante;
            std::string nombre = "Ana";
            std::string telefono = "987654321";
            std::string fechaNacimiento = "05/05/1995";

            estudiante.setNombre(nombre);
            estudiante.setNumeroTelefono(telefono);
            estudiante.setFechaNacimiento(fechaNacimiento);

            Assert::AreEqual(nombre, estudiante.getNombre());
            Assert::AreEqual(telefono, estudiante.getNumeroTelefono());
            Assert::AreEqual(fechaNacimiento, estudiante.getFechaNacimiento());
        }
    };
}
