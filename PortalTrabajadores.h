#pragma once
#include "ListaDoble.h"
#include "Imprimir.h"
#include <iostream>
#include <string>
#include "NodoDoble.h"

#include <ctime>
#include <stdlib.h>
#include <time.h>
#include <iostream>
#include <conio.h>
#include <fstream>
#include <sstream>

namespace Proyecto2MeganMorales1221120 {

	using namespace std;
	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Resumen de PortalTrabajadores
	/// </summary>
	public ref class PortalTrabajadores : public System::Windows::Forms::Form
	{
	public:
		ListaDoble^ MiListaDoble = gcnew ListaDoble();
		ListaDoble^ MiListaDoble2 = gcnew ListaDoble();
		Imprimir^ Print = gcnew Imprimir();
	

	private: System::Windows::Forms::GroupBox^ groupBox11;
	private: System::Windows::Forms::Button^ btnBuscarDocente;

	private: System::Windows::Forms::TextBox^ txtDPIBuscarDocente;

	private: System::Windows::Forms::Label^ label32;
	private: System::Windows::Forms::Label^ lblMostrarNoDocentes;
	private: System::Windows::Forms::Label^ label35;
	private: System::Windows::Forms::Label^ label36;
	private: System::Windows::Forms::Label^ lblMostrarTodosLosDocentes;
	private: System::Windows::Forms::GroupBox^ groupBox12;
	private: System::Windows::Forms::TextBox^ txtDpieliminardocente;

	private: System::Windows::Forms::Label^ label37;
	private: System::Windows::Forms::Button^ btnEliminarDocente;
	private: System::Windows::Forms::Button^ btnpromediotodo;
	private: System::Windows::Forms::Button^ btnNoDocentes;
	private: System::Windows::Forms::TextBox^ txtInsertarIndice;
	private: System::Windows::Forms::Label^ label38;
	private: System::Windows::Forms::TextBox^ txtInsertarDocenteen;
	private: System::Windows::Forms::Button^ btnexportarNoDocente;
	private: System::Windows::Forms::Button^ button1;
	private: System::Windows::Forms::GroupBox^ groupBox4;










	private: System::Windows::Forms::Button^ button10;

	private: System::Windows::Forms::Label^ label43;
	private: System::Windows::Forms::TextBox^ txtCursoBuscar;
	private: System::Windows::Forms::Label^ lblNumDocentesCurso;
	private: System::Windows::Forms::Label^ labelNumDocentes;
	private: System::Windows::Forms::Button^ btnImportar;
	private: System::Windows::Forms::TextBox^ txtapellido2modno;

	private: System::Windows::Forms::Label^ label17;
	private: System::Windows::Forms::TextBox^ txtCargoModNo;

	private: System::Windows::Forms::Label^ label18;
	private: System::Windows::Forms::GroupBox^ groupBox5;


	private: System::Windows::Forms::TextBox^ txtApellido2ModDocente;

	private: System::Windows::Forms::Label^ label11;
	private: System::Windows::Forms::Label^ label15;
	private: System::Windows::Forms::TextBox^ txtDepartamentoModDocente;

	private: System::Windows::Forms::Label^ label16;
	private: System::Windows::Forms::Button^ button2;
	private: System::Windows::Forms::Label^ label24;
	private: System::Windows::Forms::TextBox^ txtFechaModDocente;

	private: System::Windows::Forms::Label^ label33;
	private: System::Windows::Forms::TextBox^ txtSalarioModDocente;

	private: System::Windows::Forms::TextBox^ txtDPIModDocenteNuevo;

	private: System::Windows::Forms::Label^ label34;
	private: System::Windows::Forms::Label^ label40;
	private: System::Windows::Forms::TextBox^ txtApellido1ModDocente;

	private: System::Windows::Forms::TextBox^ txtDPIModDocente;

	private: System::Windows::Forms::Label^ label41;
	private: System::Windows::Forms::TextBox^ txtNombreModDocente;
	private: System::Windows::Forms::GroupBox^ groupBox10;

	private: System::Windows::Forms::Button^ button3;
	private: System::Windows::Forms::Label^ label44;
	private: System::Windows::Forms::TextBox^ txtDPIAsignar;
	private: System::Windows::Forms::TextBox^ txtCursoAsignar;
	private: System::Windows::Forms::Label^ label42;
	private: System::Windows::Forms::Button^ button4;










	private: System::Windows::Forms::Label^ label39;


	public:

	public:



		   
		PortalTrabajadores(void)
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
		~PortalTrabajadores()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::GroupBox^ groupBox1;
	protected:
	private: System::Windows::Forms::GroupBox^ groupBox2;



	private: System::Windows::Forms::Label^ label14;
	private: System::Windows::Forms::TextBox^ txtSalarioDocente;

	private: System::Windows::Forms::Label^ label13;
	private: System::Windows::Forms::TextBox^ txtDpiDocente;

	private: System::Windows::Forms::Label^ label12;
	private: System::Windows::Forms::TextBox^ txtAñoDocente;

	private: System::Windows::Forms::Label^ label10;
	private: System::Windows::Forms::TextBox^ txtApellidoDocente;

	private: System::Windows::Forms::Label^ label9;
	private: System::Windows::Forms::TextBox^ txtNombreDocente;



































	private: System::Windows::Forms::GroupBox^ groupBox3;
	private: System::Windows::Forms::Label^ label6;

	private: System::Windows::Forms::Label^ label1;

	private: System::Windows::Forms::Label^ label2;

	private: System::Windows::Forms::Label^ label3;

	private: System::Windows::Forms::Label^ label4;

	private: System::Windows::Forms::Label^ label5;
	private: System::Windows::Forms::TextBox^ txtNombreNoDocente;
	private: System::Windows::Forms::Button^ btnAgregarNoDocente;



















	private: System::Windows::Forms::GroupBox^ groupBox6;

	private: System::Windows::Forms::Label^ label8;
	private: System::Windows::Forms::Button^ button6;
	private: System::Windows::Forms::Label^ label19;
private: System::Windows::Forms::TextBox^ txtFechaModNo;

	private: System::Windows::Forms::Label^ label20;
private: System::Windows::Forms::TextBox^ txtSalarioModNo;
private: System::Windows::Forms::TextBox^ txtDIPModNo2;




	private: System::Windows::Forms::Label^ label21;
	private: System::Windows::Forms::Label^ label22;
private: System::Windows::Forms::TextBox^ txtapellido1modno;

private: System::Windows::Forms::TextBox^ txtDPImodNO;

	private: System::Windows::Forms::Label^ label23;
private: System::Windows::Forms::TextBox^ txtnombremodno;
private: System::Windows::Forms::Label^ Departamento;
private: System::Windows::Forms::TextBox^ txtDepartamentoModNo;



private: System::Windows::Forms::GroupBox^ groupBox7;
private: System::Windows::Forms::TextBox^ txtDPIEliminarNoDocente;

private: System::Windows::Forms::Label^ label28;
private: System::Windows::Forms::Button^ btnEliminar;
private: System::Windows::Forms::GroupBox^ groupBox9;
private: System::Windows::Forms::Button^ btnpromedioDocentes;

private: System::Windows::Forms::GroupBox^ groupBox8;
private: System::Windows::Forms::TextBox^ txtDPINoDocenteBuscar;

private: System::Windows::Forms::Label^ label25;
private: System::Windows::Forms::Button^ btnBuscarNoDocente;


private: System::Windows::Forms::DataGridView^ dataGridView1;





private: System::Windows::Forms::TextBox^ txtSegundoApellidoDocente;

private: System::Windows::Forms::Label^ label26;
private: System::Windows::Forms::TextBox^ txtAsiganturaDocente;
private: System::Windows::Forms::Label^ label29;
private: System::Windows::Forms::TextBox^ txtDepartamentoDocente;
private: System::Windows::Forms::Label^ label27;
private: System::Windows::Forms::Button^ btnAgregarDocente;
private: System::Windows::Forms::Label^ label30;
private: System::Windows::Forms::TextBox^ txtCargoNoDocente;
private: System::Windows::Forms::TextBox^ txtDepartamentoNoDocente;
private: System::Windows::Forms::TextBox^ txtFechaDeIngresoNoDocente;
private: System::Windows::Forms::TextBox^ txtSalarioNoDocente;
private: System::Windows::Forms::Label^ label31;
private: System::Windows::Forms::TextBox^ txtDPINoDocente;
private: System::Windows::Forms::TextBox^ txtApellido2NoDocente;
private: System::Windows::Forms::TextBox^ txtApellido1NoDocente;




















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
			this->groupBox1 = (gcnew System::Windows::Forms::GroupBox());
			this->groupBox10 = (gcnew System::Windows::Forms::GroupBox());
			this->button4 = (gcnew System::Windows::Forms::Button());
			this->txtCursoAsignar = (gcnew System::Windows::Forms::TextBox());
			this->label42 = (gcnew System::Windows::Forms::Label());
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->label44 = (gcnew System::Windows::Forms::Label());
			this->txtDPIAsignar = (gcnew System::Windows::Forms::TextBox());
			this->groupBox5 = (gcnew System::Windows::Forms::GroupBox());
			this->txtApellido2ModDocente = (gcnew System::Windows::Forms::TextBox());
			this->label11 = (gcnew System::Windows::Forms::Label());
			this->label15 = (gcnew System::Windows::Forms::Label());
			this->txtDepartamentoModDocente = (gcnew System::Windows::Forms::TextBox());
			this->label16 = (gcnew System::Windows::Forms::Label());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->label24 = (gcnew System::Windows::Forms::Label());
			this->txtFechaModDocente = (gcnew System::Windows::Forms::TextBox());
			this->label33 = (gcnew System::Windows::Forms::Label());
			this->txtSalarioModDocente = (gcnew System::Windows::Forms::TextBox());
			this->txtDPIModDocenteNuevo = (gcnew System::Windows::Forms::TextBox());
			this->label34 = (gcnew System::Windows::Forms::Label());
			this->label40 = (gcnew System::Windows::Forms::Label());
			this->txtApellido1ModDocente = (gcnew System::Windows::Forms::TextBox());
			this->txtDPIModDocente = (gcnew System::Windows::Forms::TextBox());
			this->label41 = (gcnew System::Windows::Forms::Label());
			this->txtNombreModDocente = (gcnew System::Windows::Forms::TextBox());
			this->btnImportar = (gcnew System::Windows::Forms::Button());
			this->groupBox4 = (gcnew System::Windows::Forms::GroupBox());
			this->labelNumDocentes = (gcnew System::Windows::Forms::Label());
			this->button10 = (gcnew System::Windows::Forms::Button());
			this->label43 = (gcnew System::Windows::Forms::Label());
			this->txtCursoBuscar = (gcnew System::Windows::Forms::TextBox());
			this->lblNumDocentesCurso = (gcnew System::Windows::Forms::Label());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->btnexportarNoDocente = (gcnew System::Windows::Forms::Button());
			this->groupBox12 = (gcnew System::Windows::Forms::GroupBox());
			this->txtDpieliminardocente = (gcnew System::Windows::Forms::TextBox());
			this->label37 = (gcnew System::Windows::Forms::Label());
			this->btnEliminarDocente = (gcnew System::Windows::Forms::Button());
			this->groupBox9 = (gcnew System::Windows::Forms::GroupBox());
			this->btnpromediotodo = (gcnew System::Windows::Forms::Button());
			this->btnNoDocentes = (gcnew System::Windows::Forms::Button());
			this->btnpromedioDocentes = (gcnew System::Windows::Forms::Button());
			this->groupBox11 = (gcnew System::Windows::Forms::GroupBox());
			this->btnBuscarDocente = (gcnew System::Windows::Forms::Button());
			this->txtDPIBuscarDocente = (gcnew System::Windows::Forms::TextBox());
			this->label32 = (gcnew System::Windows::Forms::Label());
			this->groupBox8 = (gcnew System::Windows::Forms::GroupBox());
			this->txtDPINoDocenteBuscar = (gcnew System::Windows::Forms::TextBox());
			this->label25 = (gcnew System::Windows::Forms::Label());
			this->btnBuscarNoDocente = (gcnew System::Windows::Forms::Button());
			this->groupBox6 = (gcnew System::Windows::Forms::GroupBox());
			this->txtCargoModNo = (gcnew System::Windows::Forms::TextBox());
			this->label18 = (gcnew System::Windows::Forms::Label());
			this->txtapellido2modno = (gcnew System::Windows::Forms::TextBox());
			this->label17 = (gcnew System::Windows::Forms::Label());
			this->Departamento = (gcnew System::Windows::Forms::Label());
			this->txtDepartamentoModNo = (gcnew System::Windows::Forms::TextBox());
			this->label8 = (gcnew System::Windows::Forms::Label());
			this->button6 = (gcnew System::Windows::Forms::Button());
			this->label19 = (gcnew System::Windows::Forms::Label());
			this->txtFechaModNo = (gcnew System::Windows::Forms::TextBox());
			this->label20 = (gcnew System::Windows::Forms::Label());
			this->txtSalarioModNo = (gcnew System::Windows::Forms::TextBox());
			this->txtDIPModNo2 = (gcnew System::Windows::Forms::TextBox());
			this->label21 = (gcnew System::Windows::Forms::Label());
			this->label22 = (gcnew System::Windows::Forms::Label());
			this->txtapellido1modno = (gcnew System::Windows::Forms::TextBox());
			this->txtDPImodNO = (gcnew System::Windows::Forms::TextBox());
			this->label23 = (gcnew System::Windows::Forms::Label());
			this->txtnombremodno = (gcnew System::Windows::Forms::TextBox());
			this->groupBox7 = (gcnew System::Windows::Forms::GroupBox());
			this->txtDPIEliminarNoDocente = (gcnew System::Windows::Forms::TextBox());
			this->label28 = (gcnew System::Windows::Forms::Label());
			this->btnEliminar = (gcnew System::Windows::Forms::Button());
			this->groupBox3 = (gcnew System::Windows::Forms::GroupBox());
			this->txtInsertarIndice = (gcnew System::Windows::Forms::TextBox());
			this->label38 = (gcnew System::Windows::Forms::Label());
			this->txtCargoNoDocente = (gcnew System::Windows::Forms::TextBox());
			this->txtDepartamentoNoDocente = (gcnew System::Windows::Forms::TextBox());
			this->txtFechaDeIngresoNoDocente = (gcnew System::Windows::Forms::TextBox());
			this->txtSalarioNoDocente = (gcnew System::Windows::Forms::TextBox());
			this->label31 = (gcnew System::Windows::Forms::Label());
			this->txtDPINoDocente = (gcnew System::Windows::Forms::TextBox());
			this->txtApellido2NoDocente = (gcnew System::Windows::Forms::TextBox());
			this->txtApellido1NoDocente = (gcnew System::Windows::Forms::TextBox());
			this->label30 = (gcnew System::Windows::Forms::Label());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->txtNombreNoDocente = (gcnew System::Windows::Forms::TextBox());
			this->btnAgregarNoDocente = (gcnew System::Windows::Forms::Button());
			this->groupBox2 = (gcnew System::Windows::Forms::GroupBox());
			this->txtInsertarDocenteen = (gcnew System::Windows::Forms::TextBox());
			this->label39 = (gcnew System::Windows::Forms::Label());
			this->btnAgregarDocente = (gcnew System::Windows::Forms::Button());
			this->txtAsiganturaDocente = (gcnew System::Windows::Forms::TextBox());
			this->label29 = (gcnew System::Windows::Forms::Label());
			this->txtDepartamentoDocente = (gcnew System::Windows::Forms::TextBox());
			this->label27 = (gcnew System::Windows::Forms::Label());
			this->txtSegundoApellidoDocente = (gcnew System::Windows::Forms::TextBox());
			this->label26 = (gcnew System::Windows::Forms::Label());
			this->label14 = (gcnew System::Windows::Forms::Label());
			this->txtSalarioDocente = (gcnew System::Windows::Forms::TextBox());
			this->label13 = (gcnew System::Windows::Forms::Label());
			this->txtDpiDocente = (gcnew System::Windows::Forms::TextBox());
			this->label12 = (gcnew System::Windows::Forms::Label());
			this->txtAñoDocente = (gcnew System::Windows::Forms::TextBox());
			this->label10 = (gcnew System::Windows::Forms::Label());
			this->txtApellidoDocente = (gcnew System::Windows::Forms::TextBox());
			this->label9 = (gcnew System::Windows::Forms::Label());
			this->txtNombreDocente = (gcnew System::Windows::Forms::TextBox());
			this->dataGridView1 = (gcnew System::Windows::Forms::DataGridView());
			this->lblMostrarNoDocentes = (gcnew System::Windows::Forms::Label());
			this->label35 = (gcnew System::Windows::Forms::Label());
			this->label36 = (gcnew System::Windows::Forms::Label());
			this->lblMostrarTodosLosDocentes = (gcnew System::Windows::Forms::Label());
			this->groupBox1->SuspendLayout();
			this->groupBox10->SuspendLayout();
			this->groupBox5->SuspendLayout();
			this->groupBox4->SuspendLayout();
			this->groupBox12->SuspendLayout();
			this->groupBox9->SuspendLayout();
			this->groupBox11->SuspendLayout();
			this->groupBox8->SuspendLayout();
			this->groupBox6->SuspendLayout();
			this->groupBox7->SuspendLayout();
			this->groupBox3->SuspendLayout();
			this->groupBox2->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->BeginInit();
			this->SuspendLayout();
			// 
			// groupBox1
			// 
			this->groupBox1->Controls->Add(this->groupBox10);
			this->groupBox1->Controls->Add(this->groupBox5);
			this->groupBox1->Controls->Add(this->btnImportar);
			this->groupBox1->Controls->Add(this->groupBox4);
			this->groupBox1->Controls->Add(this->button1);
			this->groupBox1->Controls->Add(this->btnexportarNoDocente);
			this->groupBox1->Controls->Add(this->groupBox12);
			this->groupBox1->Controls->Add(this->groupBox9);
			this->groupBox1->Controls->Add(this->groupBox11);
			this->groupBox1->Controls->Add(this->groupBox8);
			this->groupBox1->Controls->Add(this->groupBox6);
			this->groupBox1->Controls->Add(this->groupBox7);
			this->groupBox1->Controls->Add(this->groupBox3);
			this->groupBox1->Controls->Add(this->groupBox2);
			this->groupBox1->Location = System::Drawing::Point(9, 10);
			this->groupBox1->Margin = System::Windows::Forms::Padding(2);
			this->groupBox1->Name = L"groupBox1";
			this->groupBox1->Padding = System::Windows::Forms::Padding(2);
			this->groupBox1->Size = System::Drawing::Size(944, 719);
			this->groupBox1->TabIndex = 0;
			this->groupBox1->TabStop = false;
			this->groupBox1->Text = L"Gestionar trabajadores";
			// 
			// groupBox10
			// 
			this->groupBox10->Controls->Add(this->button4);
			this->groupBox10->Controls->Add(this->txtCursoAsignar);
			this->groupBox10->Controls->Add(this->label42);
			this->groupBox10->Controls->Add(this->button3);
			this->groupBox10->Controls->Add(this->label44);
			this->groupBox10->Controls->Add(this->txtDPIAsignar);
			this->groupBox10->Location = System::Drawing::Point(663, 396);
			this->groupBox10->Margin = System::Windows::Forms::Padding(2);
			this->groupBox10->Name = L"groupBox10";
			this->groupBox10->Padding = System::Windows::Forms::Padding(2);
			this->groupBox10->Size = System::Drawing::Size(214, 140);
			this->groupBox10->TabIndex = 70;
			this->groupBox10->TabStop = false;
			this->groupBox10->Text = L"Modificar Cursos";
			// 
			// button4
			// 
			this->button4->Font = (gcnew System::Drawing::Font(L"Papyrus", 7.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button4->Location = System::Drawing::Point(115, 99);
			this->button4->Margin = System::Windows::Forms::Padding(2);
			this->button4->Name = L"button4";
			this->button4->Size = System::Drawing::Size(86, 26);
			this->button4->TabIndex = 51;
			this->button4->Text = L"Eliminar";
			this->button4->UseVisualStyleBackColor = true;
			this->button4->Click += gcnew System::EventHandler(this, &PortalTrabajadores::button4_Click);
			// 
			// txtCursoAsignar
			// 
			this->txtCursoAsignar->Location = System::Drawing::Point(60, 60);
			this->txtCursoAsignar->Margin = System::Windows::Forms::Padding(2);
			this->txtCursoAsignar->Name = L"txtCursoAsignar";
			this->txtCursoAsignar->Size = System::Drawing::Size(76, 20);
			this->txtCursoAsignar->TabIndex = 50;
			// 
			// label42
			// 
			this->label42->AutoSize = true;
			this->label42->Font = (gcnew System::Drawing::Font(L"Papyrus", 7.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label42->Location = System::Drawing::Point(8, 62);
			this->label42->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label42->Name = L"label42";
			this->label42->Size = System::Drawing::Size(41, 18);
			this->label42->TabIndex = 49;
			this->label42->Text = L"Curso";
			// 
			// button3
			// 
			this->button3->Font = (gcnew System::Drawing::Font(L"Papyrus", 7.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button3->Location = System::Drawing::Point(11, 99);
			this->button3->Margin = System::Windows::Forms::Padding(2);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(86, 26);
			this->button3->TabIndex = 46;
			this->button3->Text = L"Asignar";
			this->button3->UseVisualStyleBackColor = true;
			this->button3->Click += gcnew System::EventHandler(this, &PortalTrabajadores::button3_Click);
			// 
			// label44
			// 
			this->label44->AutoSize = true;
			this->label44->Font = (gcnew System::Drawing::Font(L"Papyrus", 7.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label44->Location = System::Drawing::Point(8, 30);
			this->label44->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label44->Name = L"label44";
			this->label44->Size = System::Drawing::Size(29, 18);
			this->label44->TabIndex = 47;
			this->label44->Text = L"DPI";
			// 
			// txtDPIAsignar
			// 
			this->txtDPIAsignar->Location = System::Drawing::Point(60, 30);
			this->txtDPIAsignar->Margin = System::Windows::Forms::Padding(2);
			this->txtDPIAsignar->Name = L"txtDPIAsignar";
			this->txtDPIAsignar->Size = System::Drawing::Size(76, 20);
			this->txtDPIAsignar->TabIndex = 48;
			// 
			// groupBox5
			// 
			this->groupBox5->Controls->Add(this->txtApellido2ModDocente);
			this->groupBox5->Controls->Add(this->label11);
			this->groupBox5->Controls->Add(this->label15);
			this->groupBox5->Controls->Add(this->txtDepartamentoModDocente);
			this->groupBox5->Controls->Add(this->label16);
			this->groupBox5->Controls->Add(this->button2);
			this->groupBox5->Controls->Add(this->label24);
			this->groupBox5->Controls->Add(this->txtFechaModDocente);
			this->groupBox5->Controls->Add(this->label33);
			this->groupBox5->Controls->Add(this->txtSalarioModDocente);
			this->groupBox5->Controls->Add(this->txtDPIModDocenteNuevo);
			this->groupBox5->Controls->Add(this->label34);
			this->groupBox5->Controls->Add(this->label40);
			this->groupBox5->Controls->Add(this->txtApellido1ModDocente);
			this->groupBox5->Controls->Add(this->txtDPIModDocente);
			this->groupBox5->Controls->Add(this->label41);
			this->groupBox5->Controls->Add(this->txtNombreModDocente);
			this->groupBox5->Location = System::Drawing::Point(429, 35);
			this->groupBox5->Margin = System::Windows::Forms::Padding(2);
			this->groupBox5->Name = L"groupBox5";
			this->groupBox5->Padding = System::Windows::Forms::Padding(2);
			this->groupBox5->Size = System::Drawing::Size(214, 291);
			this->groupBox5->TabIndex = 72;
			this->groupBox5->TabStop = false;
			this->groupBox5->Text = L"Modificar trabajador docente";
			// 
			// txtApellido2ModDocente
			// 
			this->txtApellido2ModDocente->Location = System::Drawing::Point(127, 103);
			this->txtApellido2ModDocente->Margin = System::Windows::Forms::Padding(2);
			this->txtApellido2ModDocente->Name = L"txtApellido2ModDocente";
			this->txtApellido2ModDocente->Size = System::Drawing::Size(76, 20);
			this->txtApellido2ModDocente->TabIndex = 69;
			// 
			// label11
			// 
			this->label11->AutoSize = true;
			this->label11->Font = (gcnew System::Drawing::Font(L"Papyrus", 7.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label11->Location = System::Drawing::Point(8, 105);
			this->label11->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label11->Name = L"label11";
			this->label11->Size = System::Drawing::Size(70, 18);
			this->label11->TabIndex = 68;
			this->label11->Text = L"Apellidos 2:";
			// 
			// label15
			// 
			this->label15->AutoSize = true;
			this->label15->Font = (gcnew System::Drawing::Font(L"Papyrus", 7.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label15->Location = System::Drawing::Point(4, 210);
			this->label15->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label15->Name = L"label15";
			this->label15->Size = System::Drawing::Size(82, 18);
			this->label15->TabIndex = 34;
			this->label15->Text = L"Departamento";
			// 
			// txtDepartamentoModDocente
			// 
			this->txtDepartamentoModDocente->Location = System::Drawing::Point(127, 210);
			this->txtDepartamentoModDocente->Margin = System::Windows::Forms::Padding(2);
			this->txtDepartamentoModDocente->Name = L"txtDepartamentoModDocente";
			this->txtDepartamentoModDocente->Size = System::Drawing::Size(76, 20);
			this->txtDepartamentoModDocente->TabIndex = 33;
			// 
			// label16
			// 
			this->label16->AutoSize = true;
			this->label16->Font = (gcnew System::Drawing::Font(L"Papyrus", 7.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label16->Location = System::Drawing::Point(4, 183);
			this->label16->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label16->Name = L"label16";
			this->label16->Size = System::Drawing::Size(94, 18);
			this->label16->TabIndex = 31;
			this->label16->Text = L"Fecha de ingreso:";
			// 
			// button2
			// 
			this->button2->Font = (gcnew System::Drawing::Font(L"Papyrus", 7.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button2->Location = System::Drawing::Point(67, 249);
			this->button2->Margin = System::Windows::Forms::Padding(2);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(69, 26);
			this->button2->TabIndex = 60;
			this->button2->Text = L"Modificar";
			this->button2->UseVisualStyleBackColor = true;
			this->button2->Click += gcnew System::EventHandler(this, &PortalTrabajadores::button2_Click);
			// 
			// label24
			// 
			this->label24->AutoSize = true;
			this->label24->Font = (gcnew System::Drawing::Font(L"Papyrus", 7.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label24->Location = System::Drawing::Point(8, 157);
			this->label24->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label24->Name = L"label24";
			this->label24->Size = System::Drawing::Size(50, 18);
			this->label24->TabIndex = 32;
			this->label24->Text = L"Salario: ";
			// 
			// txtFechaModDocente
			// 
			this->txtFechaModDocente->Location = System::Drawing::Point(127, 184);
			this->txtFechaModDocente->Margin = System::Windows::Forms::Padding(2);
			this->txtFechaModDocente->Name = L"txtFechaModDocente";
			this->txtFechaModDocente->Size = System::Drawing::Size(76, 20);
			this->txtFechaModDocente->TabIndex = 31;
			// 
			// label33
			// 
			this->label33->AutoSize = true;
			this->label33->Font = (gcnew System::Drawing::Font(L"Papyrus", 7.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label33->Location = System::Drawing::Point(8, 128);
			this->label33->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label33->Name = L"label33";
			this->label33->Size = System::Drawing::Size(31, 18);
			this->label33->TabIndex = 67;
			this->label33->Text = L"Dpi:";
			// 
			// txtSalarioModDocente
			// 
			this->txtSalarioModDocente->Location = System::Drawing::Point(127, 157);
			this->txtSalarioModDocente->Margin = System::Windows::Forms::Padding(2);
			this->txtSalarioModDocente->Name = L"txtSalarioModDocente";
			this->txtSalarioModDocente->Size = System::Drawing::Size(76, 20);
			this->txtSalarioModDocente->TabIndex = 66;
			// 
			// txtDPIModDocenteNuevo
			// 
			this->txtDPIModDocenteNuevo->Location = System::Drawing::Point(127, 128);
			this->txtDPIModDocenteNuevo->Margin = System::Windows::Forms::Padding(2);
			this->txtDPIModDocenteNuevo->Name = L"txtDPIModDocenteNuevo";
			this->txtDPIModDocenteNuevo->Size = System::Drawing::Size(76, 20);
			this->txtDPIModDocenteNuevo->TabIndex = 64;
			// 
			// label34
			// 
			this->label34->AutoSize = true;
			this->label34->Font = (gcnew System::Drawing::Font(L"Papyrus", 7.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label34->Location = System::Drawing::Point(8, 81);
			this->label34->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label34->Name = L"label34";
			this->label34->Size = System::Drawing::Size(68, 18);
			this->label34->TabIndex = 63;
			this->label34->Text = L"Apellidos 1";
			// 
			// label40
			// 
			this->label40->AutoSize = true;
			this->label40->Font = (gcnew System::Drawing::Font(L"Papyrus", 7.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label40->Location = System::Drawing::Point(8, 30);
			this->label40->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label40->Name = L"label40";
			this->label40->Size = System::Drawing::Size(29, 18);
			this->label40->TabIndex = 47;
			this->label40->Text = L"DPI";
			// 
			// txtApellido1ModDocente
			// 
			this->txtApellido1ModDocente->Location = System::Drawing::Point(127, 79);
			this->txtApellido1ModDocente->Margin = System::Windows::Forms::Padding(2);
			this->txtApellido1ModDocente->Name = L"txtApellido1ModDocente";
			this->txtApellido1ModDocente->Size = System::Drawing::Size(76, 20);
			this->txtApellido1ModDocente->TabIndex = 62;
			// 
			// txtDPIModDocente
			// 
			this->txtDPIModDocente->Location = System::Drawing::Point(41, 28);
			this->txtDPIModDocente->Margin = System::Windows::Forms::Padding(2);
			this->txtDPIModDocente->Name = L"txtDPIModDocente";
			this->txtDPIModDocente->Size = System::Drawing::Size(76, 20);
			this->txtDPIModDocente->TabIndex = 48;
			// 
			// label41
			// 
			this->label41->AutoSize = true;
			this->label41->Font = (gcnew System::Drawing::Font(L"Papyrus", 7.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label41->Location = System::Drawing::Point(8, 59);
			this->label41->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label41->Name = L"label41";
			this->label41->Size = System::Drawing::Size(53, 18);
			this->label41->TabIndex = 61;
			this->label41->Text = L"Nombre:";
			// 
			// txtNombreModDocente
			// 
			this->txtNombreModDocente->Location = System::Drawing::Point(127, 57);
			this->txtNombreModDocente->Margin = System::Windows::Forms::Padding(2);
			this->txtNombreModDocente->Name = L"txtNombreModDocente";
			this->txtNombreModDocente->Size = System::Drawing::Size(76, 20);
			this->txtNombreModDocente->TabIndex = 60;
			// 
			// btnImportar
			// 
			this->btnImportar->Location = System::Drawing::Point(805, 582);
			this->btnImportar->Name = L"btnImportar";
			this->btnImportar->Size = System::Drawing::Size(95, 51);
			this->btnImportar->TabIndex = 73;
			this->btnImportar->Text = L"Importar";
			this->btnImportar->UseVisualStyleBackColor = true;
			this->btnImportar->Click += gcnew System::EventHandler(this, &PortalTrabajadores::btnImportar_Click);
			// 
			// groupBox4
			// 
			this->groupBox4->Controls->Add(this->labelNumDocentes);
			this->groupBox4->Controls->Add(this->button10);
			this->groupBox4->Controls->Add(this->label43);
			this->groupBox4->Controls->Add(this->txtCursoBuscar);
			this->groupBox4->Controls->Add(this->lblNumDocentesCurso);
			this->groupBox4->Location = System::Drawing::Point(663, 240);
			this->groupBox4->Margin = System::Windows::Forms::Padding(2);
			this->groupBox4->Name = L"groupBox4";
			this->groupBox4->Padding = System::Windows::Forms::Padding(2);
			this->groupBox4->Size = System::Drawing::Size(214, 140);
			this->groupBox4->TabIndex = 69;
			this->groupBox4->TabStop = false;
			this->groupBox4->Text = L"Docentes que imparten curso";
			// 
			// labelNumDocentes
			// 
			this->labelNumDocentes->AutoSize = true;
			this->labelNumDocentes->Font = (gcnew System::Drawing::Font(L"Perpetua", 14.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->labelNumDocentes->Location = System::Drawing::Point(93, 90);
			this->labelNumDocentes->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->labelNumDocentes->Name = L"labelNumDocentes";
			this->labelNumDocentes->RightToLeft = System::Windows::Forms::RightToLeft::Yes;
			this->labelNumDocentes->Size = System::Drawing::Size(0, 22);
			this->labelNumDocentes->TabIndex = 62;
			// 
			// button10
			// 
			this->button10->Font = (gcnew System::Drawing::Font(L"Papyrus", 7.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button10->Location = System::Drawing::Point(149, 27);
			this->button10->Margin = System::Windows::Forms::Padding(2);
			this->button10->Name = L"button10";
			this->button10->Size = System::Drawing::Size(39, 26);
			this->button10->TabIndex = 46;
			this->button10->Text = L"Ir";
			this->button10->UseVisualStyleBackColor = true;
			this->button10->Click += gcnew System::EventHandler(this, &PortalTrabajadores::button10_Click_1);
			// 
			// label43
			// 
			this->label43->AutoSize = true;
			this->label43->Font = (gcnew System::Drawing::Font(L"Papyrus", 7.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label43->Location = System::Drawing::Point(8, 30);
			this->label43->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label43->Name = L"label43";
			this->label43->Size = System::Drawing::Size(41, 18);
			this->label43->TabIndex = 47;
			this->label43->Text = L"Curso";
			// 
			// txtCursoBuscar
			// 
			this->txtCursoBuscar->Location = System::Drawing::Point(60, 30);
			this->txtCursoBuscar->Margin = System::Windows::Forms::Padding(2);
			this->txtCursoBuscar->Name = L"txtCursoBuscar";
			this->txtCursoBuscar->Size = System::Drawing::Size(76, 20);
			this->txtCursoBuscar->TabIndex = 48;
			// 
			// lblNumDocentesCurso
			// 
			this->lblNumDocentesCurso->AutoSize = true;
			this->lblNumDocentesCurso->Font = (gcnew System::Drawing::Font(L"Papyrus", 7.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->lblNumDocentesCurso->Location = System::Drawing::Point(20, 68);
			this->lblNumDocentesCurso->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->lblNumDocentesCurso->Name = L"lblNumDocentesCurso";
			this->lblNumDocentesCurso->RightToLeft = System::Windows::Forms::RightToLeft::Yes;
			this->lblNumDocentesCurso->Size = System::Drawing::Size(168, 18);
			this->lblNumDocentesCurso->TabIndex = 61;
			this->lblNumDocentesCurso->Text = L"Docentes que imparten el curso: ";
			// 
			// button1
			// 
			this->button1->Font = (gcnew System::Drawing::Font(L"Papyrus", 7.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button1->Location = System::Drawing::Point(291, 274);
			this->button1->Margin = System::Windows::Forms::Padding(2);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(83, 46);
			this->button1->TabIndex = 72;
			this->button1->Text = L"Exportar";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &PortalTrabajadores::button1_Click);
			// 
			// btnexportarNoDocente
			// 
			this->btnexportarNoDocente->Font = (gcnew System::Drawing::Font(L"Papyrus", 7.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btnexportarNoDocente->Location = System::Drawing::Point(291, 647);
			this->btnexportarNoDocente->Margin = System::Windows::Forms::Padding(2);
			this->btnexportarNoDocente->Name = L"btnexportarNoDocente";
			this->btnexportarNoDocente->Size = System::Drawing::Size(83, 46);
			this->btnexportarNoDocente->TabIndex = 45;
			this->btnexportarNoDocente->Text = L"Exportar";
			this->btnexportarNoDocente->UseVisualStyleBackColor = true;
			this->btnexportarNoDocente->Click += gcnew System::EventHandler(this, &PortalTrabajadores::btnexportarNoDocente_Click);
			// 
			// groupBox12
			// 
			this->groupBox12->Controls->Add(this->txtDpieliminardocente);
			this->groupBox12->Controls->Add(this->label37);
			this->groupBox12->Controls->Add(this->btnEliminarDocente);
			this->groupBox12->Location = System::Drawing::Point(251, 143);
			this->groupBox12->Margin = System::Windows::Forms::Padding(2);
			this->groupBox12->Name = L"groupBox12";
			this->groupBox12->Padding = System::Windows::Forms::Padding(2);
			this->groupBox12->Size = System::Drawing::Size(146, 117);
			this->groupBox12->TabIndex = 70;
			this->groupBox12->TabStop = false;
			this->groupBox12->Text = L"Eliminar Trabajador Docente";
			// 
			// txtDpieliminardocente
			// 
			this->txtDpieliminardocente->Location = System::Drawing::Point(54, 32);
			this->txtDpieliminardocente->Margin = System::Windows::Forms::Padding(2);
			this->txtDpieliminardocente->Name = L"txtDpieliminardocente";
			this->txtDpieliminardocente->Size = System::Drawing::Size(76, 20);
			this->txtDpieliminardocente->TabIndex = 42;
			// 
			// label37
			// 
			this->label37->AutoSize = true;
			this->label37->Font = (gcnew System::Drawing::Font(L"Papyrus", 7.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label37->Location = System::Drawing::Point(5, 36);
			this->label37->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label37->Name = L"label37";
			this->label37->Size = System::Drawing::Size(31, 18);
			this->label37->TabIndex = 41;
			this->label37->Text = L"DPI:";
			// 
			// btnEliminarDocente
			// 
			this->btnEliminarDocente->Font = (gcnew System::Drawing::Font(L"Papyrus", 7.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btnEliminarDocente->Location = System::Drawing::Point(47, 68);
			this->btnEliminarDocente->Margin = System::Windows::Forms::Padding(2);
			this->btnEliminarDocente->Name = L"btnEliminarDocente";
			this->btnEliminarDocente->Size = System::Drawing::Size(69, 26);
			this->btnEliminarDocente->TabIndex = 42;
			this->btnEliminarDocente->Text = L"Eliminar";
			this->btnEliminarDocente->UseVisualStyleBackColor = true;
			this->btnEliminarDocente->Click += gcnew System::EventHandler(this, &PortalTrabajadores::btnEliminarDocente_Click);
			// 
			// groupBox9
			// 
			this->groupBox9->Controls->Add(this->btnpromediotodo);
			this->groupBox9->Controls->Add(this->btnNoDocentes);
			this->groupBox9->Controls->Add(this->btnpromedioDocentes);
			this->groupBox9->Location = System::Drawing::Point(663, 35);
			this->groupBox9->Margin = System::Windows::Forms::Padding(2);
			this->groupBox9->Name = L"groupBox9";
			this->groupBox9->Padding = System::Windows::Forms::Padding(2);
			this->groupBox9->Size = System::Drawing::Size(159, 180);
			this->groupBox9->TabIndex = 71;
			this->groupBox9->TabStop = false;
			this->groupBox9->Text = L"Calcular el salario promedio";
			// 
			// btnpromediotodo
			// 
			this->btnpromediotodo->Font = (gcnew System::Drawing::Font(L"Papyrus", 7.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btnpromediotodo->Location = System::Drawing::Point(35, 126);
			this->btnpromediotodo->Margin = System::Windows::Forms::Padding(2);
			this->btnpromediotodo->Name = L"btnpromediotodo";
			this->btnpromediotodo->Size = System::Drawing::Size(83, 46);
			this->btnpromediotodo->TabIndex = 44;
			this->btnpromediotodo->Text = L"Todo";
			this->btnpromediotodo->UseVisualStyleBackColor = true;
			this->btnpromediotodo->Click += gcnew System::EventHandler(this, &PortalTrabajadores::btnpromediotodo_Click);
			// 
			// btnNoDocentes
			// 
			this->btnNoDocentes->Font = (gcnew System::Drawing::Font(L"Papyrus", 7.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btnNoDocentes->Location = System::Drawing::Point(35, 75);
			this->btnNoDocentes->Margin = System::Windows::Forms::Padding(2);
			this->btnNoDocentes->Name = L"btnNoDocentes";
			this->btnNoDocentes->Size = System::Drawing::Size(83, 46);
			this->btnNoDocentes->TabIndex = 43;
			this->btnNoDocentes->Text = L"No Docentes";
			this->btnNoDocentes->UseVisualStyleBackColor = true;
			this->btnNoDocentes->Click += gcnew System::EventHandler(this, &PortalTrabajadores::btnNoDocentes_Click);
			// 
			// btnpromedioDocentes
			// 
			this->btnpromedioDocentes->Font = (gcnew System::Drawing::Font(L"Papyrus", 7.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btnpromedioDocentes->Location = System::Drawing::Point(35, 42);
			this->btnpromedioDocentes->Margin = System::Windows::Forms::Padding(2);
			this->btnpromedioDocentes->Name = L"btnpromedioDocentes";
			this->btnpromedioDocentes->Size = System::Drawing::Size(83, 26);
			this->btnpromedioDocentes->TabIndex = 42;
			this->btnpromedioDocentes->Text = L"Docentes";
			this->btnpromedioDocentes->UseVisualStyleBackColor = true;
			this->btnpromedioDocentes->Click += gcnew System::EventHandler(this, &PortalTrabajadores::btnpromedioDocentes_Click);
			// 
			// groupBox11
			// 
			this->groupBox11->Controls->Add(this->btnBuscarDocente);
			this->groupBox11->Controls->Add(this->txtDPIBuscarDocente);
			this->groupBox11->Controls->Add(this->label32);
			this->groupBox11->Location = System::Drawing::Point(251, 32);
			this->groupBox11->Name = L"groupBox11";
			this->groupBox11->Size = System::Drawing::Size(146, 100);
			this->groupBox11->TabIndex = 71;
			this->groupBox11->TabStop = false;
			this->groupBox11->Text = L"Buscar Trabajador Docente";
			// 
			// btnBuscarDocente
			// 
			this->btnBuscarDocente->Font = (gcnew System::Drawing::Font(L"Papyrus", 7.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btnBuscarDocente->Location = System::Drawing::Point(54, 66);
			this->btnBuscarDocente->Margin = System::Windows::Forms::Padding(2);
			this->btnBuscarDocente->Name = L"btnBuscarDocente";
			this->btnBuscarDocente->Size = System::Drawing::Size(69, 26);
			this->btnBuscarDocente->TabIndex = 43;
			this->btnBuscarDocente->Text = L"Buscar";
			this->btnBuscarDocente->UseVisualStyleBackColor = true;
			this->btnBuscarDocente->Click += gcnew System::EventHandler(this, &PortalTrabajadores::btnBuscarDocente_Click);
			// 
			// txtDPIBuscarDocente
			// 
			this->txtDPIBuscarDocente->Location = System::Drawing::Point(54, 35);
			this->txtDPIBuscarDocente->Margin = System::Windows::Forms::Padding(2);
			this->txtDPIBuscarDocente->Name = L"txtDPIBuscarDocente";
			this->txtDPIBuscarDocente->Size = System::Drawing::Size(76, 20);
			this->txtDPIBuscarDocente->TabIndex = 43;
			// 
			// label32
			// 
			this->label32->AutoSize = true;
			this->label32->Font = (gcnew System::Drawing::Font(L"Papyrus", 7.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label32->Location = System::Drawing::Point(5, 37);
			this->label32->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label32->Name = L"label32";
			this->label32->Size = System::Drawing::Size(33, 18);
			this->label32->TabIndex = 43;
			this->label32->Text = L"DPI: ";
			this->label32->Click += gcnew System::EventHandler(this, &PortalTrabajadores::label32_Click);
			// 
			// groupBox8
			// 
			this->groupBox8->Controls->Add(this->txtDPINoDocenteBuscar);
			this->groupBox8->Controls->Add(this->label25);
			this->groupBox8->Controls->Add(this->btnBuscarNoDocente);
			this->groupBox8->Location = System::Drawing::Point(251, 390);
			this->groupBox8->Margin = System::Windows::Forms::Padding(2);
			this->groupBox8->Name = L"groupBox8";
			this->groupBox8->Padding = System::Windows::Forms::Padding(2);
			this->groupBox8->Size = System::Drawing::Size(146, 117);
			this->groupBox8->TabIndex = 70;
			this->groupBox8->TabStop = false;
			this->groupBox8->Text = L"Buscar Trabajador No Docente";
			// 
			// txtDPINoDocenteBuscar
			// 
			this->txtDPINoDocenteBuscar->Location = System::Drawing::Point(54, 32);
			this->txtDPINoDocenteBuscar->Margin = System::Windows::Forms::Padding(2);
			this->txtDPINoDocenteBuscar->Name = L"txtDPINoDocenteBuscar";
			this->txtDPINoDocenteBuscar->Size = System::Drawing::Size(76, 20);
			this->txtDPINoDocenteBuscar->TabIndex = 42;
			// 
			// label25
			// 
			this->label25->AutoSize = true;
			this->label25->Font = (gcnew System::Drawing::Font(L"Papyrus", 7.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label25->Location = System::Drawing::Point(5, 36);
			this->label25->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label25->Name = L"label25";
			this->label25->Size = System::Drawing::Size(33, 18);
			this->label25->TabIndex = 41;
			this->label25->Text = L"DPI: ";
			// 
			// btnBuscarNoDocente
			// 
			this->btnBuscarNoDocente->Font = (gcnew System::Drawing::Font(L"Papyrus", 7.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btnBuscarNoDocente->Location = System::Drawing::Point(47, 68);
			this->btnBuscarNoDocente->Margin = System::Windows::Forms::Padding(2);
			this->btnBuscarNoDocente->Name = L"btnBuscarNoDocente";
			this->btnBuscarNoDocente->Size = System::Drawing::Size(69, 26);
			this->btnBuscarNoDocente->TabIndex = 42;
			this->btnBuscarNoDocente->Text = L"Buscar";
			this->btnBuscarNoDocente->UseVisualStyleBackColor = true;
			this->btnBuscarNoDocente->Click += gcnew System::EventHandler(this, &PortalTrabajadores::btnBuscarNoDocente_Click);
			// 
			// groupBox6
			// 
			this->groupBox6->Controls->Add(this->txtCargoModNo);
			this->groupBox6->Controls->Add(this->label18);
			this->groupBox6->Controls->Add(this->txtapellido2modno);
			this->groupBox6->Controls->Add(this->label17);
			this->groupBox6->Controls->Add(this->Departamento);
			this->groupBox6->Controls->Add(this->txtDepartamentoModNo);
			this->groupBox6->Controls->Add(this->label8);
			this->groupBox6->Controls->Add(this->button6);
			this->groupBox6->Controls->Add(this->label19);
			this->groupBox6->Controls->Add(this->txtFechaModNo);
			this->groupBox6->Controls->Add(this->label20);
			this->groupBox6->Controls->Add(this->txtSalarioModNo);
			this->groupBox6->Controls->Add(this->txtDIPModNo2);
			this->groupBox6->Controls->Add(this->label21);
			this->groupBox6->Controls->Add(this->label22);
			this->groupBox6->Controls->Add(this->txtapellido1modno);
			this->groupBox6->Controls->Add(this->txtDPImodNO);
			this->groupBox6->Controls->Add(this->label23);
			this->groupBox6->Controls->Add(this->txtnombremodno);
			this->groupBox6->Location = System::Drawing::Point(429, 390);
			this->groupBox6->Margin = System::Windows::Forms::Padding(2);
			this->groupBox6->Name = L"groupBox6";
			this->groupBox6->Padding = System::Windows::Forms::Padding(2);
			this->groupBox6->Size = System::Drawing::Size(214, 320);
			this->groupBox6->TabIndex = 68;
			this->groupBox6->TabStop = false;
			this->groupBox6->Text = L"Modificar trabajador no docente";
			// 
			// txtCargoModNo
			// 
			this->txtCargoModNo->Location = System::Drawing::Point(127, 234);
			this->txtCargoModNo->Margin = System::Windows::Forms::Padding(2);
			this->txtCargoModNo->Name = L"txtCargoModNo";
			this->txtCargoModNo->Size = System::Drawing::Size(76, 20);
			this->txtCargoModNo->TabIndex = 71;
			// 
			// label18
			// 
			this->label18->AutoSize = true;
			this->label18->Font = (gcnew System::Drawing::Font(L"Papyrus", 7.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label18->Location = System::Drawing::Point(4, 234);
			this->label18->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label18->Name = L"label18";
			this->label18->Size = System::Drawing::Size(106, 18);
			this->label18->TabIndex = 70;
			this->label18->Text = L"Cargo ocupacional: ";
			// 
			// txtapellido2modno
			// 
			this->txtapellido2modno->Location = System::Drawing::Point(127, 103);
			this->txtapellido2modno->Margin = System::Windows::Forms::Padding(2);
			this->txtapellido2modno->Name = L"txtapellido2modno";
			this->txtapellido2modno->Size = System::Drawing::Size(76, 20);
			this->txtapellido2modno->TabIndex = 69;
			// 
			// label17
			// 
			this->label17->AutoSize = true;
			this->label17->Font = (gcnew System::Drawing::Font(L"Papyrus", 7.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label17->Location = System::Drawing::Point(8, 105);
			this->label17->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label17->Name = L"label17";
			this->label17->Size = System::Drawing::Size(70, 18);
			this->label17->TabIndex = 68;
			this->label17->Text = L"Apellidos 2:";
			// 
			// Departamento
			// 
			this->Departamento->AutoSize = true;
			this->Departamento->Font = (gcnew System::Drawing::Font(L"Papyrus", 7.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->Departamento->Location = System::Drawing::Point(4, 210);
			this->Departamento->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->Departamento->Name = L"Departamento";
			this->Departamento->Size = System::Drawing::Size(82, 18);
			this->Departamento->TabIndex = 34;
			this->Departamento->Text = L"Departamento";
			// 
			// txtDepartamentoModNo
			// 
			this->txtDepartamentoModNo->Location = System::Drawing::Point(127, 210);
			this->txtDepartamentoModNo->Margin = System::Windows::Forms::Padding(2);
			this->txtDepartamentoModNo->Name = L"txtDepartamentoModNo";
			this->txtDepartamentoModNo->Size = System::Drawing::Size(76, 20);
			this->txtDepartamentoModNo->TabIndex = 33;
			// 
			// label8
			// 
			this->label8->AutoSize = true;
			this->label8->Font = (gcnew System::Drawing::Font(L"Papyrus", 7.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label8->Location = System::Drawing::Point(4, 183);
			this->label8->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label8->Name = L"label8";
			this->label8->Size = System::Drawing::Size(94, 18);
			this->label8->TabIndex = 31;
			this->label8->Text = L"Fecha de ingreso:";
			// 
			// button6
			// 
			this->button6->Font = (gcnew System::Drawing::Font(L"Papyrus", 7.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button6->Location = System::Drawing::Point(67, 277);
			this->button6->Margin = System::Windows::Forms::Padding(2);
			this->button6->Name = L"button6";
			this->button6->Size = System::Drawing::Size(69, 26);
			this->button6->TabIndex = 60;
			this->button6->Text = L"Modificar";
			this->button6->UseVisualStyleBackColor = true;
			this->button6->Click += gcnew System::EventHandler(this, &PortalTrabajadores::button6_Click);
			// 
			// label19
			// 
			this->label19->AutoSize = true;
			this->label19->Font = (gcnew System::Drawing::Font(L"Papyrus", 7.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label19->Location = System::Drawing::Point(8, 157);
			this->label19->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label19->Name = L"label19";
			this->label19->Size = System::Drawing::Size(50, 18);
			this->label19->TabIndex = 32;
			this->label19->Text = L"Salario: ";
			// 
			// txtFechaModNo
			// 
			this->txtFechaModNo->Location = System::Drawing::Point(127, 184);
			this->txtFechaModNo->Margin = System::Windows::Forms::Padding(2);
			this->txtFechaModNo->Name = L"txtFechaModNo";
			this->txtFechaModNo->Size = System::Drawing::Size(76, 20);
			this->txtFechaModNo->TabIndex = 31;
			// 
			// label20
			// 
			this->label20->AutoSize = true;
			this->label20->Font = (gcnew System::Drawing::Font(L"Papyrus", 7.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label20->Location = System::Drawing::Point(8, 128);
			this->label20->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label20->Name = L"label20";
			this->label20->Size = System::Drawing::Size(31, 18);
			this->label20->TabIndex = 67;
			this->label20->Text = L"Dpi:";
			// 
			// txtSalarioModNo
			// 
			this->txtSalarioModNo->Location = System::Drawing::Point(127, 157);
			this->txtSalarioModNo->Margin = System::Windows::Forms::Padding(2);
			this->txtSalarioModNo->Name = L"txtSalarioModNo";
			this->txtSalarioModNo->Size = System::Drawing::Size(76, 20);
			this->txtSalarioModNo->TabIndex = 66;
			// 
			// txtDIPModNo2
			// 
			this->txtDIPModNo2->Location = System::Drawing::Point(127, 128);
			this->txtDIPModNo2->Margin = System::Windows::Forms::Padding(2);
			this->txtDIPModNo2->Name = L"txtDIPModNo2";
			this->txtDIPModNo2->Size = System::Drawing::Size(76, 20);
			this->txtDIPModNo2->TabIndex = 64;
			// 
			// label21
			// 
			this->label21->AutoSize = true;
			this->label21->Font = (gcnew System::Drawing::Font(L"Papyrus", 7.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label21->Location = System::Drawing::Point(8, 81);
			this->label21->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label21->Name = L"label21";
			this->label21->Size = System::Drawing::Size(68, 18);
			this->label21->TabIndex = 63;
			this->label21->Text = L"Apellidos 1";
			// 
			// label22
			// 
			this->label22->AutoSize = true;
			this->label22->Font = (gcnew System::Drawing::Font(L"Papyrus", 7.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label22->Location = System::Drawing::Point(8, 30);
			this->label22->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label22->Name = L"label22";
			this->label22->Size = System::Drawing::Size(29, 18);
			this->label22->TabIndex = 47;
			this->label22->Text = L"DPI";
			this->label22->Click += gcnew System::EventHandler(this, &PortalTrabajadores::label22_Click);
			// 
			// txtapellido1modno
			// 
			this->txtapellido1modno->Location = System::Drawing::Point(127, 79);
			this->txtapellido1modno->Margin = System::Windows::Forms::Padding(2);
			this->txtapellido1modno->Name = L"txtapellido1modno";
			this->txtapellido1modno->Size = System::Drawing::Size(76, 20);
			this->txtapellido1modno->TabIndex = 62;
			// 
			// txtDPImodNO
			// 
			this->txtDPImodNO->Location = System::Drawing::Point(41, 28);
			this->txtDPImodNO->Margin = System::Windows::Forms::Padding(2);
			this->txtDPImodNO->Name = L"txtDPImodNO";
			this->txtDPImodNO->Size = System::Drawing::Size(76, 20);
			this->txtDPImodNO->TabIndex = 48;
			// 
			// label23
			// 
			this->label23->AutoSize = true;
			this->label23->Font = (gcnew System::Drawing::Font(L"Papyrus", 7.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label23->Location = System::Drawing::Point(8, 59);
			this->label23->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label23->Name = L"label23";
			this->label23->Size = System::Drawing::Size(53, 18);
			this->label23->TabIndex = 61;
			this->label23->Text = L"Nombre:";
			// 
			// txtnombremodno
			// 
			this->txtnombremodno->Location = System::Drawing::Point(127, 57);
			this->txtnombremodno->Margin = System::Windows::Forms::Padding(2);
			this->txtnombremodno->Name = L"txtnombremodno";
			this->txtnombremodno->Size = System::Drawing::Size(76, 20);
			this->txtnombremodno->TabIndex = 60;
			// 
			// groupBox7
			// 
			this->groupBox7->Controls->Add(this->txtDPIEliminarNoDocente);
			this->groupBox7->Controls->Add(this->label28);
			this->groupBox7->Controls->Add(this->btnEliminar);
			this->groupBox7->Location = System::Drawing::Point(251, 511);
			this->groupBox7->Margin = System::Windows::Forms::Padding(2);
			this->groupBox7->Name = L"groupBox7";
			this->groupBox7->Padding = System::Windows::Forms::Padding(2);
			this->groupBox7->Size = System::Drawing::Size(146, 117);
			this->groupBox7->TabIndex = 69;
			this->groupBox7->TabStop = false;
			this->groupBox7->Text = L"Eliminar Trabajador No Docente";
			// 
			// txtDPIEliminarNoDocente
			// 
			this->txtDPIEliminarNoDocente->Location = System::Drawing::Point(54, 32);
			this->txtDPIEliminarNoDocente->Margin = System::Windows::Forms::Padding(2);
			this->txtDPIEliminarNoDocente->Name = L"txtDPIEliminarNoDocente";
			this->txtDPIEliminarNoDocente->Size = System::Drawing::Size(76, 20);
			this->txtDPIEliminarNoDocente->TabIndex = 42;
			// 
			// label28
			// 
			this->label28->AutoSize = true;
			this->label28->Font = (gcnew System::Drawing::Font(L"Papyrus", 7.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label28->Location = System::Drawing::Point(5, 36);
			this->label28->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label28->Name = L"label28";
			this->label28->Size = System::Drawing::Size(31, 18);
			this->label28->TabIndex = 41;
			this->label28->Text = L"DPI:";
			// 
			// btnEliminar
			// 
			this->btnEliminar->Font = (gcnew System::Drawing::Font(L"Papyrus", 7.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btnEliminar->Location = System::Drawing::Point(47, 68);
			this->btnEliminar->Margin = System::Windows::Forms::Padding(2);
			this->btnEliminar->Name = L"btnEliminar";
			this->btnEliminar->Size = System::Drawing::Size(69, 26);
			this->btnEliminar->TabIndex = 42;
			this->btnEliminar->Text = L"Eliminar";
			this->btnEliminar->UseVisualStyleBackColor = true;
			this->btnEliminar->Click += gcnew System::EventHandler(this, &PortalTrabajadores::btnEliminar_Click);
			// 
			// groupBox3
			// 
			this->groupBox3->Controls->Add(this->txtInsertarIndice);
			this->groupBox3->Controls->Add(this->label38);
			this->groupBox3->Controls->Add(this->txtCargoNoDocente);
			this->groupBox3->Controls->Add(this->txtDepartamentoNoDocente);
			this->groupBox3->Controls->Add(this->txtFechaDeIngresoNoDocente);
			this->groupBox3->Controls->Add(this->txtSalarioNoDocente);
			this->groupBox3->Controls->Add(this->label31);
			this->groupBox3->Controls->Add(this->txtDPINoDocente);
			this->groupBox3->Controls->Add(this->txtApellido2NoDocente);
			this->groupBox3->Controls->Add(this->txtApellido1NoDocente);
			this->groupBox3->Controls->Add(this->label30);
			this->groupBox3->Controls->Add(this->label6);
			this->groupBox3->Controls->Add(this->label1);
			this->groupBox3->Controls->Add(this->label2);
			this->groupBox3->Controls->Add(this->label3);
			this->groupBox3->Controls->Add(this->label4);
			this->groupBox3->Controls->Add(this->label5);
			this->groupBox3->Controls->Add(this->txtNombreNoDocente);
			this->groupBox3->Controls->Add(this->btnAgregarNoDocente);
			this->groupBox3->Location = System::Drawing::Point(17, 388);
			this->groupBox3->Margin = System::Windows::Forms::Padding(2);
			this->groupBox3->Name = L"groupBox3";
			this->groupBox3->Padding = System::Windows::Forms::Padding(2);
			this->groupBox3->Size = System::Drawing::Size(219, 322);
			this->groupBox3->TabIndex = 31;
			this->groupBox3->TabStop = false;
			this->groupBox3->Text = L"Agregar trabajador no docente";
			// 
			// txtInsertarIndice
			// 
			this->txtInsertarIndice->Location = System::Drawing::Point(132, 234);
			this->txtInsertarIndice->Margin = System::Windows::Forms::Padding(2);
			this->txtInsertarIndice->Name = L"txtInsertarIndice";
			this->txtInsertarIndice->Size = System::Drawing::Size(76, 20);
			this->txtInsertarIndice->TabIndex = 43;
			// 
			// label38
			// 
			this->label38->AutoSize = true;
			this->label38->Font = (gcnew System::Drawing::Font(L"Papyrus", 7.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label38->Location = System::Drawing::Point(6, 231);
			this->label38->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label38->Name = L"label38";
			this->label38->Size = System::Drawing::Size(61, 18);
			this->label38->TabIndex = 42;
			this->label38->Text = L"Insertar en:";
			// 
			// txtCargoNoDocente
			// 
			this->txtCargoNoDocente->Location = System::Drawing::Point(132, 210);
			this->txtCargoNoDocente->Margin = System::Windows::Forms::Padding(2);
			this->txtCargoNoDocente->Name = L"txtCargoNoDocente";
			this->txtCargoNoDocente->Size = System::Drawing::Size(76, 20);
			this->txtCargoNoDocente->TabIndex = 41;
			this->txtCargoNoDocente->TextChanged += gcnew System::EventHandler(this, &PortalTrabajadores::txtCargoNoDocente_TextChanged);
			// 
			// txtDepartamentoNoDocente
			// 
			this->txtDepartamentoNoDocente->Location = System::Drawing::Point(132, 186);
			this->txtDepartamentoNoDocente->Margin = System::Windows::Forms::Padding(2);
			this->txtDepartamentoNoDocente->Name = L"txtDepartamentoNoDocente";
			this->txtDepartamentoNoDocente->Size = System::Drawing::Size(76, 20);
			this->txtDepartamentoNoDocente->TabIndex = 40;
			// 
			// txtFechaDeIngresoNoDocente
			// 
			this->txtFechaDeIngresoNoDocente->Location = System::Drawing::Point(132, 163);
			this->txtFechaDeIngresoNoDocente->Margin = System::Windows::Forms::Padding(2);
			this->txtFechaDeIngresoNoDocente->Name = L"txtFechaDeIngresoNoDocente";
			this->txtFechaDeIngresoNoDocente->Size = System::Drawing::Size(76, 20);
			this->txtFechaDeIngresoNoDocente->TabIndex = 39;
			this->txtFechaDeIngresoNoDocente->TextChanged += gcnew System::EventHandler(this, &PortalTrabajadores::txtFechaDeIngresoNoDocente_TextChanged);
			// 
			// txtSalarioNoDocente
			// 
			this->txtSalarioNoDocente->Location = System::Drawing::Point(132, 136);
			this->txtSalarioNoDocente->Margin = System::Windows::Forms::Padding(2);
			this->txtSalarioNoDocente->Name = L"txtSalarioNoDocente";
			this->txtSalarioNoDocente->Size = System::Drawing::Size(76, 20);
			this->txtSalarioNoDocente->TabIndex = 38;
			// 
			// label31
			// 
			this->label31->AutoSize = true;
			this->label31->Font = (gcnew System::Drawing::Font(L"Papyrus", 7.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label31->Location = System::Drawing::Point(6, 185);
			this->label31->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label31->Name = L"label31";
			this->label31->Size = System::Drawing::Size(82, 18);
			this->label31->TabIndex = 37;
			this->label31->Text = L"Departamento";
			// 
			// txtDPINoDocente
			// 
			this->txtDPINoDocente->Location = System::Drawing::Point(132, 110);
			this->txtDPINoDocente->Margin = System::Windows::Forms::Padding(2);
			this->txtDPINoDocente->Name = L"txtDPINoDocente";
			this->txtDPINoDocente->Size = System::Drawing::Size(76, 20);
			this->txtDPINoDocente->TabIndex = 36;
			// 
			// txtApellido2NoDocente
			// 
			this->txtApellido2NoDocente->Location = System::Drawing::Point(132, 83);
			this->txtApellido2NoDocente->Margin = System::Windows::Forms::Padding(2);
			this->txtApellido2NoDocente->Name = L"txtApellido2NoDocente";
			this->txtApellido2NoDocente->Size = System::Drawing::Size(76, 20);
			this->txtApellido2NoDocente->TabIndex = 35;
			// 
			// txtApellido1NoDocente
			// 
			this->txtApellido1NoDocente->Location = System::Drawing::Point(132, 56);
			this->txtApellido1NoDocente->Margin = System::Windows::Forms::Padding(2);
			this->txtApellido1NoDocente->Name = L"txtApellido1NoDocente";
			this->txtApellido1NoDocente->Size = System::Drawing::Size(76, 20);
			this->txtApellido1NoDocente->TabIndex = 34;
			// 
			// label30
			// 
			this->label30->AutoSize = true;
			this->label30->Font = (gcnew System::Drawing::Font(L"Papyrus", 7.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label30->Location = System::Drawing::Point(6, 87);
			this->label30->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label30->Name = L"label30";
			this->label30->Size = System::Drawing::Size(106, 18);
			this->label30->TabIndex = 33;
			this->label30->Text = L"Segundo Apellido";
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->Font = (gcnew System::Drawing::Font(L"Papyrus", 7.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label6->Location = System::Drawing::Point(3, 206);
			this->label6->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(106, 18);
			this->label6->TabIndex = 32;
			this->label6->Text = L"Cargo ocupacional: ";
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Papyrus", 7.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->Location = System::Drawing::Point(7, 138);
			this->label1->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(50, 18);
			this->label1->TabIndex = 30;
			this->label1->Text = L"Salario: ";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Font = (gcnew System::Drawing::Font(L"Papyrus", 7.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label2->Location = System::Drawing::Point(10, 112);
			this->label2->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(31, 18);
			this->label2->TabIndex = 28;
			this->label2->Text = L"DPI:";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Font = (gcnew System::Drawing::Font(L"Papyrus", 7.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label3->Location = System::Drawing::Point(7, 163);
			this->label3->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(94, 18);
			this->label3->TabIndex = 26;
			this->label3->Text = L"Fecha de ingreso:";
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Font = (gcnew System::Drawing::Font(L"Papyrus", 7.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label4->Location = System::Drawing::Point(6, 58);
			this->label4->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(90, 18);
			this->label4->TabIndex = 24;
			this->label4->Text = L"Primer Apellido";
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Font = (gcnew System::Drawing::Font(L"Papyrus", 7.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label5->Location = System::Drawing::Point(6, 32);
			this->label5->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(53, 18);
			this->label5->TabIndex = 22;
			this->label5->Text = L"Nombre:";
			// 
			// txtNombreNoDocente
			// 
			this->txtNombreNoDocente->Location = System::Drawing::Point(132, 32);
			this->txtNombreNoDocente->Margin = System::Windows::Forms::Padding(2);
			this->txtNombreNoDocente->Name = L"txtNombreNoDocente";
			this->txtNombreNoDocente->Size = System::Drawing::Size(76, 20);
			this->txtNombreNoDocente->TabIndex = 15;
			// 
			// btnAgregarNoDocente
			// 
			this->btnAgregarNoDocente->Font = (gcnew System::Drawing::Font(L"Papyrus", 7.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btnAgregarNoDocente->Location = System::Drawing::Point(69, 279);
			this->btnAgregarNoDocente->Margin = System::Windows::Forms::Padding(2);
			this->btnAgregarNoDocente->Name = L"btnAgregarNoDocente";
			this->btnAgregarNoDocente->Size = System::Drawing::Size(78, 26);
			this->btnAgregarNoDocente->TabIndex = 16;
			this->btnAgregarNoDocente->Text = L"Agregar";
			this->btnAgregarNoDocente->UseVisualStyleBackColor = true;
			this->btnAgregarNoDocente->Click += gcnew System::EventHandler(this, &PortalTrabajadores::btnAgregarNoDocente_Click);
			// 
			// groupBox2
			// 
			this->groupBox2->Controls->Add(this->txtInsertarDocenteen);
			this->groupBox2->Controls->Add(this->label39);
			this->groupBox2->Controls->Add(this->btnAgregarDocente);
			this->groupBox2->Controls->Add(this->txtAsiganturaDocente);
			this->groupBox2->Controls->Add(this->label29);
			this->groupBox2->Controls->Add(this->txtDepartamentoDocente);
			this->groupBox2->Controls->Add(this->label27);
			this->groupBox2->Controls->Add(this->txtSegundoApellidoDocente);
			this->groupBox2->Controls->Add(this->label26);
			this->groupBox2->Controls->Add(this->label14);
			this->groupBox2->Controls->Add(this->txtSalarioDocente);
			this->groupBox2->Controls->Add(this->label13);
			this->groupBox2->Controls->Add(this->txtDpiDocente);
			this->groupBox2->Controls->Add(this->label12);
			this->groupBox2->Controls->Add(this->txtAñoDocente);
			this->groupBox2->Controls->Add(this->label10);
			this->groupBox2->Controls->Add(this->txtApellidoDocente);
			this->groupBox2->Controls->Add(this->label9);
			this->groupBox2->Controls->Add(this->txtNombreDocente);
			this->groupBox2->Location = System::Drawing::Point(17, 32);
			this->groupBox2->Margin = System::Windows::Forms::Padding(2);
			this->groupBox2->Name = L"groupBox2";
			this->groupBox2->Padding = System::Windows::Forms::Padding(2);
			this->groupBox2->Size = System::Drawing::Size(219, 348);
			this->groupBox2->TabIndex = 14;
			this->groupBox2->TabStop = false;
			this->groupBox2->Text = L"Agregar trabajador docente";
			// 
			// txtInsertarDocenteen
			// 
			this->txtInsertarDocenteen->Location = System::Drawing::Point(132, 240);
			this->txtInsertarDocenteen->Margin = System::Windows::Forms::Padding(2);
			this->txtInsertarDocenteen->Name = L"txtInsertarDocenteen";
			this->txtInsertarDocenteen->Size = System::Drawing::Size(76, 20);
			this->txtInsertarDocenteen->TabIndex = 39;
			// 
			// label39
			// 
			this->label39->AutoSize = true;
			this->label39->Font = (gcnew System::Drawing::Font(L"Papyrus", 7.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label39->Location = System::Drawing::Point(11, 242);
			this->label39->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label39->Name = L"label39";
			this->label39->Size = System::Drawing::Size(61, 18);
			this->label39->TabIndex = 38;
			this->label39->Text = L"Insertar en:";
			// 
			// btnAgregarDocente
			// 
			this->btnAgregarDocente->Font = (gcnew System::Drawing::Font(L"Papyrus", 7.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btnAgregarDocente->Location = System::Drawing::Point(69, 282);
			this->btnAgregarDocente->Margin = System::Windows::Forms::Padding(2);
			this->btnAgregarDocente->Name = L"btnAgregarDocente";
			this->btnAgregarDocente->Size = System::Drawing::Size(78, 26);
			this->btnAgregarDocente->TabIndex = 37;
			this->btnAgregarDocente->Text = L"Agregar";
			this->btnAgregarDocente->UseVisualStyleBackColor = true;
			this->btnAgregarDocente->Click += gcnew System::EventHandler(this, &PortalTrabajadores::btnAgregarDocente_Click);
			// 
			// txtAsiganturaDocente
			// 
			this->txtAsiganturaDocente->Location = System::Drawing::Point(132, 216);
			this->txtAsiganturaDocente->Margin = System::Windows::Forms::Padding(2);
			this->txtAsiganturaDocente->Name = L"txtAsiganturaDocente";
			this->txtAsiganturaDocente->Size = System::Drawing::Size(76, 20);
			this->txtAsiganturaDocente->TabIndex = 36;
			// 
			// label29
			// 
			this->label29->AutoSize = true;
			this->label29->Font = (gcnew System::Drawing::Font(L"Papyrus", 7.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label29->Location = System::Drawing::Point(11, 216);
			this->label29->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label29->Name = L"label29";
			this->label29->Size = System::Drawing::Size(63, 18);
			this->label29->TabIndex = 35;
			this->label29->Text = L"Asignatura";
			// 
			// txtDepartamentoDocente
			// 
			this->txtDepartamentoDocente->Location = System::Drawing::Point(132, 189);
			this->txtDepartamentoDocente->Margin = System::Windows::Forms::Padding(2);
			this->txtDepartamentoDocente->Name = L"txtDepartamentoDocente";
			this->txtDepartamentoDocente->Size = System::Drawing::Size(76, 20);
			this->txtDepartamentoDocente->TabIndex = 34;
			// 
			// label27
			// 
			this->label27->AutoSize = true;
			this->label27->Font = (gcnew System::Drawing::Font(L"Papyrus", 7.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label27->Location = System::Drawing::Point(11, 188);
			this->label27->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label27->Name = L"label27";
			this->label27->Size = System::Drawing::Size(84, 18);
			this->label27->TabIndex = 33;
			this->label27->Text = L"Departamento:";
			// 
			// txtSegundoApellidoDocente
			// 
			this->txtSegundoApellidoDocente->Location = System::Drawing::Point(132, 86);
			this->txtSegundoApellidoDocente->Margin = System::Windows::Forms::Padding(2);
			this->txtSegundoApellidoDocente->Name = L"txtSegundoApellidoDocente";
			this->txtSegundoApellidoDocente->Size = System::Drawing::Size(76, 20);
			this->txtSegundoApellidoDocente->TabIndex = 32;
			// 
			// label26
			// 
			this->label26->AutoSize = true;
			this->label26->Font = (gcnew System::Drawing::Font(L"Papyrus", 7.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label26->Location = System::Drawing::Point(10, 86);
			this->label26->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label26->Name = L"label26";
			this->label26->Size = System::Drawing::Size(106, 18);
			this->label26->TabIndex = 31;
			this->label26->Text = L"Segundo Apellido";
			// 
			// label14
			// 
			this->label14->AutoSize = true;
			this->label14->Font = (gcnew System::Drawing::Font(L"Papyrus", 7.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label14->Location = System::Drawing::Point(11, 136);
			this->label14->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label14->Name = L"label14";
			this->label14->Size = System::Drawing::Size(50, 18);
			this->label14->TabIndex = 30;
			this->label14->Text = L"Salario: ";
			// 
			// txtSalarioDocente
			// 
			this->txtSalarioDocente->Location = System::Drawing::Point(132, 134);
			this->txtSalarioDocente->Margin = System::Windows::Forms::Padding(2);
			this->txtSalarioDocente->Name = L"txtSalarioDocente";
			this->txtSalarioDocente->Size = System::Drawing::Size(76, 20);
			this->txtSalarioDocente->TabIndex = 29;
			// 
			// label13
			// 
			this->label13->AutoSize = true;
			this->label13->Font = (gcnew System::Drawing::Font(L"Papyrus", 7.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label13->Location = System::Drawing::Point(11, 112);
			this->label13->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label13->Name = L"label13";
			this->label13->Size = System::Drawing::Size(31, 18);
			this->label13->TabIndex = 28;
			this->label13->Text = L"DPI:";
			// 
			// txtDpiDocente
			// 
			this->txtDpiDocente->Location = System::Drawing::Point(132, 110);
			this->txtDpiDocente->Margin = System::Windows::Forms::Padding(2);
			this->txtDpiDocente->Name = L"txtDpiDocente";
			this->txtDpiDocente->Size = System::Drawing::Size(76, 20);
			this->txtDpiDocente->TabIndex = 27;
			// 
			// label12
			// 
			this->label12->AutoSize = true;
			this->label12->Font = (gcnew System::Drawing::Font(L"Papyrus", 7.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label12->Location = System::Drawing::Point(11, 163);
			this->label12->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label12->Name = L"label12";
			this->label12->Size = System::Drawing::Size(94, 18);
			this->label12->TabIndex = 26;
			this->label12->Text = L"Fecha de ingreso:";
			// 
			// txtAñoDocente
			// 
			this->txtAñoDocente->Location = System::Drawing::Point(132, 163);
			this->txtAñoDocente->Margin = System::Windows::Forms::Padding(2);
			this->txtAñoDocente->Name = L"txtAñoDocente";
			this->txtAñoDocente->Size = System::Drawing::Size(76, 20);
			this->txtAñoDocente->TabIndex = 25;
			// 
			// label10
			// 
			this->label10->AutoSize = true;
			this->label10->Font = (gcnew System::Drawing::Font(L"Papyrus", 7.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label10->Location = System::Drawing::Point(11, 58);
			this->label10->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label10->Name = L"label10";
			this->label10->Size = System::Drawing::Size(90, 18);
			this->label10->TabIndex = 24;
			this->label10->Text = L"Primer Apellido";
			// 
			// txtApellidoDocente
			// 
			this->txtApellidoDocente->Location = System::Drawing::Point(132, 58);
			this->txtApellidoDocente->Margin = System::Windows::Forms::Padding(2);
			this->txtApellidoDocente->Name = L"txtApellidoDocente";
			this->txtApellidoDocente->Size = System::Drawing::Size(76, 20);
			this->txtApellidoDocente->TabIndex = 23;
			// 
			// label9
			// 
			this->label9->AutoSize = true;
			this->label9->Font = (gcnew System::Drawing::Font(L"Papyrus", 7.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label9->Location = System::Drawing::Point(11, 30);
			this->label9->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label9->Name = L"label9";
			this->label9->Size = System::Drawing::Size(53, 18);
			this->label9->TabIndex = 22;
			this->label9->Text = L"Nombre:";
			// 
			// txtNombreDocente
			// 
			this->txtNombreDocente->Location = System::Drawing::Point(132, 28);
			this->txtNombreDocente->Margin = System::Windows::Forms::Padding(2);
			this->txtNombreDocente->Name = L"txtNombreDocente";
			this->txtNombreDocente->Size = System::Drawing::Size(76, 20);
			this->txtNombreDocente->TabIndex = 15;
			// 
			// dataGridView1
			// 
			this->dataGridView1->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dataGridView1->Location = System::Drawing::Point(967, 11);
			this->dataGridView1->Margin = System::Windows::Forms::Padding(2);
			this->dataGridView1->Name = L"dataGridView1";
			this->dataGridView1->RowHeadersWidth = 51;
			this->dataGridView1->RowTemplate->Height = 24;
			this->dataGridView1->Size = System::Drawing::Size(795, 649);
			this->dataGridView1->TabIndex = 1;
			// 
			// lblMostrarNoDocentes
			// 
			this->lblMostrarNoDocentes->AutoSize = true;
			this->lblMostrarNoDocentes->Location = System::Drawing::Point(996, 70);
			this->lblMostrarNoDocentes->Name = L"lblMostrarNoDocentes";
			this->lblMostrarNoDocentes->Size = System::Drawing::Size(41, 13);
			this->lblMostrarNoDocentes->TabIndex = 2;
			this->lblMostrarNoDocentes->Text = L"label35";
			// 
			// label35
			// 
			this->label35->AutoSize = true;
			this->label35->Location = System::Drawing::Point(996, 38);
			this->label35->Name = L"label35";
			this->label35->Size = System::Drawing::Size(135, 13);
			this->label35->TabIndex = 3;
			this->label35->Text = L"Trabajadores No Docentes";
			// 
			// label36
			// 
			this->label36->AutoSize = true;
			this->label36->Location = System::Drawing::Point(1423, 42);
			this->label36->Name = L"label36";
			this->label36->Size = System::Drawing::Size(118, 13);
			this->label36->TabIndex = 4;
			this->label36->Text = L"Trabajadores Docentes";
			this->label36->Click += gcnew System::EventHandler(this, &PortalTrabajadores::label36_Click);
			// 
			// lblMostrarTodosLosDocentes
			// 
			this->lblMostrarTodosLosDocentes->AutoSize = true;
			this->lblMostrarTodosLosDocentes->Location = System::Drawing::Point(1423, 73);
			this->lblMostrarTodosLosDocentes->Name = L"lblMostrarTodosLosDocentes";
			this->lblMostrarTodosLosDocentes->Size = System::Drawing::Size(41, 13);
			this->lblMostrarTodosLosDocentes->TabIndex = 5;
			this->lblMostrarTodosLosDocentes->Text = L"label35";
			// 
			// PortalTrabajadores
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::SystemColors::ControlLightLight;
			this->ClientSize = System::Drawing::Size(1789, 751);
			this->Controls->Add(this->lblMostrarTodosLosDocentes);
			this->Controls->Add(this->label36);
			this->Controls->Add(this->label35);
			this->Controls->Add(this->lblMostrarNoDocentes);
			this->Controls->Add(this->dataGridView1);
			this->Controls->Add(this->groupBox1);
			this->Margin = System::Windows::Forms::Padding(2);
			this->Name = L"PortalTrabajadores";
			this->Text = L"PortalTrabajadores";
			this->Load += gcnew System::EventHandler(this, &PortalTrabajadores::PortalTrabajadores_Load);
			this->groupBox1->ResumeLayout(false);
			this->groupBox10->ResumeLayout(false);
			this->groupBox10->PerformLayout();
			this->groupBox5->ResumeLayout(false);
			this->groupBox5->PerformLayout();
			this->groupBox4->ResumeLayout(false);
			this->groupBox4->PerformLayout();
			this->groupBox12->ResumeLayout(false);
			this->groupBox12->PerformLayout();
			this->groupBox9->ResumeLayout(false);
			this->groupBox11->ResumeLayout(false);
			this->groupBox11->PerformLayout();
			this->groupBox8->ResumeLayout(false);
			this->groupBox8->PerformLayout();
			this->groupBox6->ResumeLayout(false);
			this->groupBox6->PerformLayout();
			this->groupBox7->ResumeLayout(false);
			this->groupBox7->PerformLayout();
			this->groupBox3->ResumeLayout(false);
			this->groupBox3->PerformLayout();
			this->groupBox2->ResumeLayout(false);
			this->groupBox2->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void label8_Click(System::Object^ sender, System::EventArgs^ e) {
	}
private: System::Void button10_Click(System::Object^ sender, System::EventArgs^ e) {
		this->Close();
}
private: System::Void PortalTrabajadores_Load(System::Object^ sender, System::EventArgs^ e) {

	MiListaDoble2->InsertarNuevo2("34520", "Emilio", "Barillas", "contreras", "29999972470101", 2500, "20200101", "Ciencia", false, "Jefe");
	MiListaDoble2->InsertarNuevo2("11521", "Luz", "Contreras", "Aleman", "1835922540101", 2500, "20200111", "Lenguaje", false, "Coordinadora");
	MiListaDoble->InsertarNuevo("12388", "Luis", "Ramirez", "Salazar", "2332976510101", 3000, "20180110", "Arte", true, "Pintura");
	MiListaDoble->InsertarNuevo("89111", "Luisa", "Avia", "Hernandez", "7668723650101", 6000, "20100919", "Matematica", true, "Calculo");
	Refrescar();
}

private: System::Void btnAgregarAlumno_Click(System::Object^ sender, System::EventArgs^ e) {
}
void LimpiarDocente() {
	txtNombreDocente->Text = "";
	txtApellidoDocente->Text = "";
	txtSegundoApellidoDocente->Text = "";
	txtDpiDocente->Text = "";
	txtSalarioDocente->Text = "";
	txtDepartamentoDocente->Text = "";
	txtAsiganturaDocente->Text = "";
	txtAñoDocente->Text = "";
	

}
void LimpiarNoDocente() {
	txtNombreNoDocente->Text = "";
	txtApellido1NoDocente->Text = "";
	txtApellido2NoDocente->Text = "";
	txtDPINoDocente->Text = "";
	txtSalarioNoDocente->Text = "";
	txtFechaDeIngresoNoDocente->Text="";
	txtDepartamentoNoDocente->Text="";
	txtCargoNoDocente->Text="";
}

void MarshalString(String^ s, string& os) {
	using namespace Runtime::InteropServices;
	const char* chars =
		(const char*)(Marshal::StringToHGlobalAnsi(s)).ToPointer();
	os = chars;
	Marshal::FreeHGlobal(IntPtr((void*)chars));
}

void Refrescar()
{
	lblMostrarNoDocentes->Text = MiListaDoble2->RecorrerParaImprimir();
	lblMostrarTodosLosDocentes->Text = MiListaDoble->RecorrerParaImprimir();
}

String^ generarCarne(String^ ano)
{
	srand(time(NULL));

	int num1, num2, num3;
	num1 = rand() % 10;
	num2 = rand() % 10;
	num3 = rand() % 10;

	String^ numero1 = Convert::ToString(num1);
	String^ numero2 = Convert::ToString(num2);
	String^ numero3 = Convert::ToString(num3);

	String^ codigo;
	codigo += num1;
	codigo += num2;
	codigo += num3 + ano;

	return codigo;
}

private: System::Void btnAgregarDocente_Click(System::Object^ sender, System::EventArgs^ e) {

	String^ nombre = txtNombreDocente->Text;
	String^ apellido1 = txtApellidoDocente->Text;
	String^ apellido2 = txtSegundoApellidoDocente->Text;
	String^ dpi =txtDpiDocente->Text;
	double salario = Convert::ToDouble(txtSalarioDocente->Text);
	String^ fechaingreso = txtAñoDocente->Text;
	String^ departamento = txtDepartamentoDocente->Text;
	String^ asignatura = txtAsiganturaDocente->Text;
	string fecha;

	MarshalString(fechaingreso, fecha);
	string Cadena = fecha.substr(2, 2);
	String^ codigo = gcnew String(Cadena.c_str());

	String^ CodigoTrabajador = generarCarne(codigo);

	if (txtInsertarDocenteen->Text != "")
	{
		int indice = Convert::ToInt64(txtInsertarDocenteen->Text);

		if (MiListaDoble->Buscar2(dpi) == -1)
		{
			MiListaDoble->InsertarDocente(CodigoTrabajador, nombre, apellido1, apellido2, dpi, salario, fechaingreso, departamento, true, asignatura, indice);
		}
		else
			MessageBox::Show("Usuario ya registrado");

	}
	else
	{
		if (MiListaDoble->Buscar2(dpi) == -1)
		{
			MiListaDoble->InsertarNuevo(CodigoTrabajador, nombre, apellido1, apellido2, dpi, salario, fechaingreso, departamento, true, asignatura);
		}
		else
			MessageBox::Show("Usuario ya registrado");
	}
	LimpiarDocente();
	Refrescar();
}
private: System::Void txtFechaDeIngresoNoDocente_TextChanged(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void txtCargoNoDocente_TextChanged(System::Object^ sender, System::EventArgs^ e) {
}

private: System::Void btnAgregarNoDocente_Click(System::Object^ sender, System::EventArgs^ e) {
	String^ nombre = txtNombreNoDocente->Text;
	String^ apellido1 = txtApellido1NoDocente->Text;
	String^ apellido2 = txtApellido2NoDocente->Text;
	String^ dpi = txtDPINoDocente->Text;
	double salario = Convert::ToDouble(txtSalarioNoDocente->Text);
	String^ fechaingreso = txtFechaDeIngresoNoDocente->Text;
	String^ departamento = txtDepartamentoNoDocente->Text;
	String^ cargo = txtCargoNoDocente->Text;

	string fecha;

	MarshalString(fechaingreso, fecha);
	string Cadena = fecha.substr(2, 2);
	String^ codigo = gcnew String(Cadena.c_str());

	String^ CodigoTrabajador = generarCarne(codigo);
	

	if (txtInsertarIndice->Text != "")
	{
		int indice = Convert::ToInt64(txtInsertarIndice->Text);
		if (MiListaDoble2->Buscar2(dpi) == -1)
		{
			MiListaDoble2->InsertarNoDocente(CodigoTrabajador, nombre, apellido1, apellido2, dpi, salario, fechaingreso, departamento, false, cargo, indice);
		}
		else
		{
			MessageBox::Show("Usuario ya registrado");
		}
	}
	else
	{
		if (MiListaDoble2->Buscar2(dpi) == -1)
		{
			MiListaDoble2->InsertarNuevo2(CodigoTrabajador, nombre, apellido1, apellido2, dpi, salario, fechaingreso, departamento, false, cargo);
		}
		else
		{
			MessageBox::Show("Usuario ya registrado");
		}
	}
	
	
	LimpiarNoDocente();
	Refrescar();
}

private: System::Void btnBuscarNoDocente_Click(System::Object^ sender, System::EventArgs^ e) {
	String^ dpi = txtDPINoDocenteBuscar->Text;
	if (MiListaDoble2->Buscar(dpi) != nullptr)
	{
		String^ nombre = MiListaDoble2->Buscar(dpi);
		MessageBox::Show("El trabajador es: " + nombre);
	}
	else
		MessageBox::Show("No se encontró al usuario...");
	txtDPINoDocenteBuscar->Text="";
}
private: System::Void label32_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void btnBuscarDocente_Click(System::Object^ sender, System::EventArgs^ e) {
	String^ dpi = txtDPIBuscarDocente->Text;
	if (MiListaDoble->Buscar(dpi) != nullptr)
	{
		String^ nombre = MiListaDoble->Buscar(dpi);
		MessageBox::Show("El docente es: " + nombre);
	}
	else
		MessageBox::Show("No se encontró al usuario...");
	
	txtDPIBuscarDocente->Text="";
}

private: System::Void btnEliminar_Click(System::Object^ sender, System::EventArgs^ e) {

	String^ dpi = txtDPIEliminarNoDocente->Text;
	if (MiListaDoble2->Eliminar(dpi) != false)
	{
		MessageBox::Show("Eliminado Correctamente");
	}
	else
		MessageBox::Show("No fue posible eliminarlo");

	Refrescar();
}
private: System::Void btnEliminarDocente_Click(System::Object^ sender, System::EventArgs^ e) {
	String^ dpi = txtDpieliminardocente->Text;
	if (MiListaDoble->Eliminar(dpi) != false)
	{
		MessageBox::Show("Eliminado Correctamente");
	}
	else
		MessageBox::Show("No fue posible eliminarlo");

	Refrescar();
}
private: System::Void btnpromedioDocentes_Click(System::Object^ sender, System::EventArgs^ e) {
	String^ Promedio = Convert::ToString(MiListaDoble->PromedioSalarios());
	MessageBox::Show("El promedio de salario de docentes es: Q" + Promedio);
}
private: System::Void btnNoDocentes_Click(System::Object^ sender, System::EventArgs^ e) {
	String^ Promedio = Convert::ToString(MiListaDoble2->PromedioSalarios());
	MessageBox::Show("El promedio de salario de no docentes es: Q" + Promedio);
}
private: System::Void btnpromediotodo_Click(System::Object^ sender, System::EventArgs^ e) {

	int total = ((MiListaDoble2->PromedioSalarios() + MiListaDoble->PromedioSalarios()) / 2);
	MessageBox::Show("El promedio total de salarios es de: Q" + Convert::ToString(total));
}
private: System::Void btnexportarNoDocente_Click(System::Object^ sender, System::EventArgs^ e) {
	Print->Exportar(MiListaDoble2->RecorrerParaImprimir());
	MessageBox::Show("Exportado...");
}
private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
	Print->Exportar(MiListaDoble->RecorrerParaImprimir());
	MessageBox::Show("Exportado...");
}
private: System::Void label36_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void button10_Click_1(System::Object^ sender, System::EventArgs^ e) {
	String^ curso = txtCursoBuscar->Text;
	String^ numDocentesCurso;
	numDocentesCurso = Convert::ToString(MiListaDoble->CantidadDocentesCurso(curso));

	labelNumDocentes->Text = numDocentesCurso; 
}

private: System::Void btnImportar_Click(System::Object^ sender, System::EventArgs^ e) {

	ifstream archivo("trabajadores.csv");
	string linea; 
	char delimitador = ',';

	while (getline(archivo, linea))
	{
		stringstream stream(linea);
		string apellido, nombre, dpi, fecha, salario, booleano, departamento, cargo, curso1, curso2, curso3, curso4, curso5, curso6, curso7, curso8;

		getline(stream, apellido, delimitador);
		getline(stream, nombre, delimitador);
		getline(stream, dpi, delimitador);
		getline(stream, fecha, delimitador);
		getline(stream, salario, delimitador);
		getline(stream, booleano, delimitador);

		string Cadena = fecha.substr(2, 2);
		String^ codigo = gcnew String(Cadena.c_str());
		
		

		if (booleano == "true")
		{
			

			String^ Apellido = gcnew String(apellido.c_str());
			String^ Nombre = gcnew String(nombre.c_str());
			String^ DPI = gcnew String(dpi.c_str());
			String^ Fecha = gcnew String(fecha.c_str());
			String^ Salario = gcnew String(salario.c_str());
			

			double salarioConvertido = Convert::ToDouble(Salario);

			String^ CodigoTrabajador = generarCarne(codigo);

			MiListaDoble->InsertarNuevo(CodigoTrabajador, Nombre, Apellido, "", DPI, salarioConvertido, Fecha,"", true, "");

			getline(stream, curso1, delimitador);
			String^ Curso = gcnew String(curso1.c_str());
			InsertarCursos(DPI, Curso);

			getline(stream, curso2, delimitador);
			String^ Curso2 = gcnew String(curso2.c_str());
			InsertarCursos(DPI, Curso2);

			getline(stream, curso3, delimitador);
			String^ Curso3 = gcnew String(curso3.c_str());
			InsertarCursos(DPI, Curso3);
	
		}
		else
		{
			getline(stream, cargo, delimitador);

			String^ Apellido = gcnew String(apellido.c_str());
			String^ Nombre = gcnew String(nombre.c_str());
			String^ DPI = gcnew String(dpi.c_str());
			String^ Fecha = gcnew String(fecha.c_str());
			String^ Salario = gcnew String(salario.c_str());
			String^ Cargo = gcnew String(cargo.c_str());

			double salarioConvertido = Convert::ToDouble(Salario);

			
			String^ CodigoTrabajador = generarCarne(codigo);
			
			MiListaDoble2->InsertarNuevo2(CodigoTrabajador, Nombre, Apellido, "", DPI, salarioConvertido, Fecha,"", false, Cargo);
			
		}
		
	}
	Refrescar();
	
}

void InsertarCursos(String^ dpi, String^ curso)
{
	MiListaDoble->InsertarCursos(MiListaDoble->BuscarNodo(dpi), curso);
	Refrescar();
}

private: System::Void label22_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void button6_Click(System::Object^ sender, System::EventArgs^ e) {

	String^ DPIBuscar = txtDPImodNO->Text;
	String^ Nombre = txtnombremodno->Text;
	String^ Apellido1 = txtapellido1modno->Text;
	String^ Apellido2 = txtapellido2modno->Text;
	String^ DPI = txtDIPModNo2->Text;
	double Salario = Convert::ToDouble(txtSalarioModNo->Text);
	String^ Fecha = txtFechaModNo->Text;
	String^ Departamento = txtDepartamentoModNo->Text; 
	String^ Cargo = txtCargoModNo->Text;

	MiListaDoble2->Modificar(MiListaDoble2->BuscarNodo(DPIBuscar), Nombre, Apellido1, Apellido2, DPI, Salario, Fecha, Departamento, Cargo);

	Refrescar();

}
private: System::Void button3_Click(System::Object^ sender, System::EventArgs^ e) {

	String^ dpi = txtDPIAsignar->Text;
	String^ curso = txtCursoAsignar->Text;

	MiListaDoble->InsertarCursos(MiListaDoble->BuscarNodo(dpi), curso);

	Refrescar();
}
private: System::Void button2_Click(System::Object^ sender, System::EventArgs^ e) {

	String^ DPIBuscar = txtDPIModDocente->Text;
	String^ Nombre = txtNombreModDocente->Text;
	String^ Apellido1 = txtApellido1ModDocente->Text;
	String^ Apellido2 = txtApellido2ModDocente->Text;
	String^ DPI = txtDPIModDocenteNuevo->Text;
	double Salario = Convert::ToDouble(txtSalarioModDocente->Text);
	String^ Fecha = txtFechaModDocente->Text;
	String^ Departamento = txtDepartamentoModDocente->Text;
	

	MiListaDoble->Modificar(MiListaDoble->BuscarNodo(DPIBuscar), Nombre, Apellido1, Apellido2, DPI, Salario, Fecha, Departamento);

	Refrescar();

}
private: System::Void button4_Click(System::Object^ sender, System::EventArgs^ e) {
	String^ dpi = txtDPIAsignar->Text;
	String^ curso = txtCursoAsignar->Text;

	MiListaDoble->EliminarCursos(MiListaDoble->BuscarNodo(dpi), curso);

	Refrescar();
}
	  

	 
};
}

