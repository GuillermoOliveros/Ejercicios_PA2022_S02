#pragma once
#include "iostream"
#include "string"
#include "Pokedex2.h"


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
	private: System::Windows::Forms::TextBox^ txtDatosObtenidos;
	private: System::Windows::Forms::PictureBox^ pictureBox3;
	private: System::Windows::Forms::Label^ lblInfo;
	private: System::Windows::Forms::Button^ btnAgregarPokemon;
	private: System::Windows::Forms::Button^ btnNationalNumber;
	private: System::Windows::Forms::Button^ btnGeneración;
	private: System::Windows::Forms::Label^ lbl1;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::Label^ label5;
	private: System::Windows::Forms::Label^ label6;
	private: System::Windows::Forms::Label^ label7;
	private: System::Windows::Forms::Label^ label8;
	private: System::Windows::Forms::Label^ label9;
	private: System::Windows::Forms::Label^ label10;
	private: System::Windows::Forms::Label^ label11;
	private: System::Windows::Forms::Button^ btnSiguientePag;

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
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(MyForm::typeid));
			this->pictureBox1 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox2 = (gcnew System::Windows::Forms::PictureBox());
			this->txtDatosObtenidos = (gcnew System::Windows::Forms::TextBox());
			this->pictureBox3 = (gcnew System::Windows::Forms::PictureBox());
			this->lblInfo = (gcnew System::Windows::Forms::Label());
			this->btnAgregarPokemon = (gcnew System::Windows::Forms::Button());
			this->btnNationalNumber = (gcnew System::Windows::Forms::Button());
			this->btnGeneración = (gcnew System::Windows::Forms::Button());
			this->lbl1 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->label8 = (gcnew System::Windows::Forms::Label());
			this->label9 = (gcnew System::Windows::Forms::Label());
			this->label10 = (gcnew System::Windows::Forms::Label());
			this->label11 = (gcnew System::Windows::Forms::Label());
			this->btnSiguientePag = (gcnew System::Windows::Forms::Button());
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
			// txtDatosObtenidos
			// 
			this->txtDatosObtenidos->BackColor = System::Drawing::SystemColors::InactiveCaption;
			this->txtDatosObtenidos->Location = System::Drawing::Point(51, 169);
			this->txtDatosObtenidos->Name = L"txtDatosObtenidos";
			this->txtDatosObtenidos->Size = System::Drawing::Size(271, 20);
			this->txtDatosObtenidos->TabIndex = 2;
			// 
			// pictureBox3
			// 
			this->pictureBox3->BackColor = System::Drawing::SystemColors::ControlLightLight;
			this->pictureBox3->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox3.BackgroundImage")));
			this->pictureBox3->Location = System::Drawing::Point(67, 100);
			this->pictureBox3->Name = L"pictureBox3";
			this->pictureBox3->Size = System::Drawing::Size(228, 35);
			this->pictureBox3->TabIndex = 3;
			this->pictureBox3->TabStop = false;
			// 
			// lblInfo
			// 
			this->lblInfo->AutoSize = true;
			this->lblInfo->Location = System::Drawing::Point(37, 192);
			this->lblInfo->Name = L"lblInfo";
			this->lblInfo->Size = System::Drawing::Size(296, 13);
			this->lblInfo->TabIndex = 4;
			this->lblInfo->Text = L"Separa por comas lo siguiente: Numero, Nombre, Generación";
			// 
			// btnAgregarPokemon
			// 
			this->btnAgregarPokemon->Location = System::Drawing::Point(124, 219);
			this->btnAgregarPokemon->Name = L"btnAgregarPokemon";
			this->btnAgregarPokemon->Size = System::Drawing::Size(117, 23);
			this->btnAgregarPokemon->TabIndex = 5;
			this->btnAgregarPokemon->Text = L"Agregar Pokemon";
			this->btnAgregarPokemon->UseVisualStyleBackColor = true;
			this->btnAgregarPokemon->Click += gcnew System::EventHandler(this, &MyForm::btnAgregarPokemon_Click);
			// 
			// btnNationalNumber
			// 
			this->btnNationalNumber->Location = System::Drawing::Point(594, 294);
			this->btnNationalNumber->Name = L"btnNationalNumber";
			this->btnNationalNumber->Size = System::Drawing::Size(168, 23);
			this->btnNationalNumber->TabIndex = 7;
			this->btnNationalNumber->Text = L"Ordenar por National Number";
			this->btnNationalNumber->UseVisualStyleBackColor = true;
			// 
			// btnGeneración
			// 
			this->btnGeneración->Location = System::Drawing::Point(433, 294);
			this->btnGeneración->Name = L"btnGeneración";
			this->btnGeneración->Size = System::Drawing::Size(155, 23);
			this->btnGeneración->TabIndex = 8;
			this->btnGeneración->Text = L"Ordenar por generación";
			this->btnGeneración->UseVisualStyleBackColor = true;
			// 
			// lbl1
			// 
			this->lbl1->AutoSize = true;
			this->lbl1->BackColor = System::Drawing::Color::GreenYellow;
			this->lbl1->Location = System::Drawing::Point(454, 100);
			this->lbl1->Name = L"lbl1";
			this->lbl1->Size = System::Drawing::Size(13, 13);
			this->lbl1->TabIndex = 9;
			this->lbl1->Text = L"- ";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->BackColor = System::Drawing::Color::GreenYellow;
			this->label2->ForeColor = System::Drawing::Color::Black;
			this->label2->Location = System::Drawing::Point(454, 132);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(10, 13);
			this->label2->TabIndex = 10;
			this->label2->Text = L"-";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->BackColor = System::Drawing::Color::GreenYellow;
			this->label3->Location = System::Drawing::Point(454, 169);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(10, 13);
			this->label3->TabIndex = 11;
			this->label3->Text = L"-";
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->BackColor = System::Drawing::Color::GreenYellow;
			this->label1->Location = System::Drawing::Point(454, 202);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(10, 13);
			this->label1->TabIndex = 12;
			this->label1->Text = L"-";
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->BackColor = System::Drawing::Color::GreenYellow;
			this->label4->Location = System::Drawing::Point(454, 229);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(10, 13);
			this->label4->TabIndex = 13;
			this->label4->Text = L"-";
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->BackColor = System::Drawing::Color::GreenYellow;
			this->label5->Location = System::Drawing::Point(454, 260);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(10, 13);
			this->label5->TabIndex = 14;
			this->label5->Text = L"-";
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->BackColor = System::Drawing::Color::GreenYellow;
			this->label6->Location = System::Drawing::Point(591, 100);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(13, 13);
			this->label6->TabIndex = 15;
			this->label6->Text = L"- ";
			// 
			// label7
			// 
			this->label7->AutoSize = true;
			this->label7->BackColor = System::Drawing::Color::GreenYellow;
			this->label7->Location = System::Drawing::Point(591, 132);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(13, 13);
			this->label7->TabIndex = 16;
			this->label7->Text = L"- ";
			// 
			// label8
			// 
			this->label8->AutoSize = true;
			this->label8->BackColor = System::Drawing::Color::GreenYellow;
			this->label8->Location = System::Drawing::Point(594, 169);
			this->label8->Name = L"label8";
			this->label8->Size = System::Drawing::Size(10, 13);
			this->label8->TabIndex = 17;
			this->label8->Text = L"-";
			// 
			// label9
			// 
			this->label9->AutoSize = true;
			this->label9->BackColor = System::Drawing::Color::GreenYellow;
			this->label9->Location = System::Drawing::Point(591, 202);
			this->label9->Name = L"label9";
			this->label9->Size = System::Drawing::Size(10, 13);
			this->label9->TabIndex = 18;
			this->label9->Text = L"-";
			// 
			// label10
			// 
			this->label10->AutoSize = true;
			this->label10->BackColor = System::Drawing::Color::GreenYellow;
			this->label10->Location = System::Drawing::Point(591, 229);
			this->label10->Name = L"label10";
			this->label10->Size = System::Drawing::Size(10, 13);
			this->label10->TabIndex = 19;
			this->label10->Text = L"-";
			// 
			// label11
			// 
			this->label11->AutoSize = true;
			this->label11->BackColor = System::Drawing::Color::GreenYellow;
			this->label11->Location = System::Drawing::Point(591, 260);
			this->label11->Name = L"label11";
			this->label11->Size = System::Drawing::Size(10, 13);
			this->label11->TabIndex = 20;
			this->label11->Text = L"-";
			// 
			// btnSiguientePag
			// 
			this->btnSiguientePag->Location = System::Drawing::Point(652, 62);
			this->btnSiguientePag->Name = L"btnSiguientePag";
			this->btnSiguientePag->Size = System::Drawing::Size(110, 23);
			this->btnSiguientePag->TabIndex = 21;
			this->btnSiguientePag->Text = L"Siguiente Página";
			this->btnSiguientePag->UseVisualStyleBackColor = true;
			this->btnSiguientePag->Click += gcnew System::EventHandler(this, &MyForm::btnSiguientePag_Click);
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(788, 378);
			this->Controls->Add(this->btnSiguientePag);
			this->Controls->Add(this->label11);
			this->Controls->Add(this->label10);
			this->Controls->Add(this->label9);
			this->Controls->Add(this->label8);
			this->Controls->Add(this->label7);
			this->Controls->Add(this->label6);
			this->Controls->Add(this->label5);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->lbl1);
			this->Controls->Add(this->btnGeneración);
			this->Controls->Add(this->btnNationalNumber);
			this->Controls->Add(this->btnAgregarPokemon);
			this->Controls->Add(this->lblInfo);
			this->Controls->Add(this->pictureBox3);
			this->Controls->Add(this->txtDatosObtenidos);
			this->Controls->Add(this->pictureBox2);
			this->Controls->Add(this->pictureBox1);
			this->Name = L"MyForm";
			this->Text = L"Pokedex";
			this->Load += gcnew System::EventHandler(this, &MyForm::MyForm_Load);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox2))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox3))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion

	
	private: System::Void MyForm_Load(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void pictureBox1_Click(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void btnSiguientePag_Click(System::Object^ sender, System::EventArgs^ e) {
		
		MyForm:Form::Hide();
		Pokedex2:Form::Show();
	}
private: System::Void btnAgregarPokemon_Click(System::Object^ sender, System::EventArgs^ e) {

	String^ Pokemon = txtDatosObtenidos->Text;

	txtDatosObtenidos->Clear();
}
};
}
