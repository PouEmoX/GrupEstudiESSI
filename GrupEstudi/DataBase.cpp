#include "pch.h"
#include "DataBase.h"

Database::Database() {
    // Inicializar la cadena de conexión
    connectionString = "datasource=b99cavshzhle8qpp4gyr-mysql.services.clever-cloud.com; username=udn12yk88ro4ih7a; password=\"s3ANuNU2Igs1LndsQN4U\"; database=b99cavshzhle8qpp4gyr;";
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
            String^ estudiante = dataReader->GetString(1); // Empezamos en 1 porque la primera columna es el id
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




