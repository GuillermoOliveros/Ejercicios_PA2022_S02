#pragma once
#include "iostream"
#include "string"
#include "Pokemon.h"
#include "Leer.h"
#include "ordenamiento.h"
#include <iostream>
#include <fstream>
#include <string>
#include <Windows.h>
#include <conio.h>
#include <ctime>

Pokemon ListadoPokemon;
ordenamiento OrdenPokemon;
Leer LeerArchivo;

namespace Tarea6GuillermoOliveros1096722 {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Resumen de MyForm
	/// </summary>
	public ref class MyForm : public System::Windows::Forms::Form
	{
	public:
		MyForm(void)
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
		~MyForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::PictureBox^ pictureBox1;
	protected:
	private: System::Windows::Forms::PictureBox^ pictureBox2;


	private: System::Windows::Forms::PictureBox^ pictureBox3;

	private: System::Windows::Forms::Button^ btnAgregarPokemon;
	private: System::Windows::Forms::Button^ btnNumeroShell;
	private: System::Windows::Forms::Button^ btnNumeroSelection;




	private: System::Windows::Forms::OpenFileDialog^ ofdPokemon;

	private: System::Windows::Forms::TextBox^ txtPokedex;
	private: System::Windows::Forms::Button^ btnNumeroQuick;
	private: System::Windows::Forms::Button^ btnGeneracionShell;
	private: System::Windows::Forms::Button^ btnGeneracionSelection;
	private: System::Windows::Forms::Button^ btnGeneracionQuick;
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Label^ label2;
























	protected:


	private:
		/// <summary>
		/// Variable del diseñador necesaria.
		/// </summary>
		System::ComponentModel::Container^ components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Método necesario para admitir el Diseñador. No se puede modificar
		/// el contenido de este método con el editor de código.
		/// </summary>
		void InitializeComponent(void)
		{
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(MyForm::typeid));
			this->pictureBox1 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox2 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox3 = (gcnew System::Windows::Forms::PictureBox());
			this->btnAgregarPokemon = (gcnew System::Windows::Forms::Button());
			this->btnNumeroShell = (gcnew System::Windows::Forms::Button());
			this->btnNumeroSelection = (gcnew System::Windows::Forms::Button());
			this->ofdPokemon = (gcnew System::Windows::Forms::OpenFileDialog());
			this->txtPokedex = (gcnew System::Windows::Forms::TextBox());
			this->btnNumeroQuick = (gcnew System::Windows::Forms::Button());
			this->btnGeneracionShell = (gcnew System::Windows::Forms::Button());
			this->btnGeneracionSelection = (gcnew System::Windows::Forms::Button());
			this->btnGeneracionQuick = (gcnew System::Windows::Forms::Button());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox2))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox3))->BeginInit();
			this->SuspendLayout();
			// 
			// pictureBox1
			// 
			this->pictureBox1->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox1.Image")));
			this->pictureBox1->Location = System::Drawing::Point(0, 0);
			this->pictureBox1->Name = L"pictureBox1";
			this->pictureBox1->Size = System::Drawing::Size(776, 329);
			this->pictureBox1->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->pictureBox1->TabIndex = 0;
			this->pictureBox1->TabStop = false;
			// 
			// pictureBox2
			// 
			this->pictureBox2->BackColor = System::Drawing::Color::Red;
			this->pictureBox2->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox2.Image")));
			this->pictureBox2->Location = System::Drawing::Point(419, 0);
			this->pictureBox2->Name = L"pictureBox2";
			this->pictureBox2->Size = System::Drawing::Size(357, 66);
			this->pictureBox2->TabIndex = 1;
			this->pictureBox2->TabStop = false;
			// 
			// pictureBox3
			// 
			this->pictureBox3->BackColor = System::Drawing::SystemColors::ControlLightLight;
			this->pictureBox3->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox3.BackgroundImage")));
			this->pictureBox3->Location = System::Drawing::Point(76, 100);
			this->pictureBox3->Name = L"pictureBox3";
			this->pictureBox3->Size = System::Drawing::Size(228, 35);
			this->pictureBox3->TabIndex = 3;
			this->pictureBox3->TabStop = false;
			// 
			// btnAgregarPokemon
			// 
			this->btnAgregarPokemon->Location = System::Drawing::Point(133, 141);
			this->btnAgregarPokemon->Name = L"btnAgregarPokemon";
			this->btnAgregarPokemon->Size = System::Drawing::Size(117, 23);
			this->btnAgregarPokemon->TabIndex = 5;
			this->btnAgregarPokemon->Text = L"Agregar Pokemon";
			this->btnAgregarPokemon->UseVisualStyleBackColor = true;
			this->btnAgregarPokemon->Click += gcnew System::EventHandler(this, &MyForm::btnAgregarPokemon_Click);
			// 
			// btnNumeroShell
			// 
			this->btnNumeroShell->Location = System::Drawing::Point(29, 186);
			this->btnNumeroShell->Name = L"btnNumeroShell";
			this->btnNumeroShell->Size = System::Drawing::Size(129, 21);
			this->btnNumeroShell->TabIndex = 7;
			this->btnNumeroShell->Text = L"Shell Sort";
			this->btnNumeroShell->UseVisualStyleBackColor = true;
			this->btnNumeroShell->Click += gcnew System::EventHandler(this, &MyForm::btnNationalNumber_Click);
			// 
			// btnNumeroSelection
			// 
			this->btnNumeroSelection->Location = System::Drawing::Point(29, 213);
			this->btnNumeroSelection->Name = L"btnNumeroSelection";
			this->btnNumeroSelection->Size = System::Drawing::Size(129, 21);
			this->btnNumeroSelection->TabIndex = 8;
			this->btnNumeroSelection->Text = L"Selection Sort";
			this->btnNumeroSelection->UseVisualStyleBackColor = true;
			this->btnNumeroSelection->Click += gcnew System::EventHandler(this, &MyForm::btnGeneración_Click);
			// 
			// ofdPokemon
			// 
			this->ofdPokemon->FileName = L"ListadoPokemon.txt";
			// 
			// txtPokedex
			// 
			this->txtPokedex->BackColor = System::Drawing::Color::Lime;
			this->txtPokedex->Location = System::Drawing::Point(451, 88);
			this->txtPokedex->Name = L"txtPokedex";
			this->txtPokedex->Size = System::Drawing::Size(290, 20);
			this->txtPokedex->TabIndex = 9;
			// 
			// btnNumeroQuick
			// 
			this->btnNumeroQuick->Location = System::Drawing::Point(29, 240);
			this->btnNumeroQuick->Name = L"btnNumeroQuick";
			this->btnNumeroQuick->Size = System::Drawing::Size(129, 23);
			this->btnNumeroQuick->TabIndex = 10;
			this->btnNumeroQuick->Text = L"Quick Sort";
			this->btnNumeroQuick->UseVisualStyleBackColor = true;
			this->btnNumeroQuick->Click += gcnew System::EventHandler(this, &MyForm::btnNumeroQuick_Click);
			// 
			// btnGeneracionShell
			// 
			this->btnGeneracionShell->Location = System::Drawing::Point(225, 182);
			this->btnGeneracionShell->Name = L"btnGeneracionShell";
			this->btnGeneracionShell->Size = System::Drawing::Size(118, 23);
			this->btnGeneracionShell->TabIndex = 12;
			this->btnGeneracionShell->Text = L"Shell Sort";
			this->btnGeneracionShell->UseVisualStyleBackColor = true;
			// 
			// btnGeneracionSelection
			// 
			this->btnGeneracionSelection->Location = System::Drawing::Point(225, 211);
			this->btnGeneracionSelection->Name = L"btnGeneracionSelection";
			this->btnGeneracionSelection->Size = System::Drawing::Size(118, 23);
			this->btnGeneracionSelection->TabIndex = 13;
			this->btnGeneracionSelection->Text = L"Selection Sort";
			this->btnGeneracionSelection->UseVisualStyleBackColor = true;
			// 
			// btnGeneracionQuick
			// 
			this->btnGeneracionQuick->Location = System::Drawing::Point(225, 240);
			this->btnGeneracionQuick->Name = L"btnGeneracionQuick";
			this->btnGeneracionQuick->Size = System::Drawing::Size(118, 23);
			this->btnGeneracionQuick->TabIndex = 14;
			this->btnGeneracionQuick->Text = L"Quick Sort";
			this->btnGeneracionQuick->UseVisualStyleBackColor = true;
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(58, 170);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(86, 13);
			this->label1->TabIndex = 15;
			this->label1->Text = L"National Number";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(255, 166);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(62, 13);
			this->label2->TabIndex = 16;
			this->label2->Text = L"Generación";
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(788, 378);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->btnGeneracionQuick);
			this->Controls->Add(this->btnGeneracionSelection);
			this->Controls->Add(this->btnGeneracionShell);
			this->Controls->Add(this->btnNumeroQuick);
			this->Controls->Add(this->txtPokedex);
			this->Controls->Add(this->btnNumeroSelection);
			this->Controls->Add(this->btnNumeroShell);
			this->Controls->Add(this->btnAgregarPokemon);
			this->Controls->Add(this->pictureBox3);
			this->Controls->Add(this->pictureBox2);
			this->Controls->Add(this->pictureBox1);
			this->Name = L"MyForm";
			this->Text = L"Pokedex";
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox2))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox3))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion


	private: System::Void btnAgregarPokemon_Click(System::Object^ sender, System::EventArgs^ e) {

		Leer archivo = Leer();

		OrdenPokemon.LeerArchivo("ListadoPokemon.txt");

		std::string Mostrar = "";
		Mostrar = OrdenPokemon.ImprimirPokemons();

		txtPokedex->Text = gcnew String(Mostrar.c_str());
	}






	private: System::Void btnGeneración_Click(System::Object^ sender, System::EventArgs^ e) {
		
		txtPokedex->Text = "";
		
		Pokemon* data = OrdenPokemon.Almacenar();
		int Contador = OrdenPokemon.contador();

		OrdenPokemon.SelectionSort(data, Contador, 0);

		for (size_t i = 0; i < Contador; i++)
		{
			txtPokedex->Text += data[i].NumeroPoke + ", ";
			txtPokedex->Text += gcnew String(data[i].NombrePoke.c_str());
			txtPokedex->Text += ", " + data[i].GeneracionPoke + "\n";
		}
		
	}
private: System::Void btnNationalNumber_Click(System::Object^ sender, System::EventArgs^ e) {
	txtPokedex->Text = "";

	Pokemon* data = OrdenPokemon.Almacenar();
	int Contador = OrdenPokemon.contador();

	OrdenPokemon.ShellSort(data, Contador, 0);

	for (size_t i = 0; i < Contador; i++)
	{
		txtPokedex->Text += data[i].NumeroPoke + ", ";
		txtPokedex->Text += gcnew String(data[i].NombrePoke.c_str());
		txtPokedex->Text += ", " + data[i].GeneracionPoke + "\n";
	}
}
private: System::Void btnNumeroQuick_Click(System::Object^ sender, System::EventArgs^ e) {
	txtPokedex->Text = "";
	
	Pokemon* data = OrdenPokemon.Almacenar();
	int conteo = OrdenPokemon.contador() - 1;
	OrdenPokemon.InicioQuickSort(data, 0, conteo);

	for (size_t i = 0; i < conteo + 1; i++)
	{
		txtPokedex->Text += data[i].NumeroPoke + ", ";
		txtPokedex->Text += gcnew String(data[i].NombrePoke.c_str());
		txtPokedex->Text += ", " + data[i].GeneracionPoke + "\n";
	}

}


};
}
