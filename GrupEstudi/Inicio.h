#pragma once
#include "MevesSessions.h"
#include "CrearSessio.h"

using namespace std;

namespace GrupEstudi {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Resumen de Inicio
	/// </summary>
	public ref class Inicio : public System::Windows::Forms::Form
	{
	public:
		Inicio(void)
		{
			InitializeComponent();
			//
			//TODO: agregar código de constructor aquí
			//
		}

	protected:
		/// <summary>
		/// Limpiar los recursos que se estén usando.
		/// </summary>
		~Inicio()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Panel^ panel_lateral;
	protected:
	private: System::Windows::Forms::Button^ button1;
	private: System::Windows::Forms::Panel^ margen;
	private: System::Windows::Forms::Button^ button3;
	private: System::Windows::Forms::Panel^ panel2;
	private: System::Windows::Forms::Button^ button2;
	private: System::Windows::Forms::Panel^ panel1;
	private: System::Windows::Forms::Button^ button4;
	private: System::Windows::Forms::Panel^ display_panel;


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
			this->panel_lateral = (gcnew System::Windows::Forms::Panel());
			this->button4 = (gcnew System::Windows::Forms::Button());
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->panel2 = (gcnew System::Windows::Forms::Panel());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->panel1 = (gcnew System::Windows::Forms::Panel());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->margen = (gcnew System::Windows::Forms::Panel());
			this->display_panel = (gcnew System::Windows::Forms::Panel());
			this->panel_lateral->SuspendLayout();
			this->SuspendLayout();
			// 
			// panel_lateral
			// 
			this->panel_lateral->BackColor = System::Drawing::Color::DarkSlateBlue;
			this->panel_lateral->Controls->Add(this->button4);
			this->panel_lateral->Controls->Add(this->button3);
			this->panel_lateral->Controls->Add(this->panel2);
			this->panel_lateral->Controls->Add(this->button2);
			this->panel_lateral->Controls->Add(this->panel1);
			this->panel_lateral->Controls->Add(this->button1);
			this->panel_lateral->Controls->Add(this->margen);
			this->panel_lateral->Dock = System::Windows::Forms::DockStyle::Left;
			this->panel_lateral->Location = System::Drawing::Point(0, 0);
			this->panel_lateral->Name = L"panel_lateral";
			this->panel_lateral->Size = System::Drawing::Size(181, 540);
			this->panel_lateral->TabIndex = 0;
			// 
			// button4
			// 
			this->button4->BackColor = System::Drawing::Color::MediumPurple;
			this->button4->Dock = System::Windows::Forms::DockStyle::Bottom;
			this->button4->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button4->Location = System::Drawing::Point(0, 494);
			this->button4->Name = L"button4";
			this->button4->Size = System::Drawing::Size(181, 46);
			this->button4->TabIndex = 6;
			this->button4->Text = L"Sortir";
			this->button4->UseVisualStyleBackColor = false;
			this->button4->Click += gcnew System::EventHandler(this, &Inicio::button4_Click);
			// 
			// button3
			// 
			this->button3->BackColor = System::Drawing::Color::MediumPurple;
			this->button3->Dock = System::Windows::Forms::DockStyle::Top;
			this->button3->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button3->Location = System::Drawing::Point(0, 285);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(181, 46);
			this->button3->TabIndex = 5;
			this->button3->Text = L"Crear Sessió";
			this->button3->UseVisualStyleBackColor = false;
			this->button3->Click += gcnew System::EventHandler(this, &Inicio::button3_Click);
			// 
			// panel2
			// 
			this->panel2->Dock = System::Windows::Forms::DockStyle::Top;
			this->panel2->Location = System::Drawing::Point(0, 229);
			this->panel2->Name = L"panel2";
			this->panel2->Size = System::Drawing::Size(181, 56);
			this->panel2->TabIndex = 4;
			// 
			// button2
			// 
			this->button2->BackColor = System::Drawing::Color::MediumPurple;
			this->button2->Dock = System::Windows::Forms::DockStyle::Top;
			this->button2->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button2->Location = System::Drawing::Point(0, 183);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(181, 46);
			this->button2->TabIndex = 3;
			this->button2->Text = L"Les meves sessions";
			this->button2->UseVisualStyleBackColor = false;
			this->button2->Click += gcnew System::EventHandler(this, &Inicio::button2_Click);
			// 
			// panel1
			// 
			this->panel1->Dock = System::Windows::Forms::DockStyle::Top;
			this->panel1->Location = System::Drawing::Point(0, 127);
			this->panel1->Name = L"panel1";
			this->panel1->Size = System::Drawing::Size(181, 56);
			this->panel1->TabIndex = 2;
			// 
			// button1
			// 
			this->button1->BackColor = System::Drawing::Color::MediumPurple;
			this->button1->Dock = System::Windows::Forms::DockStyle::Top;
			this->button1->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button1->Location = System::Drawing::Point(0, 81);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(181, 46);
			this->button1->TabIndex = 1;
			this->button1->Text = L"Buscar Sessions";
			this->button1->UseVisualStyleBackColor = false;
			// 
			// margen
			// 
			this->margen->Dock = System::Windows::Forms::DockStyle::Top;
			this->margen->Location = System::Drawing::Point(0, 0);
			this->margen->Name = L"margen";
			this->margen->Size = System::Drawing::Size(181, 81);
			this->margen->TabIndex = 0;
			// 
			// display_panel
			// 
			this->display_panel->Dock = System::Windows::Forms::DockStyle::Fill;
			this->display_panel->Location = System::Drawing::Point(181, 0);
			this->display_panel->Name = L"display_panel";
			this->display_panel->Size = System::Drawing::Size(717, 540);
			this->display_panel->TabIndex = 1;
			// 
			// Inicio
			// 
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::None;
			this->ClientSize = System::Drawing::Size(898, 540);
			this->Controls->Add(this->display_panel);
			this->Controls->Add(this->panel_lateral);
			this->Font = (gcnew System::Drawing::Font(L"Segoe UI Symbol", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::None;
			this->Name = L"Inicio";
			this->Text = L"Inicio";
			this->panel_lateral->ResumeLayout(false);
			this->ResumeLayout(false);

		}
#pragma endregion

		template<class T>
		void OpenPanel(T FormSon)
		{
			//Comprovamos si hay elementos dentro del panel y los eliminamos en caso afirmativo
			if (this->display_panel->Controls->Count > 0) {
				this->display_panel->Controls->RemoveAt(0);
			}

			FormSon->TopLevel = false;
			FormSon->Dock = DockStyle::Fill;
			this->display_panel->Controls->Add(FormSon);
			this->display_panel->Tag = FormSon;
			FormSon->Show();
		}

	private: System::Void button4_Click(System::Object^ sender, System::EventArgs^ e) {
		Application::Exit();
	}
	private: System::Void button2_Click(System::Object^ sender, System::EventArgs^ e) {
		this->OpenPanel(gcnew GrupEstudi::MevesSessions);
	}
	private: System::Void button3_Click(System::Object^ sender, System::EventArgs^ e) {
		this->OpenPanel(gcnew GrupEstudi::CrearSessio);
	}
};
}
