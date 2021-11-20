#pragma once
#include "PortalEstudiantes.h"
#include "PortalTrabajadores.h"
#include "Cursos.h"
#include "Asignacion_EyC.h"
#include "DoublyLinkedList.h"
#include "Persona.h"
#include "Curso.h"

namespace Proyecto2MeganMorales1221120 {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Resumen de URL
	/// </summary>
	public ref class URL : public System::Windows::Forms::Form
	{
		DoublyLinkedList<Persona>* estudiantesPregrado= new DoublyLinkedList<Persona>;
		DoublyLinkedList<Persona>* estudiantesPostgrado = new DoublyLinkedList<Persona>;
		DoublyLinkedList<Persona>* trabajadorDocente = new DoublyLinkedList<Persona>;
		DoublyLinkedList<Persona>* trabajadorNoDocente = new DoublyLinkedList<Persona>;
		DoublyLinkedList<Curso>* listaCurso = new DoublyLinkedList<Curso>;
		DoublyLinkedList<Asignacion_EyC>* asignacionEyC = new DoublyLinkedList<Asignacion_EyC>;


	public:
		//Constructor sin parametros
		URL()
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
		~URL()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Label^ label1;
	protected:
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::Button^ button1;
	private: System::Windows::Forms::Button^ button2;
	private: System::Windows::Forms::Button^ button3;
	private: System::Windows::Forms::Label^ label4;



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
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->SuspendLayout();
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"MV Boli", 9.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->Location = System::Drawing::Point(49, 33);
			this->label1->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(154, 22);
			this->label1->TabIndex = 2;
			this->label1->Text = L"PERSONAL URL";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Font = (gcnew System::Drawing::Font(L"Papyrus", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label2->Location = System::Drawing::Point(35, 91);
			this->label2->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(106, 27);
			this->label2->TabIndex = 3;
			this->label2->Text = L"Estudiantes:";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Font = (gcnew System::Drawing::Font(L"Papyrus", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label3->Location = System::Drawing::Point(35, 139);
			this->label3->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(114, 27);
			this->label3->TabIndex = 4;
			this->label3->Text = L"Trabajadores";
			// 
			// button1
			// 
			this->button1->Location = System::Drawing::Point(172, 91);
			this->button1->Margin = System::Windows::Forms::Padding(4);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(59, 28);
			this->button1->TabIndex = 5;
			this->button1->Text = L"Ir";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &URL::button1_Click);
			// 
			// button2
			// 
			this->button2->Location = System::Drawing::Point(172, 137);
			this->button2->Margin = System::Windows::Forms::Padding(4);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(59, 28);
			this->button2->TabIndex = 6;
			this->button2->Text = L"Ir";
			this->button2->UseVisualStyleBackColor = true;
			this->button2->Click += gcnew System::EventHandler(this, &URL::button2_Click);
			// 
			// button3
			// 
			this->button3->Location = System::Drawing::Point(172, 183);
			this->button3->Margin = System::Windows::Forms::Padding(4);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(59, 28);
			this->button3->TabIndex = 8;
			this->button3->Text = L"Ir";
			this->button3->UseVisualStyleBackColor = true;
			this->button3->Click += gcnew System::EventHandler(this, &URL::button3_Click);
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Font = (gcnew System::Drawing::Font(L"Papyrus", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label4->Location = System::Drawing::Point(35, 185);
			this->label4->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(68, 27);
			this->label4->TabIndex = 7;
			this->label4->Text = L"Cursos";
			// 
			// URL
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::SystemColors::ButtonHighlight;
			this->ClientSize = System::Drawing::Size(285, 244);
			this->Controls->Add(this->button3);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label1);
			this->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->Name = L"URL";
			this->Text = L"URL";
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
		PortalEstudiantes^ Portal_Estudiantes = gcnew PortalEstudiantes(this->estudiantesPregrado,this->estudiantesPostgrado,this->trabajadorDocente,this->trabajadorNoDocente,this->listaCurso, this->asignacionEyC);
		this->Hide();
		Portal_Estudiantes->ShowDialog();
		this->Show();
	}
private: System::Void button2_Click(System::Object^ sender, System::EventArgs^ e) {
		PortalTrabajadores^ Portal_Trabajadores = gcnew PortalTrabajadores();
		this->Hide();
		Portal_Trabajadores->ShowDialog();
		this->Show();
		
		
}
private: System::Void button3_Click(System::Object^ sender, System::EventArgs^ e) {
		Cursos^ Portal_Cursos = gcnew Cursos();
		this->Hide();
		Portal_Cursos->ShowDialog();
		this->Show();
}
};
}
