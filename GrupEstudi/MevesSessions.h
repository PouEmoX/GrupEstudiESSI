#pragma once

namespace GrupEstudi {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	using namespace MySql::Data::MySqlClient;

	/// <summary>
	/// Resumen de MevesSessions
	/// </summary>
	public ref class MevesSessions : public System::Windows::Forms::Form
	{
	public:
		MevesSessions(void)
		{
			InitializeComponent();
			dataGridView1->CellClick += gcnew DataGridViewCellEventHandler(this, &MevesSessions::DataGridView_CellClick);
			CargarDatos();
			//
			//TODO: agregar código de constructor aquí
			//
			this->ForeColor = System::Drawing::Color::Black;

			// Cambiar el color de fondo del DataGridView
			this->dataGridView1->BackgroundColor = System::Drawing::Color::AliceBlue;

			// Cambiar el color de fondo de las celdas seleccionadas
			this->dataGridView1->DefaultCellStyle->SelectionBackColor = System::Drawing::Color::LightBlue;

			// Cambiar el color del texto de las celdas
			this->dataGridView1->DefaultCellStyle->ForeColor = System::Drawing::Color::Black;

			// Ajustar el estilo del borde del DataGridView
			this->dataGridView1->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;

		}

	protected:
		/// <summary>
		/// Limpiar los recursos que se estén usando.
		/// </summary>
		~MevesSessions()
		{
			if (components)
			{
				delete components;
			}
		}
	private: String^ connectionString = "datasource=b99cavshzhle8qpp4gyr-mysql.services.clever-cloud.com; username=udn12yk88ro4ih7a; password=\"s3ANuNU2Igs1LndsQN4U\"; database=b99cavshzhle8qpp4gyr;";
	private: MySqlConnection^ conn = gcnew MySqlConnection(connectionString);
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::DataGridView^ dataGridView1;
	private: System::Windows::Forms::Panel^ panel1;

	protected:

	private:
		/// <summary>
		/// Variable del diseñador necesaria.
		/// </summary>
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Método necesario para admitir el Diseñador. No se puede modificar
		/// el contenido de este método con el editor de código.
		/// </summary>
		void InitializeComponent(void)
		{
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->dataGridView1 = (gcnew System::Windows::Forms::DataGridView());
			this->panel1 = (gcnew System::Windows::Forms::Panel());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->BeginInit();
			this->panel1->SuspendLayout();
			this->SuspendLayout();
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Dock = System::Windows::Forms::DockStyle::Top;
			this->label1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 25.25F));
			this->label1->Location = System::Drawing::Point(0, 0);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(323, 39);
			this->label1->TabIndex = 0;
			this->label1->Text = L"Les meves sessions";
			// 
			// dataGridView1
			// 
			this->dataGridView1->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dataGridView1->Dock = System::Windows::Forms::DockStyle::Bottom;
			this->dataGridView1->Location = System::Drawing::Point(0, 42);
			this->dataGridView1->Name = L"dataGridView1";
			this->dataGridView1->Size = System::Drawing::Size(718, 500);
			this->dataGridView1->TabIndex = 1;
			// 
			// panel1
			// 
			this->panel1->Controls->Add(this->label1);
			this->panel1->Controls->Add(this->dataGridView1);
			this->panel1->Location = System::Drawing::Point(0, 0);
			this->panel1->Name = L"panel1";
			this->panel1->Size = System::Drawing::Size(718, 542);
			this->panel1->TabIndex = 2;
			// 
			// MevesSessions
			// 
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::None;
			this->ClientSize = System::Drawing::Size(717, 540);
			this->Controls->Add(this->panel1);
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::None;
			this->Name = L"MevesSessions";
			this->Text = L"MevesSessions";
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->EndInit();
			this->panel1->ResumeLayout(false);
			this->panel1->PerformLayout();
			this->ResumeLayout(false);

		}
#pragma endregion




		void CargarDatos()
		{
			try
			{
				// No es necesario abrir la conexión aquí, ya que se abre antes de llamar a este método

				MySqlCommand^ cmd = gcnew MySqlCommand("SELECT * FROM sesiones where nombre_estudiante = 'Pablo'", conn);
				MySqlDataAdapter^ adapter = gcnew MySqlDataAdapter(cmd);
				DataTable^ dataTable = gcnew DataTable();
				adapter->Fill(dataTable);
				dataGridView1->DataSource = dataTable;
			}
			catch (Exception^ ex)
			{
				MessageBox::Show("Error al cargar los datos: " + ex->Message);
			}
		}



		void DataGridView_CellClick(Object^ sender, DataGridViewCellEventArgs^ e)
		{
			if (e->RowIndex >= 0 && e->ColumnIndex >= 0)
			{
				int grupoId = Convert::ToInt32(dataGridView1->Rows[e->RowIndex]->Cells["Id"]->Value); // Suponiendo que "Id" es el nombre de la columna que contiene el ID del grupo de estudio

				try
				{
					conn->Open();

					// Crear y ejecutar la consulta para eliminar el elemento seleccionado
					String^ query = "DELETE FROM sesiones WHERE Id = @grupoId"; // Reemplaza "Id" por el nombre real de la columna que contiene el ID del grupo de estudio
					MySqlCommand^ cmd = gcnew MySqlCommand(query, conn);
					cmd->Parameters->AddWithValue("@grupoId", grupoId);
					cmd->ExecuteNonQuery();
				}
				catch (Exception^ ex)
				{
					MessageBox::Show("Error al eliminar el elemento: " + ex->Message);
				}
				finally
				{
					conn->Close();
				}

				// Actualizar los datos en el DataGridView
				CargarDatos();
			}
		}



};
}
