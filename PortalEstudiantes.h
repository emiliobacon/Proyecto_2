#pragma once
#include "DoublyLinkedList.h"
#include "Persona.h"
#include "Estudiante.h"
#include "Curso.h"
#include "Asignacion_EyC.h"
#include <ctime>


namespace Proyecto2MeganMorales1221120 {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace System::IO;

	/// <summary>
	/// Resumen de PortalEstudiantes
	/// </summary>
	public ref class PortalEstudiantes : public System::Windows::Forms::Form
	{
	public:
		DoublyLinkedList<Persona>* estudiantesPregrado;
		DoublyLinkedList<Persona>* estudiantesPostgrado;
		DoublyLinkedList<Persona>* trabajadorDocente;
		DoublyLinkedList<Persona>* trabajadorNoDocente;
		DoublyLinkedList<Asignacion_EyC>* listaAsignacionEyC;
		DoublyLinkedList<Curso>* listaCurso;
	private: System::Windows::Forms::Button^ button1;
	private: System::Windows::Forms::GroupBox^ groupBox5;
	private: System::Windows::Forms::GroupBox^ groupBox6;
	private: System::Windows::Forms::GroupBox^ groupBox10;
	private: System::Windows::Forms::GroupBox^ groupBox9;
	private: System::Windows::Forms::Button^ btnFacultadPregrado;
	private: System::Windows::Forms::TextBox^ txtFacultadPregrado;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::GroupBox^ groupBox8;
	private: System::Windows::Forms::Button^ btnCarnetProm;
	private: System::Windows::Forms::TextBox^ txtCarnetProm;
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::GroupBox^ groupBox7;
	private: System::Windows::Forms::Label^ label29;
	private: System::Windows::Forms::DataGridView^ dataMostrar;
		  
	public:
		
		PortalEstudiantes(DoublyLinkedList<Persona>* estudiantesPregrado, DoublyLinkedList<Persona>* estudiantesPostgrado, DoublyLinkedList<Persona>* trabajadorDocente, DoublyLinkedList<Persona>* trabajadorNoDocente, DoublyLinkedList<Curso>* listaCurso, DoublyLinkedList<Asignacion_EyC>* listaAsignacionEyC)
		{
			InitializeComponent();
			this->estudiantesPregrado = estudiantesPregrado;
			this->estudiantesPostgrado = estudiantesPostgrado;
			this->trabajadorDocente = trabajadorDocente;
			this->trabajadorNoDocente = trabajadorNoDocente;
			this->listaCurso = listaCurso;
			this->listaAsignacionEyC = listaAsignacionEyC;

			// Orden para crear las listas
			/*Estudiante* estudiantePrueba = new Estudiante("Megan", "Morales", 3016552860101, "pregrado", 1221120, "Ingeniería", 20);
			Curso* cursoPrueba = new Curso("Matemática");
			Asignacion_EyC* asignacionPrueba = new Asignacion_EyC(estudiantePrueba, cursoPrueba, 90);
			this->estudiantesPregrado->add(estudiantePrueba);
			this->listaAsignacionEyC->add(asignacionPrueba);
			this->listaCurso->add(cursoPrueba);*/
		}

	protected:
		/// <summary>
		/// Limpiar los recursos que se estén usando.
		/// </summary>
		~PortalEstudiantes()
		{
			if (components)
			{
				delete components;
			}
		}

	protected:

	private: System::Windows::Forms::Button^ btnImportarDatos;
	protected:


	private: System::Windows::Forms::TextBox^ txtBuscarDpi;
	private: System::Windows::Forms::Button^ btnBuscarDpi;















	private: System::Windows::Forms::GroupBox^ groupBox1;

	private: System::Windows::Forms::Button^ btnAgregarAlumno;
	private: System::Windows::Forms::TextBox^ txtNombre;



	private: System::Windows::Forms::Button^ btnCalcularCantidadDeAlumnos;


	private: System::Windows::Forms::Label^ label16;
	private: System::Windows::Forms::Label^ label15;
	private: System::Windows::Forms::TextBox^ txtPreOpost;

	private: System::Windows::Forms::Label^ label14;
	private: System::Windows::Forms::TextBox^ txtFacultad;

	private: System::Windows::Forms::Label^ label13;
	private: System::Windows::Forms::TextBox^ txtDpi;

	private: System::Windows::Forms::Label^ label12;
	private: System::Windows::Forms::TextBox^ txtAño;

	private: System::Windows::Forms::Label^ label10;
	private: System::Windows::Forms::TextBox^ txtApellido;

	private: System::Windows::Forms::Label^ label9;
	private: System::Windows::Forms::GroupBox^ groupBox2;
	private: System::Windows::Forms::Button^ btnCancelar;

	private: System::Windows::Forms::Button^ btnModificar;

	private: System::Windows::Forms::Label^ label20;
	private: System::Windows::Forms::Button^ btnCarnetModificar;

	private: System::Windows::Forms::Label^ label22;
	private: System::Windows::Forms::TextBox^ txtPregradoModificar;

	private: System::Windows::Forms::Label^ label23;
	private: System::Windows::Forms::TextBox^ txtFacultadModificar;

	private: System::Windows::Forms::Label^ label24;
	private: System::Windows::Forms::TextBox^ txtDpiModificar;

	private: System::Windows::Forms::Label^ label25;
	private: System::Windows::Forms::TextBox^ txtAñoModificar;

	private: System::Windows::Forms::Label^ label26;
	private: System::Windows::Forms::TextBox^ txtApellidoModificar;

	private: System::Windows::Forms::Label^ label27;
	private: System::Windows::Forms::TextBox^ txtNombreModificar;

	private: System::Windows::Forms::Label^ label21;
	private: System::Windows::Forms::TextBox^ txtCarnetModificar;

	private: System::Windows::Forms::GroupBox^ groupBox3;
	private: System::Windows::Forms::TextBox^ txtCarnetEliminar;

	private: System::Windows::Forms::Label^ label28;
	private: System::Windows::Forms::Button^ btnEliminar;


	private: System::Windows::Forms::GroupBox^ groupBox4;
	private: System::Windows::Forms::Label^ label19;
	private: System::Windows::Forms::TextBox^ txtNota;

	private: System::Windows::Forms::TextBox^ txtCarnetCursos;

	private: System::Windows::Forms::Label^ label17;
	private: System::Windows::Forms::Label^ label18;
private: System::Windows::Forms::Button^ txtAgregarCurso;

private: System::Windows::Forms::TextBox^ txtCursos;

	private: System::Windows::Forms::Button^ btnMostrarEstudiantes;

	private: System::Windows::Forms::ComboBox^ comboBoxMostrarAlumnos;


	private: System::Windows::Forms::Button^ btnExportarEstudiantes;



private: System::Windows::Forms::SaveFileDialog^ saveFileDialog1;
private: System::Windows::Forms::OpenFileDialog^ ofdImportar;








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
			System::Windows::Forms::DataGridViewCellStyle^ dataGridViewCellStyle1 = (gcnew System::Windows::Forms::DataGridViewCellStyle());
			this->btnImportarDatos = (gcnew System::Windows::Forms::Button());
			this->txtBuscarDpi = (gcnew System::Windows::Forms::TextBox());
			this->btnBuscarDpi = (gcnew System::Windows::Forms::Button());
			this->groupBox1 = (gcnew System::Windows::Forms::GroupBox());
			this->label16 = (gcnew System::Windows::Forms::Label());
			this->label15 = (gcnew System::Windows::Forms::Label());
			this->txtPreOpost = (gcnew System::Windows::Forms::TextBox());
			this->label14 = (gcnew System::Windows::Forms::Label());
			this->txtFacultad = (gcnew System::Windows::Forms::TextBox());
			this->label13 = (gcnew System::Windows::Forms::Label());
			this->txtDpi = (gcnew System::Windows::Forms::TextBox());
			this->label12 = (gcnew System::Windows::Forms::Label());
			this->txtAño = (gcnew System::Windows::Forms::TextBox());
			this->label10 = (gcnew System::Windows::Forms::Label());
			this->txtApellido = (gcnew System::Windows::Forms::TextBox());
			this->label9 = (gcnew System::Windows::Forms::Label());
			this->txtNombre = (gcnew System::Windows::Forms::TextBox());
			this->btnAgregarAlumno = (gcnew System::Windows::Forms::Button());
			this->btnCalcularCantidadDeAlumnos = (gcnew System::Windows::Forms::Button());
			this->groupBox2 = (gcnew System::Windows::Forms::GroupBox());
			this->btnCancelar = (gcnew System::Windows::Forms::Button());
			this->btnModificar = (gcnew System::Windows::Forms::Button());
			this->label20 = (gcnew System::Windows::Forms::Label());
			this->btnCarnetModificar = (gcnew System::Windows::Forms::Button());
			this->label22 = (gcnew System::Windows::Forms::Label());
			this->txtPregradoModificar = (gcnew System::Windows::Forms::TextBox());
			this->label23 = (gcnew System::Windows::Forms::Label());
			this->txtFacultadModificar = (gcnew System::Windows::Forms::TextBox());
			this->label24 = (gcnew System::Windows::Forms::Label());
			this->txtDpiModificar = (gcnew System::Windows::Forms::TextBox());
			this->label25 = (gcnew System::Windows::Forms::Label());
			this->txtAñoModificar = (gcnew System::Windows::Forms::TextBox());
			this->label26 = (gcnew System::Windows::Forms::Label());
			this->txtApellidoModificar = (gcnew System::Windows::Forms::TextBox());
			this->label27 = (gcnew System::Windows::Forms::Label());
			this->txtNombreModificar = (gcnew System::Windows::Forms::TextBox());
			this->label21 = (gcnew System::Windows::Forms::Label());
			this->txtCarnetModificar = (gcnew System::Windows::Forms::TextBox());
			this->groupBox3 = (gcnew System::Windows::Forms::GroupBox());
			this->txtCarnetEliminar = (gcnew System::Windows::Forms::TextBox());
			this->label28 = (gcnew System::Windows::Forms::Label());
			this->btnEliminar = (gcnew System::Windows::Forms::Button());
			this->groupBox4 = (gcnew System::Windows::Forms::GroupBox());
			this->label19 = (gcnew System::Windows::Forms::Label());
			this->txtNota = (gcnew System::Windows::Forms::TextBox());
			this->txtCarnetCursos = (gcnew System::Windows::Forms::TextBox());
			this->label17 = (gcnew System::Windows::Forms::Label());
			this->label18 = (gcnew System::Windows::Forms::Label());
			this->txtAgregarCurso = (gcnew System::Windows::Forms::Button());
			this->txtCursos = (gcnew System::Windows::Forms::TextBox());
			this->btnMostrarEstudiantes = (gcnew System::Windows::Forms::Button());
			this->comboBoxMostrarAlumnos = (gcnew System::Windows::Forms::ComboBox());
			this->btnExportarEstudiantes = (gcnew System::Windows::Forms::Button());
			this->saveFileDialog1 = (gcnew System::Windows::Forms::SaveFileDialog());
			this->ofdImportar = (gcnew System::Windows::Forms::OpenFileDialog());
			this->dataMostrar = (gcnew System::Windows::Forms::DataGridView());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->groupBox5 = (gcnew System::Windows::Forms::GroupBox());
			this->groupBox10 = (gcnew System::Windows::Forms::GroupBox());
			this->groupBox9 = (gcnew System::Windows::Forms::GroupBox());
			this->btnFacultadPregrado = (gcnew System::Windows::Forms::Button());
			this->txtFacultadPregrado = (gcnew System::Windows::Forms::TextBox());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->groupBox8 = (gcnew System::Windows::Forms::GroupBox());
			this->btnCarnetProm = (gcnew System::Windows::Forms::Button());
			this->txtCarnetProm = (gcnew System::Windows::Forms::TextBox());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->groupBox7 = (gcnew System::Windows::Forms::GroupBox());
			this->label29 = (gcnew System::Windows::Forms::Label());
			this->groupBox6 = (gcnew System::Windows::Forms::GroupBox());
			this->groupBox1->SuspendLayout();
			this->groupBox2->SuspendLayout();
			this->groupBox3->SuspendLayout();
			this->groupBox4->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataMostrar))->BeginInit();
			this->groupBox5->SuspendLayout();
			this->groupBox10->SuspendLayout();
			this->groupBox9->SuspendLayout();
			this->groupBox8->SuspendLayout();
			this->groupBox7->SuspendLayout();
			this->groupBox6->SuspendLayout();
			this->SuspendLayout();
			// 
			// btnImportarDatos
			// 
			this->btnImportarDatos->Font = (gcnew System::Drawing::Font(L"Papyrus", 7.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btnImportarDatos->Location = System::Drawing::Point(122, 28);
			this->btnImportarDatos->Margin = System::Windows::Forms::Padding(2, 2, 2, 2);
			this->btnImportarDatos->Name = L"btnImportarDatos";
			this->btnImportarDatos->Size = System::Drawing::Size(64, 26);
			this->btnImportarDatos->TabIndex = 1;
			this->btnImportarDatos->Text = L"Importar";
			this->btnImportarDatos->UseVisualStyleBackColor = true;
			this->btnImportarDatos->Click += gcnew System::EventHandler(this, &PortalEstudiantes::btnImportarDatos_Click);
			// 
			// txtBuscarDpi
			// 
			this->txtBuscarDpi->Location = System::Drawing::Point(38, 36);
			this->txtBuscarDpi->Margin = System::Windows::Forms::Padding(2, 2, 2, 2);
			this->txtBuscarDpi->Name = L"txtBuscarDpi";
			this->txtBuscarDpi->Size = System::Drawing::Size(76, 20);
			this->txtBuscarDpi->TabIndex = 3;
			// 
			// btnBuscarDpi
			// 
			this->btnBuscarDpi->Font = (gcnew System::Drawing::Font(L"Papyrus", 7.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btnBuscarDpi->Location = System::Drawing::Point(38, 67);
			this->btnBuscarDpi->Margin = System::Windows::Forms::Padding(2, 2, 2, 2);
			this->btnBuscarDpi->Name = L"btnBuscarDpi";
			this->btnBuscarDpi->Size = System::Drawing::Size(64, 26);
			this->btnBuscarDpi->TabIndex = 4;
			this->btnBuscarDpi->Text = L"Buscar";
			this->btnBuscarDpi->UseVisualStyleBackColor = true;
			// 
			// groupBox1
			// 
			this->groupBox1->Controls->Add(this->label16);
			this->groupBox1->Controls->Add(this->label15);
			this->groupBox1->Controls->Add(this->txtPreOpost);
			this->groupBox1->Controls->Add(this->label14);
			this->groupBox1->Controls->Add(this->txtFacultad);
			this->groupBox1->Controls->Add(this->label13);
			this->groupBox1->Controls->Add(this->txtDpi);
			this->groupBox1->Controls->Add(this->label12);
			this->groupBox1->Controls->Add(this->txtAño);
			this->groupBox1->Controls->Add(this->label10);
			this->groupBox1->Controls->Add(this->txtApellido);
			this->groupBox1->Controls->Add(this->label9);
			this->groupBox1->Controls->Add(this->txtNombre);
			this->groupBox1->Controls->Add(this->btnAgregarAlumno);
			this->groupBox1->Location = System::Drawing::Point(14, 27);
			this->groupBox1->Margin = System::Windows::Forms::Padding(2, 2, 2, 2);
			this->groupBox1->Name = L"groupBox1";
			this->groupBox1->Padding = System::Windows::Forms::Padding(2, 2, 2, 2);
			this->groupBox1->Size = System::Drawing::Size(215, 296);
			this->groupBox1->TabIndex = 13;
			this->groupBox1->TabStop = false;
			this->groupBox1->Text = L"Agregar nuevo estudiante";
			// 
			// label16
			// 
			this->label16->AutoSize = true;
			this->label16->Font = (gcnew System::Drawing::Font(L"Papyrus", 7.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label16->Location = System::Drawing::Point(28, 197);
			this->label16->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label16->Name = L"label16";
			this->label16->Size = System::Drawing::Size(72, 18);
			this->label16->TabIndex = 33;
			this->label16->Text = L"o doctorado:";
			// 
			// label15
			// 
			this->label15->AutoSize = true;
			this->label15->Font = (gcnew System::Drawing::Font(L"Papyrus", 7.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label15->Location = System::Drawing::Point(11, 179);
			this->label15->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label15->Name = L"label15";
			this->label15->Size = System::Drawing::Size(117, 18);
			this->label15->TabIndex = 32;
			this->label15->Text = L"Pregrado o postgrado";
			// 
			// txtPreOpost
			// 
			this->txtPreOpost->Location = System::Drawing::Point(134, 179);
			this->txtPreOpost->Margin = System::Windows::Forms::Padding(2, 2, 2, 2);
			this->txtPreOpost->Name = L"txtPreOpost";
			this->txtPreOpost->Size = System::Drawing::Size(76, 20);
			this->txtPreOpost->TabIndex = 31;
			// 
			// label14
			// 
			this->label14->AutoSize = true;
			this->label14->Font = (gcnew System::Drawing::Font(L"Papyrus", 7.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label14->Location = System::Drawing::Point(11, 151);
			this->label14->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label14->Name = L"label14";
			this->label14->Size = System::Drawing::Size(53, 18);
			this->label14->TabIndex = 30;
			this->label14->Text = L"Facultad:";
			// 
			// txtFacultad
			// 
			this->txtFacultad->Location = System::Drawing::Point(134, 151);
			this->txtFacultad->Margin = System::Windows::Forms::Padding(2, 2, 2, 2);
			this->txtFacultad->Name = L"txtFacultad";
			this->txtFacultad->Size = System::Drawing::Size(76, 20);
			this->txtFacultad->TabIndex = 29;
			// 
			// label13
			// 
			this->label13->AutoSize = true;
			this->label13->Font = (gcnew System::Drawing::Font(L"Papyrus", 7.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label13->Location = System::Drawing::Point(11, 120);
			this->label13->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label13->Name = L"label13";
			this->label13->Size = System::Drawing::Size(31, 18);
			this->label13->TabIndex = 28;
			this->label13->Text = L"DPI:";
			// 
			// txtDpi
			// 
			this->txtDpi->Location = System::Drawing::Point(134, 120);
			this->txtDpi->Margin = System::Windows::Forms::Padding(2, 2, 2, 2);
			this->txtDpi->Name = L"txtDpi";
			this->txtDpi->Size = System::Drawing::Size(76, 20);
			this->txtDpi->TabIndex = 27;
			// 
			// label12
			// 
			this->label12->AutoSize = true;
			this->label12->Font = (gcnew System::Drawing::Font(L"Papyrus", 7.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label12->Location = System::Drawing::Point(11, 92);
			this->label12->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label12->Name = L"label12";
			this->label12->Size = System::Drawing::Size(88, 18);
			this->label12->TabIndex = 26;
			this->label12->Text = L"Año de ingreso:";
			// 
			// txtAño
			// 
			this->txtAño->Location = System::Drawing::Point(134, 92);
			this->txtAño->Margin = System::Windows::Forms::Padding(2, 2, 2, 2);
			this->txtAño->Name = L"txtAño";
			this->txtAño->Size = System::Drawing::Size(76, 20);
			this->txtAño->TabIndex = 25;
			// 
			// label10
			// 
			this->label10->AutoSize = true;
			this->label10->Font = (gcnew System::Drawing::Font(L"Papyrus", 7.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label10->Location = System::Drawing::Point(11, 58);
			this->label10->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label10->Name = L"label10";
			this->label10->Size = System::Drawing::Size(62, 18);
			this->label10->TabIndex = 24;
			this->label10->Text = L"Apellidos:";
			// 
			// txtApellido
			// 
			this->txtApellido->Location = System::Drawing::Point(134, 58);
			this->txtApellido->Margin = System::Windows::Forms::Padding(2, 2, 2, 2);
			this->txtApellido->Name = L"txtApellido";
			this->txtApellido->Size = System::Drawing::Size(76, 20);
			this->txtApellido->TabIndex = 23;
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
			// txtNombre
			// 
			this->txtNombre->Location = System::Drawing::Point(134, 30);
			this->txtNombre->Margin = System::Windows::Forms::Padding(2, 2, 2, 2);
			this->txtNombre->Name = L"txtNombre";
			this->txtNombre->Size = System::Drawing::Size(76, 20);
			this->txtNombre->TabIndex = 15;
			// 
			// btnAgregarAlumno
			// 
			this->btnAgregarAlumno->Font = (gcnew System::Drawing::Font(L"Papyrus", 7.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btnAgregarAlumno->Location = System::Drawing::Point(78, 236);
			this->btnAgregarAlumno->Margin = System::Windows::Forms::Padding(2, 2, 2, 2);
			this->btnAgregarAlumno->Name = L"btnAgregarAlumno";
			this->btnAgregarAlumno->Size = System::Drawing::Size(78, 26);
			this->btnAgregarAlumno->TabIndex = 16;
			this->btnAgregarAlumno->Text = L"Agregar";
			this->btnAgregarAlumno->UseVisualStyleBackColor = true;
			this->btnAgregarAlumno->Click += gcnew System::EventHandler(this, &PortalEstudiantes::btnAgregarAlumno_Click);
			// 
			// btnCalcularCantidadDeAlumnos
			// 
			this->btnCalcularCantidadDeAlumnos->Font = (gcnew System::Drawing::Font(L"Papyrus", 7.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btnCalcularCantidadDeAlumnos->Location = System::Drawing::Point(41, 67);
			this->btnCalcularCantidadDeAlumnos->Margin = System::Windows::Forms::Padding(2, 2, 2, 2);
			this->btnCalcularCantidadDeAlumnos->Name = L"btnCalcularCantidadDeAlumnos";
			this->btnCalcularCantidadDeAlumnos->Size = System::Drawing::Size(60, 26);
			this->btnCalcularCantidadDeAlumnos->TabIndex = 20;
			this->btnCalcularCantidadDeAlumnos->Text = L"Calcular";
			this->btnCalcularCantidadDeAlumnos->UseVisualStyleBackColor = true;
			// 
			// groupBox2
			// 
			this->groupBox2->Controls->Add(this->btnCancelar);
			this->groupBox2->Controls->Add(this->btnModificar);
			this->groupBox2->Controls->Add(this->label20);
			this->groupBox2->Controls->Add(this->btnCarnetModificar);
			this->groupBox2->Controls->Add(this->label22);
			this->groupBox2->Controls->Add(this->txtPregradoModificar);
			this->groupBox2->Controls->Add(this->label23);
			this->groupBox2->Controls->Add(this->txtFacultadModificar);
			this->groupBox2->Controls->Add(this->label24);
			this->groupBox2->Controls->Add(this->txtDpiModificar);
			this->groupBox2->Controls->Add(this->label25);
			this->groupBox2->Controls->Add(this->txtAñoModificar);
			this->groupBox2->Controls->Add(this->label26);
			this->groupBox2->Controls->Add(this->txtApellidoModificar);
			this->groupBox2->Controls->Add(this->label27);
			this->groupBox2->Controls->Add(this->txtNombreModificar);
			this->groupBox2->Controls->Add(this->label21);
			this->groupBox2->Controls->Add(this->txtCarnetModificar);
			this->groupBox2->Location = System::Drawing::Point(14, 333);
			this->groupBox2->Margin = System::Windows::Forms::Padding(2, 2, 2, 2);
			this->groupBox2->Name = L"groupBox2";
			this->groupBox2->Padding = System::Windows::Forms::Padding(2, 2, 2, 2);
			this->groupBox2->Size = System::Drawing::Size(215, 296);
			this->groupBox2->TabIndex = 14;
			this->groupBox2->TabStop = false;
			this->groupBox2->Text = L"Modificar estudiante";
			// 
			// btnCancelar
			// 
			this->btnCancelar->Font = (gcnew System::Drawing::Font(L"Papyrus", 7.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btnCancelar->Location = System::Drawing::Point(119, 265);
			this->btnCancelar->Margin = System::Windows::Forms::Padding(2, 2, 2, 2);
			this->btnCancelar->Name = L"btnCancelar";
			this->btnCancelar->Size = System::Drawing::Size(69, 26);
			this->btnCancelar->TabIndex = 59;
			this->btnCancelar->Text = L"Cancelar";
			this->btnCancelar->UseVisualStyleBackColor = true;
			// 
			// btnModificar
			// 
			this->btnModificar->Font = (gcnew System::Drawing::Font(L"Papyrus", 7.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btnModificar->Location = System::Drawing::Point(46, 265);
			this->btnModificar->Margin = System::Windows::Forms::Padding(2, 2, 2, 2);
			this->btnModificar->Name = L"btnModificar";
			this->btnModificar->Size = System::Drawing::Size(69, 26);
			this->btnModificar->TabIndex = 43;
			this->btnModificar->Text = L"Modificar";
			this->btnModificar->UseVisualStyleBackColor = true;
			// 
			// label20
			// 
			this->label20->AutoSize = true;
			this->label20->Font = (gcnew System::Drawing::Font(L"Papyrus", 7.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label20->Location = System::Drawing::Point(34, 234);
			this->label20->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label20->Name = L"label20";
			this->label20->Size = System::Drawing::Size(72, 18);
			this->label20->TabIndex = 58;
			this->label20->Text = L"o doctorado:";
			// 
			// btnCarnetModificar
			// 
			this->btnCarnetModificar->Font = (gcnew System::Drawing::Font(L"Papyrus", 7.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btnCarnetModificar->Location = System::Drawing::Point(156, 25);
			this->btnCarnetModificar->Margin = System::Windows::Forms::Padding(2, 2, 2, 2);
			this->btnCarnetModificar->Name = L"btnCarnetModificar";
			this->btnCarnetModificar->Size = System::Drawing::Size(39, 26);
			this->btnCarnetModificar->TabIndex = 41;
			this->btnCarnetModificar->Text = L"Ir";
			this->btnCarnetModificar->UseVisualStyleBackColor = true;
			// 
			// label22
			// 
			this->label22->AutoSize = true;
			this->label22->Font = (gcnew System::Drawing::Font(L"Papyrus", 7.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label22->Location = System::Drawing::Point(17, 216);
			this->label22->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label22->Name = L"label22";
			this->label22->Size = System::Drawing::Size(117, 18);
			this->label22->TabIndex = 57;
			this->label22->Text = L"Pregrado o postgrado";
			// 
			// txtPregradoModificar
			// 
			this->txtPregradoModificar->Location = System::Drawing::Point(134, 216);
			this->txtPregradoModificar->Margin = System::Windows::Forms::Padding(2, 2, 2, 2);
			this->txtPregradoModificar->Name = L"txtPregradoModificar";
			this->txtPregradoModificar->Size = System::Drawing::Size(76, 20);
			this->txtPregradoModificar->TabIndex = 56;
			// 
			// label23
			// 
			this->label23->AutoSize = true;
			this->label23->Font = (gcnew System::Drawing::Font(L"Papyrus", 7.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label23->Location = System::Drawing::Point(17, 188);
			this->label23->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label23->Name = L"label23";
			this->label23->Size = System::Drawing::Size(53, 18);
			this->label23->TabIndex = 55;
			this->label23->Text = L"Facultad:";
			// 
			// txtFacultadModificar
			// 
			this->txtFacultadModificar->Location = System::Drawing::Point(134, 188);
			this->txtFacultadModificar->Margin = System::Windows::Forms::Padding(2, 2, 2, 2);
			this->txtFacultadModificar->Name = L"txtFacultadModificar";
			this->txtFacultadModificar->Size = System::Drawing::Size(76, 20);
			this->txtFacultadModificar->TabIndex = 54;
			// 
			// label24
			// 
			this->label24->AutoSize = true;
			this->label24->Font = (gcnew System::Drawing::Font(L"Papyrus", 7.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label24->Location = System::Drawing::Point(17, 158);
			this->label24->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label24->Name = L"label24";
			this->label24->Size = System::Drawing::Size(31, 18);
			this->label24->TabIndex = 53;
			this->label24->Text = L"DPI:";
			// 
			// txtDpiModificar
			// 
			this->txtDpiModificar->Location = System::Drawing::Point(134, 158);
			this->txtDpiModificar->Margin = System::Windows::Forms::Padding(2, 2, 2, 2);
			this->txtDpiModificar->Name = L"txtDpiModificar";
			this->txtDpiModificar->Size = System::Drawing::Size(76, 20);
			this->txtDpiModificar->TabIndex = 52;
			// 
			// label25
			// 
			this->label25->AutoSize = true;
			this->label25->Font = (gcnew System::Drawing::Font(L"Papyrus", 7.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label25->Location = System::Drawing::Point(17, 129);
			this->label25->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label25->Name = L"label25";
			this->label25->Size = System::Drawing::Size(88, 18);
			this->label25->TabIndex = 51;
			this->label25->Text = L"Año de ingreso:";
			// 
			// txtAñoModificar
			// 
			this->txtAñoModificar->Location = System::Drawing::Point(134, 129);
			this->txtAñoModificar->Margin = System::Windows::Forms::Padding(2, 2, 2, 2);
			this->txtAñoModificar->Name = L"txtAñoModificar";
			this->txtAñoModificar->Size = System::Drawing::Size(76, 20);
			this->txtAñoModificar->TabIndex = 50;
			// 
			// label26
			// 
			this->label26->AutoSize = true;
			this->label26->Font = (gcnew System::Drawing::Font(L"Papyrus", 7.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label26->Location = System::Drawing::Point(17, 96);
			this->label26->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label26->Name = L"label26";
			this->label26->Size = System::Drawing::Size(62, 18);
			this->label26->TabIndex = 49;
			this->label26->Text = L"Apellidos:";
			// 
			// txtApellidoModificar
			// 
			this->txtApellidoModificar->Location = System::Drawing::Point(134, 96);
			this->txtApellidoModificar->Margin = System::Windows::Forms::Padding(2, 2, 2, 2);
			this->txtApellidoModificar->Name = L"txtApellidoModificar";
			this->txtApellidoModificar->Size = System::Drawing::Size(76, 20);
			this->txtApellidoModificar->TabIndex = 48;
			// 
			// label27
			// 
			this->label27->AutoSize = true;
			this->label27->Font = (gcnew System::Drawing::Font(L"Papyrus", 7.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label27->Location = System::Drawing::Point(17, 67);
			this->label27->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label27->Name = L"label27";
			this->label27->Size = System::Drawing::Size(53, 18);
			this->label27->TabIndex = 47;
			this->label27->Text = L"Nombre:";
			// 
			// txtNombreModificar
			// 
			this->txtNombreModificar->Location = System::Drawing::Point(134, 67);
			this->txtNombreModificar->Margin = System::Windows::Forms::Padding(2, 2, 2, 2);
			this->txtNombreModificar->Name = L"txtNombreModificar";
			this->txtNombreModificar->Size = System::Drawing::Size(76, 20);
			this->txtNombreModificar->TabIndex = 46;
			// 
			// label21
			// 
			this->label21->AutoSize = true;
			this->label21->Font = (gcnew System::Drawing::Font(L"Papyrus", 7.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label21->Location = System::Drawing::Point(17, 32);
			this->label21->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label21->Name = L"label21";
			this->label21->Size = System::Drawing::Size(46, 18);
			this->label21->TabIndex = 44;
			this->label21->Text = L"Carnet:";
			// 
			// txtCarnetModificar
			// 
			this->txtCarnetModificar->Location = System::Drawing::Point(66, 28);
			this->txtCarnetModificar->Margin = System::Windows::Forms::Padding(2, 2, 2, 2);
			this->txtCarnetModificar->Name = L"txtCarnetModificar";
			this->txtCarnetModificar->Size = System::Drawing::Size(76, 20);
			this->txtCarnetModificar->TabIndex = 45;
			// 
			// groupBox3
			// 
			this->groupBox3->Controls->Add(this->txtCarnetEliminar);
			this->groupBox3->Controls->Add(this->label28);
			this->groupBox3->Controls->Add(this->btnEliminar);
			this->groupBox3->Location = System::Drawing::Point(247, 32);
			this->groupBox3->Margin = System::Windows::Forms::Padding(2, 2, 2, 2);
			this->groupBox3->Name = L"groupBox3";
			this->groupBox3->Padding = System::Windows::Forms::Padding(2, 2, 2, 2);
			this->groupBox3->Size = System::Drawing::Size(136, 117);
			this->groupBox3->TabIndex = 14;
			this->groupBox3->TabStop = false;
			this->groupBox3->Text = L"Eliminar estudiante";
			// 
			// txtCarnetEliminar
			// 
			this->txtCarnetEliminar->Location = System::Drawing::Point(54, 32);
			this->txtCarnetEliminar->Margin = System::Windows::Forms::Padding(2, 2, 2, 2);
			this->txtCarnetEliminar->Name = L"txtCarnetEliminar";
			this->txtCarnetEliminar->Size = System::Drawing::Size(76, 20);
			this->txtCarnetEliminar->TabIndex = 42;
			// 
			// label28
			// 
			this->label28->AutoSize = true;
			this->label28->Font = (gcnew System::Drawing::Font(L"Papyrus", 7.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label28->Location = System::Drawing::Point(5, 36);
			this->label28->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label28->Name = L"label28";
			this->label28->Size = System::Drawing::Size(46, 18);
			this->label28->TabIndex = 41;
			this->label28->Text = L"Carnet:";
			// 
			// btnEliminar
			// 
			this->btnEliminar->Font = (gcnew System::Drawing::Font(L"Papyrus", 7.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btnEliminar->Location = System::Drawing::Point(47, 68);
			this->btnEliminar->Margin = System::Windows::Forms::Padding(2, 2, 2, 2);
			this->btnEliminar->Name = L"btnEliminar";
			this->btnEliminar->Size = System::Drawing::Size(69, 26);
			this->btnEliminar->TabIndex = 42;
			this->btnEliminar->Text = L"Eliminar";
			this->btnEliminar->UseVisualStyleBackColor = true;
			// 
			// groupBox4
			// 
			this->groupBox4->Controls->Add(this->label19);
			this->groupBox4->Controls->Add(this->txtNota);
			this->groupBox4->Controls->Add(this->txtCarnetCursos);
			this->groupBox4->Controls->Add(this->label17);
			this->groupBox4->Controls->Add(this->label18);
			this->groupBox4->Controls->Add(this->txtAgregarCurso);
			this->groupBox4->Controls->Add(this->txtCursos);
			this->groupBox4->Location = System::Drawing::Point(247, 152);
			this->groupBox4->Margin = System::Windows::Forms::Padding(2, 2, 2, 2);
			this->groupBox4->Name = L"groupBox4";
			this->groupBox4->Padding = System::Windows::Forms::Padding(2, 2, 2, 2);
			this->groupBox4->Size = System::Drawing::Size(136, 169);
			this->groupBox4->TabIndex = 15;
			this->groupBox4->TabStop = false;
			this->groupBox4->Text = L"Agregar cursos a un estudiante";
			// 
			// label19
			// 
			this->label19->AutoSize = true;
			this->label19->Font = (gcnew System::Drawing::Font(L"Papyrus", 7.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label19->Location = System::Drawing::Point(3, 99);
			this->label19->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label19->Name = L"label19";
			this->label19->Size = System::Drawing::Size(36, 18);
			this->label19->TabIndex = 40;
			this->label19->Text = L"Nota:";
			// 
			// txtNota
			// 
			this->txtNota->Location = System::Drawing::Point(54, 98);
			this->txtNota->Margin = System::Windows::Forms::Padding(2, 2, 2, 2);
			this->txtNota->Name = L"txtNota";
			this->txtNota->Size = System::Drawing::Size(76, 20);
			this->txtNota->TabIndex = 39;
			// 
			// txtCarnetCursos
			// 
			this->txtCarnetCursos->Location = System::Drawing::Point(54, 36);
			this->txtCarnetCursos->Margin = System::Windows::Forms::Padding(2, 2, 2, 2);
			this->txtCarnetCursos->Name = L"txtCarnetCursos";
			this->txtCarnetCursos->Size = System::Drawing::Size(76, 20);
			this->txtCarnetCursos->TabIndex = 38;
			// 
			// label17
			// 
			this->label17->AutoSize = true;
			this->label17->Font = (gcnew System::Drawing::Font(L"Papyrus", 7.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label17->Location = System::Drawing::Point(5, 39);
			this->label17->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label17->Name = L"label17";
			this->label17->Size = System::Drawing::Size(46, 18);
			this->label17->TabIndex = 37;
			this->label17->Text = L"Carnet:";
			// 
			// label18
			// 
			this->label18->AutoSize = true;
			this->label18->Font = (gcnew System::Drawing::Font(L"Papyrus", 7.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label18->Location = System::Drawing::Point(3, 66);
			this->label18->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label18->Name = L"label18";
			this->label18->Size = System::Drawing::Size(48, 18);
			this->label18->TabIndex = 36;
			this->label18->Text = L"Cursos:";
			// 
			// txtAgregarCurso
			// 
			this->txtAgregarCurso->Font = (gcnew System::Drawing::Font(L"Papyrus", 7.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->txtAgregarCurso->Location = System::Drawing::Point(31, 130);
			this->txtAgregarCurso->Margin = System::Windows::Forms::Padding(2, 2, 2, 2);
			this->txtAgregarCurso->Name = L"txtAgregarCurso";
			this->txtAgregarCurso->Size = System::Drawing::Size(68, 26);
			this->txtAgregarCurso->TabIndex = 34;
			this->txtAgregarCurso->Text = L"Agregar";
			this->txtAgregarCurso->UseVisualStyleBackColor = true;
			// 
			// txtCursos
			// 
			this->txtCursos->Location = System::Drawing::Point(54, 64);
			this->txtCursos->Margin = System::Windows::Forms::Padding(2, 2, 2, 2);
			this->txtCursos->Name = L"txtCursos";
			this->txtCursos->Size = System::Drawing::Size(76, 20);
			this->txtCursos->TabIndex = 35;
			// 
			// btnMostrarEstudiantes
			// 
			this->btnMostrarEstudiantes->Font = (gcnew System::Drawing::Font(L"Papyrus", 7.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btnMostrarEstudiantes->Location = System::Drawing::Point(16, 58);
			this->btnMostrarEstudiantes->Margin = System::Windows::Forms::Padding(2, 2, 2, 2);
			this->btnMostrarEstudiantes->Name = L"btnMostrarEstudiantes";
			this->btnMostrarEstudiantes->Size = System::Drawing::Size(64, 26);
			this->btnMostrarEstudiantes->TabIndex = 23;
			this->btnMostrarEstudiantes->Text = L"Mostrar";
			this->btnMostrarEstudiantes->UseVisualStyleBackColor = true;
			// 
			// comboBoxMostrarAlumnos
			// 
			this->comboBoxMostrarAlumnos->FormattingEnabled = true;
			this->comboBoxMostrarAlumnos->Location = System::Drawing::Point(5, 28);
			this->comboBoxMostrarAlumnos->Margin = System::Windows::Forms::Padding(2, 2, 2, 2);
			this->comboBoxMostrarAlumnos->Name = L"comboBoxMostrarAlumnos";
			this->comboBoxMostrarAlumnos->Size = System::Drawing::Size(92, 21);
			this->comboBoxMostrarAlumnos->TabIndex = 24;
			// 
			// btnExportarEstudiantes
			// 
			this->btnExportarEstudiantes->Font = (gcnew System::Drawing::Font(L"Papyrus", 7.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btnExportarEstudiantes->Location = System::Drawing::Point(122, 58);
			this->btnExportarEstudiantes->Margin = System::Windows::Forms::Padding(2, 2, 2, 2);
			this->btnExportarEstudiantes->Name = L"btnExportarEstudiantes";
			this->btnExportarEstudiantes->Size = System::Drawing::Size(64, 26);
			this->btnExportarEstudiantes->TabIndex = 61;
			this->btnExportarEstudiantes->Text = L"Exportar";
			this->btnExportarEstudiantes->UseVisualStyleBackColor = true;
			// 
			// ofdImportar
			// 
			this->ofdImportar->FileName = L"openFileDialog1";
			// 
			// dataMostrar
			// 
			dataGridViewCellStyle1->Alignment = System::Windows::Forms::DataGridViewContentAlignment::MiddleCenter;
			dataGridViewCellStyle1->BackColor = System::Drawing::SystemColors::Control;
			dataGridViewCellStyle1->Font = (gcnew System::Drawing::Font(L"Papyrus", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			dataGridViewCellStyle1->ForeColor = System::Drawing::SystemColors::WindowText;
			dataGridViewCellStyle1->SelectionBackColor = System::Drawing::SystemColors::Highlight;
			dataGridViewCellStyle1->SelectionForeColor = System::Drawing::SystemColors::HighlightText;
			dataGridViewCellStyle1->WrapMode = System::Windows::Forms::DataGridViewTriState::True;
			this->dataMostrar->ColumnHeadersDefaultCellStyle = dataGridViewCellStyle1;
			this->dataMostrar->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dataMostrar->Location = System::Drawing::Point(9, 124);
			this->dataMostrar->Margin = System::Windows::Forms::Padding(2, 2, 2, 2);
			this->dataMostrar->Name = L"dataMostrar";
			this->dataMostrar->RowHeadersWidth = 51;
			this->dataMostrar->RowTemplate->Height = 24;
			this->dataMostrar->Size = System::Drawing::Size(692, 563);
			this->dataMostrar->TabIndex = 64;
			// 
			// button1
			// 
			this->button1->Font = (gcnew System::Drawing::Font(L"Papyrus", 7.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button1->Location = System::Drawing::Point(1172, 10);
			this->button1->Margin = System::Windows::Forms::Padding(2, 2, 2, 2);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(81, 26);
			this->button1->TabIndex = 65;
			this->button1->Text = L"Volver";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &PortalEstudiantes::button1_Click);
			// 
			// groupBox5
			// 
			this->groupBox5->Controls->Add(this->groupBox10);
			this->groupBox5->Controls->Add(this->groupBox9);
			this->groupBox5->Controls->Add(this->groupBox8);
			this->groupBox5->Controls->Add(this->groupBox7);
			this->groupBox5->Controls->Add(this->groupBox3);
			this->groupBox5->Controls->Add(this->groupBox4);
			this->groupBox5->Controls->Add(this->groupBox2);
			this->groupBox5->Controls->Add(this->groupBox1);
			this->groupBox5->Location = System::Drawing::Point(719, 40);
			this->groupBox5->Margin = System::Windows::Forms::Padding(2, 2, 2, 2);
			this->groupBox5->Name = L"groupBox5";
			this->groupBox5->Padding = System::Windows::Forms::Padding(2, 2, 2, 2);
			this->groupBox5->Size = System::Drawing::Size(543, 648);
			this->groupBox5->TabIndex = 66;
			this->groupBox5->TabStop = false;
			this->groupBox5->Text = L"Gestionar estudiantes";
			// 
			// groupBox10
			// 
			this->groupBox10->Controls->Add(this->btnCalcularCantidadDeAlumnos);
			this->groupBox10->Location = System::Drawing::Point(396, 359);
			this->groupBox10->Margin = System::Windows::Forms::Padding(2, 2, 2, 2);
			this->groupBox10->Name = L"groupBox10";
			this->groupBox10->Padding = System::Windows::Forms::Padding(2, 2, 2, 2);
			this->groupBox10->Size = System::Drawing::Size(136, 113);
			this->groupBox10->TabIndex = 44;
			this->groupBox10->TabStop = false;
			this->groupBox10->Text = L"Calcular la cantidad de alumnos en postgrado";
			// 
			// groupBox9
			// 
			this->groupBox9->Controls->Add(this->btnFacultadPregrado);
			this->groupBox9->Controls->Add(this->txtFacultadPregrado);
			this->groupBox9->Controls->Add(this->label2);
			this->groupBox9->Location = System::Drawing::Point(396, 152);
			this->groupBox9->Margin = System::Windows::Forms::Padding(2, 2, 2, 2);
			this->groupBox9->Name = L"groupBox9";
			this->groupBox9->Padding = System::Windows::Forms::Padding(2, 2, 2, 2);
			this->groupBox9->Size = System::Drawing::Size(136, 204);
			this->groupBox9->TabIndex = 43;
			this->groupBox9->TabStop = false;
			this->groupBox9->Text = L"Buscar por medio de facultad";
			// 
			// btnFacultadPregrado
			// 
			this->btnFacultadPregrado->Font = (gcnew System::Drawing::Font(L"Papyrus", 7.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btnFacultadPregrado->Location = System::Drawing::Point(41, 113);
			this->btnFacultadPregrado->Margin = System::Windows::Forms::Padding(2, 2, 2, 2);
			this->btnFacultadPregrado->Name = L"btnFacultadPregrado";
			this->btnFacultadPregrado->Size = System::Drawing::Size(60, 26);
			this->btnFacultadPregrado->TabIndex = 43;
			this->btnFacultadPregrado->Text = L"Buscar";
			this->btnFacultadPregrado->UseVisualStyleBackColor = true;
			// 
			// txtFacultadPregrado
			// 
			this->txtFacultadPregrado->Location = System::Drawing::Point(56, 78);
			this->txtFacultadPregrado->Margin = System::Windows::Forms::Padding(2, 2, 2, 2);
			this->txtFacultadPregrado->Name = L"txtFacultadPregrado";
			this->txtFacultadPregrado->Size = System::Drawing::Size(76, 20);
			this->txtFacultadPregrado->TabIndex = 42;
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Font = (gcnew System::Drawing::Font(L"Papyrus", 7.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label2->Location = System::Drawing::Point(4, 78);
			this->label2->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(55, 18);
			this->label2->TabIndex = 41;
			this->label2->Text = L"Facultad: ";
			// 
			// groupBox8
			// 
			this->groupBox8->Controls->Add(this->btnCarnetProm);
			this->groupBox8->Controls->Add(this->txtCarnetProm);
			this->groupBox8->Controls->Add(this->label1);
			this->groupBox8->Location = System::Drawing::Point(247, 434);
			this->groupBox8->Margin = System::Windows::Forms::Padding(2, 2, 2, 2);
			this->groupBox8->Name = L"groupBox8";
			this->groupBox8->Padding = System::Windows::Forms::Padding(2, 2, 2, 2);
			this->groupBox8->Size = System::Drawing::Size(136, 195);
			this->groupBox8->TabIndex = 45;
			this->groupBox8->TabStop = false;
			this->groupBox8->Text = L"Calcular promedio y el curso con la nota más alta ";
			// 
			// btnCarnetProm
			// 
			this->btnCarnetProm->Font = (gcnew System::Drawing::Font(L"Papyrus", 7.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btnCarnetProm->Location = System::Drawing::Point(31, 115);
			this->btnCarnetProm->Margin = System::Windows::Forms::Padding(2, 2, 2, 2);
			this->btnCarnetProm->Name = L"btnCarnetProm";
			this->btnCarnetProm->Size = System::Drawing::Size(62, 26);
			this->btnCarnetProm->TabIndex = 46;
			this->btnCarnetProm->Text = L"Calcular";
			this->btnCarnetProm->UseVisualStyleBackColor = true;
			// 
			// txtCarnetProm
			// 
			this->txtCarnetProm->Location = System::Drawing::Point(30, 86);
			this->txtCarnetProm->Margin = System::Windows::Forms::Padding(2, 2, 2, 2);
			this->txtCarnetProm->Name = L"txtCarnetProm";
			this->txtCarnetProm->Size = System::Drawing::Size(76, 20);
			this->txtCarnetProm->TabIndex = 45;
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Papyrus", 7.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->Location = System::Drawing::Point(42, 58);
			this->label1->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(48, 18);
			this->label1->TabIndex = 44;
			this->label1->Text = L"Carnet: ";
			// 
			// groupBox7
			// 
			this->groupBox7->Controls->Add(this->label29);
			this->groupBox7->Controls->Add(this->txtBuscarDpi);
			this->groupBox7->Controls->Add(this->btnBuscarDpi);
			this->groupBox7->Location = System::Drawing::Point(247, 324);
			this->groupBox7->Margin = System::Windows::Forms::Padding(2, 2, 2, 2);
			this->groupBox7->Name = L"groupBox7";
			this->groupBox7->Padding = System::Windows::Forms::Padding(2, 2, 2, 2);
			this->groupBox7->Size = System::Drawing::Size(136, 105);
			this->groupBox7->TabIndex = 43;
			this->groupBox7->TabStop = false;
			this->groupBox7->Text = L"Buscar estudiante";
			// 
			// label29
			// 
			this->label29->AutoSize = true;
			this->label29->Font = (gcnew System::Drawing::Font(L"Papyrus", 7.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label29->Location = System::Drawing::Point(4, 33);
			this->label29->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label29->Name = L"label29";
			this->label29->Size = System::Drawing::Size(31, 18);
			this->label29->TabIndex = 44;
			this->label29->Text = L"Dpi:";
			// 
			// groupBox6
			// 
			this->groupBox6->Controls->Add(this->comboBoxMostrarAlumnos);
			this->groupBox6->Controls->Add(this->btnMostrarEstudiantes);
			this->groupBox6->Controls->Add(this->btnExportarEstudiantes);
			this->groupBox6->Controls->Add(this->btnImportarDatos);
			this->groupBox6->Location = System::Drawing::Point(9, 10);
			this->groupBox6->Margin = System::Windows::Forms::Padding(2, 2, 2, 2);
			this->groupBox6->Name = L"groupBox6";
			this->groupBox6->Padding = System::Windows::Forms::Padding(2, 2, 2, 2);
			this->groupBox6->Size = System::Drawing::Size(209, 102);
			this->groupBox6->TabIndex = 67;
			this->groupBox6->TabStop = false;
			this->groupBox6->Text = L"Mostrar";
			// 
			// PortalEstudiantes
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::SystemColors::ControlLightLight;
			this->ClientSize = System::Drawing::Size(1274, 697);
			this->Controls->Add(this->groupBox6);
			this->Controls->Add(this->groupBox5);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->dataMostrar);
			this->Margin = System::Windows::Forms::Padding(2, 2, 2, 2);
			this->Name = L"PortalEstudiantes";
			this->Text = L"Portal de estudiantes";
			this->Load += gcnew System::EventHandler(this, &PortalEstudiantes::PortalEstudiantes_Load);
			this->groupBox1->ResumeLayout(false);
			this->groupBox1->PerformLayout();
			this->groupBox2->ResumeLayout(false);
			this->groupBox2->PerformLayout();
			this->groupBox3->ResumeLayout(false);
			this->groupBox3->PerformLayout();
			this->groupBox4->ResumeLayout(false);
			this->groupBox4->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataMostrar))->EndInit();
			this->groupBox5->ResumeLayout(false);
			this->groupBox10->ResumeLayout(false);
			this->groupBox9->ResumeLayout(false);
			this->groupBox9->PerformLayout();
			this->groupBox8->ResumeLayout(false);
			this->groupBox8->PerformLayout();
			this->groupBox7->ResumeLayout(false);
			this->groupBox7->PerformLayout();
			this->groupBox6->ResumeLayout(false);
			this->ResumeLayout(false);

		}
#pragma endregion
private: void ReestablecerMatriz() {
	dataMostrar->Rows->Clear();
	dataMostrar->Columns->Clear();
	dataMostrar->RowHeadersVisible = false;
	
};
private: int generarCarnet(String^ añoIngreso) {
		srand(time(NULL));

		int numeroAleatroio = rand() % (99999 - 10000 + 1) + 10000;
		String^ concatenacion = Convert::ToString(numeroAleatroio) + añoIngreso->Substring(2,2);
		return Convert::ToInt64(concatenacion);

	}

private: System::Void PortalEstudiantes_Load(System::Object^ sender, System::EventArgs^ e) {
	}
private: System::Void btnImportarDatos_Click(System::Object^ sender, System::EventArgs^ e) {
	ofdImportar->Filter = "Archivos separados por coma (csv) | *.csv";
	ofdImportar->FileName = "";

	//Unicamnte si el reultado de la apertura del archivo es exitosa se carga el archivo
	if (ofdImportar->ShowDialog() == System::Windows::Forms::DialogResult::OK) {
		ReestablecerMatriz(); //Se elimina cualquier contenido de la matriz

		//Se utiliza el objeto File para leer el archivo solo cuando el FileName es correcto
		//Importante haber llamado al namespace System::IO antes de usar File
		array<String^>^ archivoLineas = File::ReadAllLines(ofdImportar->FileName);

		if (archivoLineas->Length > 0) {

			//Obtiene la cantidad de elementos de la primer linea y ese toma como cantidad de columnas
			array<String^>^ archivoColumna = archivoLineas[0]->Split(',');
			if (archivoColumna->Length > 0) {
				int cantidadColumnas = archivoColumna->Length;

				array<String^>^ heardersColumns = { "Carnet", "Apellido", "Nombre", "Año de ingreso", "DPI", "Facultad", "Grado académico", "Cursos" };
				


				//Agrega las columnas
				for (int i = 0; i < cantidadColumnas+1; i++) {
					//Crea una columna

					DataGridViewColumn^ nuevacolumna = gcnew DataGridViewColumn();
					nuevacolumna->Width = 100;

					if (i < (heardersColumns->Length) - 1) {
						nuevacolumna->HeaderText = heardersColumns[i];
					}
					else {
						nuevacolumna->HeaderText = "Cursos";
					}


					//Le agrega el tipo de columna que será
					DataGridViewCell^ cellTemplate = gcnew DataGridViewTextBoxCell();
					nuevacolumna->CellTemplate = cellTemplate;

					//Inserta la columna
					dataMostrar->Columns->Add(nuevacolumna);
				}

				//Agrega las filas de manera dinámica
				for (int i = 0; i < archivoLineas->Length; i++) {
					dataMostrar->Rows->Add();
				}

				//Llena el DatagridView
				for (int i = 0; i < archivoLineas->Length; i++) {
					array<String^>^ fila = archivoLineas[i]->Split(',');
					int carnet = generarCarnet(fila[2]);
					
					dataMostrar->Rows[i]->Cells[0]->Value = carnet;
					int j = 0;
					//Si alguna fila tiene más o menos objetos no afecta al funcionamiento ya que utiliza la cantidad de elementos de la primer fila
					while ((j < cantidadColumnas) && (j < fila->Length)) {
						
						
						dataMostrar->Rows[i]->Cells[j+1]->Value = fila[j];

						j++;
					}
				}
			}
		}
	}
	else {
		// Si no se selecciona correctamente un elemento entonces falla
		MessageBox::Show("No se seleccionó ningún archivo"
			, "Archivo no seleccionado"
			, MessageBoxButtons::OK
			, MessageBoxIcon::Exclamation);
	}
}
private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
		this->Close();
}
private: System::Void btnAgregarAlumno_Click(System::Object^ sender, System::EventArgs^ e) {

}
};
}
