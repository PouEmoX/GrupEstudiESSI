#pragma once

#include "Inicio.h"

namespace CppCLRWinFormsProject {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	using namespace MySql::Data::MySqlClient;

	/// <summary>
	/// Summary for Form1
	/// </summary>
	public ref class Form1 : public System::Windows::Forms::Form
	{
	//private:
		//String^ username;
	public:
		Form1(void)
		{
			InitializeComponent();
			//
			//TODO: Add the constructor code here
			//
		}

	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~Form1()
		{
			if (components)
			{
				delete components;
			}
		}
	private: String^ connectionString = "datasource=b99cavshzhle8qpp4gyr-mysql.services.clever-cloud.com; username=udn12yk88ro4ih7a; password=\"s3ANuNU2Igs1LndsQN4U\"; database=b99cavshzhle8qpp4gyr;";
	private: MySqlConnection^ conn = gcnew MySqlConnection(connectionString);
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::TextBox^ txt_nombre;
	private: System::Windows::Forms::TextBox^ txt_contra;

	protected:


	private: System::Windows::Forms::Label^ lbl_username;
	private: System::Windows::Forms::Label^ lbl_password;
	private: System::Windows::Forms::Button^ btn_login;
	private: System::Windows::Forms::Button^ btn_exit;




	private:
		/// <summary>
		/// Required designer variable.
		/// </summary>
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Required method for Designer support - do not modify
		/// the contents of this method with the code editor.
		/// </summary>
		void InitializeComponent(void)
		{
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->txt_nombre = (gcnew System::Windows::Forms::TextBox());
			this->txt_contra = (gcnew System::Windows::Forms::TextBox());
			this->lbl_username = (gcnew System::Windows::Forms::Label());
			this->lbl_password = (gcnew System::Windows::Forms::Label());
			this->btn_login = (gcnew System::Windows::Forms::Button());
			this->btn_exit = (gcnew System::Windows::Forms::Button());
			this->SuspendLayout();
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Segoe UI Symbol", 30.25F));
			this->label1->Location = System::Drawing::Point(386, 107);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(135, 55);
			this->label1->TabIndex = 0;
			this->label1->Text = L"Log in";
			// 
			// txt_nombre
			// 
			this->txt_nombre->BackColor = System::Drawing::Color::Gray;
			this->txt_nombre->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->txt_nombre->Font = (gcnew System::Drawing::Font(L"Segoe UI Symbol", 10.25F));
			this->txt_nombre->ForeColor = System::Drawing::Color::White;
			this->txt_nombre->Location = System::Drawing::Point(358, 220);
			this->txt_nombre->Name = L"txt_nombre";
			this->txt_nombre->Size = System::Drawing::Size(191, 19);
			this->txt_nombre->TabIndex = 1;
			// 
			// txt_contra
			// 
			this->txt_contra->BackColor = System::Drawing::Color::Gray;
			this->txt_contra->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->txt_contra->Font = (gcnew System::Drawing::Font(L"Segoe UI Symbol", 10.25F));
			this->txt_contra->ForeColor = System::Drawing::Color::White;
			this->txt_contra->Location = System::Drawing::Point(358, 287);
			this->txt_contra->Name = L"txt_contra";
			this->txt_contra->Size = System::Drawing::Size(191, 19);
			this->txt_contra->TabIndex = 2;
			this->txt_contra->UseSystemPasswordChar = true;
			// 
			// lbl_username
			// 
			this->lbl_username->AutoSize = true;
			this->lbl_username->Location = System::Drawing::Point(358, 192);
			this->lbl_username->Name = L"lbl_username";
			this->lbl_username->Size = System::Drawing::Size(97, 25);
			this->lbl_username->TabIndex = 3;
			this->lbl_username->Text = L"Username";
			// 
			// lbl_password
			// 
			this->lbl_password->AutoSize = true;
			this->lbl_password->Location = System::Drawing::Point(358, 259);
			this->lbl_password->Name = L"lbl_password";
			this->lbl_password->Size = System::Drawing::Size(92, 25);
			this->lbl_password->TabIndex = 4;
			this->lbl_password->Text = L"Password";
			// 
			// btn_login
			// 
			this->btn_login->BackColor = System::Drawing::Color::White;
			this->btn_login->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->btn_login->ForeColor = System::Drawing::Color::Gray;
			this->btn_login->Location = System::Drawing::Point(358, 344);
			this->btn_login->Name = L"btn_login";
			this->btn_login->Size = System::Drawing::Size(92, 34);
			this->btn_login->TabIndex = 5;
			this->btn_login->Text = L"Log in";
			this->btn_login->UseVisualStyleBackColor = false;
			this->btn_login->Click += gcnew System::EventHandler(this, &Form1::btn_login_Click);
			// 
			// btn_exit
			// 
			this->btn_exit->BackColor = System::Drawing::Color::Gray;
			this->btn_exit->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->btn_exit->Location = System::Drawing::Point(461, 344);
			this->btn_exit->Name = L"btn_exit";
			this->btn_exit->Size = System::Drawing::Size(88, 34);
			this->btn_exit->TabIndex = 6;
			this->btn_exit->Text = L"Exit";
			this->btn_exit->UseVisualStyleBackColor = false;
			this->btn_exit->Click += gcnew System::EventHandler(this, &Form1::btn_exit_Click);
			// 
			// Form1
			// 
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::None;
			this->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(64)), static_cast<System::Int32>(static_cast<System::Byte>(64)),
				static_cast<System::Int32>(static_cast<System::Byte>(64)));
			this->ClientSize = System::Drawing::Size(898, 540);
			this->Controls->Add(this->btn_exit);
			this->Controls->Add(this->btn_login);
			this->Controls->Add(this->lbl_password);
			this->Controls->Add(this->lbl_username);
			this->Controls->Add(this->txt_contra);
			this->Controls->Add(this->txt_nombre);
			this->Controls->Add(this->label1);
			this->Font = (gcnew System::Drawing::Font(L"Segoe UI Symbol", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::None;
			this->Name = L"Form1";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"Form1";
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void btn_exit_Click(System::Object^ sender, System::EventArgs^ e) {
		Application::Exit();
	}
	private: System::Void btn_login_Click(System::Object^ sender, System::EventArgs^ e) {
		String^ sql = "select * from estudiantes where Nombre = '" + txt_nombre->Text + "' and Contra = '" + txt_contra->Text + "'";
		MySqlCommand^ cursor = gcnew MySqlCommand(sql, conn);

		MySqlDataReader^ dataReader;

		try {
			this->conn->Open();
			dataReader = cursor->ExecuteReader();
			if (dataReader->Read()) {

				// Crear una instancia del nuevo formulario
				GrupEstudi::Inicio^ inicio = gcnew GrupEstudi::Inicio();

				// Establecer el formulario padre del nuevo formulario como este formulario principal
				inicio->TopLevel = false;
				inicio->AutoScroll = true;
				inicio->Dock = DockStyle::Fill;

				// Agregar el formulario al panel contenedor del formulario principal
				this->Controls->Clear(); // Limpia cualquier control previo en el panel
				this->Controls->Add(inicio);

				// Mostrar el formulario
				inicio->Show();

			}
			else {
				MessageBox::Show("Usuario incorrecto");
			}
		}
		catch (Exception^ x) {
			MessageBox::Show(x->Message);
		}
		finally {
			conn->Close();
		}
	}

};
}
