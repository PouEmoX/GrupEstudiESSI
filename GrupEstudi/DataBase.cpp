#include "pch.h"
#include "DataBase.h"

#include<fstream>
#include <vcclr.h>

Database::Database() {
    
    // Inicializar la cadena de conexión
    String^ connection = "";

        ifstream config;
        String^ configPath = "..\\config.txt";

        config.open("..\\config.txt", ios::in);

        if (config.fail()) {
            MessageBox::Show("Imposible acceder a la información de la base de datos");
        }
        else {
            while (!config.eof()) {
                string line;
                getline(config, line);

                // Convertir std::string a String^
                String^ managedString = gcnew String(line.c_str());

                connection = String::Concat(connection, managedString);
            }
            config.close();
        }
    
        connectionString = connection;
        conn = gcnew MySqlConnection(connectionString);
}

int filasSesiones(MySqlConnection^ conn) {
    int numeroFilas = 0;
    MySqlCommand^ cmd = gcnew MySqlCommand("SELECT COUNT(*) FROM sesiones", conn);

    try {
        conn->Open();
        numeroFilas = Convert::ToInt32(cmd->ExecuteScalar());
    }
    catch (Exception^ ex) {
        Console::WriteLine(ex->Message);
    }
    finally {
        conn->Close();
    }

    return numeroFilas;
}

void Database::pushDB(Grup^ grup) {
    String^ sql = "insert into sesiones values ( '" + (filasSesiones(conn) + 1) + "', '" + grup->getEstudianteCreador() + "', '" + grup->getTema() + "', '" + grup->getDia() + "', '" + grup->getHora() + "')";
    MySqlCommand^ cursor = gcnew MySqlCommand(sql, conn);

    MySqlDataReader^ dataReader;

    try {
        this->conn->Open();
        dataReader = cursor->ExecuteReader();
    }
    catch (Exception^ x) {
        MessageBox::Show(x->Message);
    }
    finally {
        conn->Close();
    }
}

Grup^ Database::pullDB(String^ query) {
    MySqlCommand^ cmd = gcnew MySqlCommand(query, conn);
    MySqlDataReader^ dataReader;

    try {
        conn->Open();
        dataReader = cmd->ExecuteReader();

        if (dataReader->Read()) {
            // Crear un objeto Grup con los datos obtenidos de la consulta
            String^ estudiante = dataReader->GetString(1); // Empezamos en 1 porque la columna 0 es el id
            String^ tema = dataReader->GetString(2);       
            DateTime dia = dataReader->GetDateTime(3);
            String^ diaString = dia.ToString("yyyy-MM-dd");
            TimeSpan hora = dataReader->GetTimeSpan(4);
            String^ horaString = hora.ToString();

            return gcnew Grup(estudiante, tema, diaString, horaString);
        }
        else {
            // No se encontraron datos
            return nullptr;
        }
    }
    catch (Exception^ ex) {
        MessageBox::Show(ex->Message);
        return nullptr;
    }
    finally {
        conn->Close();
    }
}




