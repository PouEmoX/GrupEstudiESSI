#pragma once
#include "Grup.h"
#include <string>
#include <iostream>

using namespace System;
using namespace System::Windows::Forms;
using namespace std;

using namespace MySql::Data::MySqlClient;

ref class Database
{
protected:
private: String^ connectionString;
private: MySqlConnection^ conn;

private:

public:
    // Constructor
    Database();

    //Push Database
    void pushDB(Grup^ grup);

    Grup^ pullDB(String^ query);
};
