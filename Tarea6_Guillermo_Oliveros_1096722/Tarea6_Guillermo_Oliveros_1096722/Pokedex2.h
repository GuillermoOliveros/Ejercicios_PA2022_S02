#pragma once

namespace Tarea6GuillermoOliveros1096722 {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Resumen de Pokedex2
	/// </summary>
	public ref class Pokedex2 : public System::Windows::Forms::Form
	{
	public:
		Pokedex2(void)
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
		~Pokedex2()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Label^ lbl1;
	protected:
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::Label^ label5;
	private: System::Windows::Forms::Label^ label6;
	private: System::Windows::Forms::Label^ label7;
	private: System::Windows::Forms::Label^ label8;
	private: System::Windows::Forms::Label^ label9;
	private: System::Windows::Forms::Label^ label10;
	private: System::Windows::Forms::Label^ label11;
	private: System::Windows::Forms::Label^ label12;
	private: System::Windows::Forms::Label^ label13;
	private: System::Windows::Forms::Label^ label14;
	private: System::Windows::Forms::Label^ label15;
	private: System::Windows::Forms::Label^ label16;
	private: System::Windows::Forms::Label^ label17;
	private: System::Windows::Forms::Label^ label18;
	private: System::Windows::Forms::Label^ label19;
	private: System::Windows::Forms::Label^ label20;
	private: System::Windows::Forms::Label^ label21;
	private: System::Windows::Forms::Label^ label22;
	private: System::Windows::Forms::Label^ label23;
	private: System::Windows::Forms::Label^ label24;
	private: System::Windows::Forms::Label^ label25;
	private: System::Windows::Forms::Label^ label26;
	private: System::Windows::Forms::Label^ label27;
	private: System::Windows::Forms::Label^ label28;
	private: System::Windows::Forms::Label^ label29;
	private: System::Windows::Forms::Label^ label30;
	private: System::Windows::Forms::Label^ label31;
	private: System::Windows::Forms::Label^ label32;
	private: System::Windows::Forms::Label^ label33;
	private: System::Windows::Forms::Label^ label34;
	private: System::Windows::Forms::Label^ label35;
	private: System::Windows::Forms::Label^ label36;
	private: System::Windows::Forms::Label^ label37;
	private: System::Windows::Forms::Label^ label38;
	private: System::Windows::Forms::Label^ label39;
	private: System::Windows::Forms::Label^ label40;
	private: System::Windows::Forms::Label^ label41;
	private: System::Windows::Forms::Label^ label42;
	private: System::Windows::Forms::Label^ label43;
	private: System::Windows::Forms::Label^ label44;
	private: System::Windows::Forms::Label^ label45;
	private: System::Windows::Forms::Label^ label46;
	private: System::Windows::Forms::Label^ label47;
	private: System::Windows::Forms::Label^ label48;
	private: System::Windows::Forms::Label^ label49;
	private: System::Windows::Forms::Label^ label50;
	private: System::Windows::Forms::Label^ label51;
	private: System::Windows::Forms::Label^ label52;
	private: System::Windows::Forms::Label^ label53;
	private: System::Windows::Forms::Label^ label54;
	private: System::Windows::Forms::Label^ label55;
	private: System::Windows::Forms::Label^ label56;
	private: System::Windows::Forms::Label^ label57;
	private: System::Windows::Forms::Label^ label58;
	private: System::Windows::Forms::Label^ label59;
	private: System::Windows::Forms::Label^ label60;
	private: System::Windows::Forms::Label^ label61;
	private: System::Windows::Forms::Label^ label62;
	private: System::Windows::Forms::Label^ label63;
	private: System::Windows::Forms::Label^ label64;
	private: System::Windows::Forms::Label^ label65;
	private: System::Windows::Forms::Label^ label66;
	private: System::Windows::Forms::Label^ label67;
	private: System::Windows::Forms::Label^ label68;
	private: System::Windows::Forms::Label^ label69;

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
			this->lbl1 = (gcnew System::Windows::Forms::Label());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->label8 = (gcnew System::Windows::Forms::Label());
			this->label9 = (gcnew System::Windows::Forms::Label());
			this->label10 = (gcnew System::Windows::Forms::Label());
			this->label11 = (gcnew System::Windows::Forms::Label());
			this->label12 = (gcnew System::Windows::Forms::Label());
			this->label13 = (gcnew System::Windows::Forms::Label());
			this->label14 = (gcnew System::Windows::Forms::Label());
			this->label15 = (gcnew System::Windows::Forms::Label());
			this->label16 = (gcnew System::Windows::Forms::Label());
			this->label17 = (gcnew System::Windows::Forms::Label());
			this->label18 = (gcnew System::Windows::Forms::Label());
			this->label19 = (gcnew System::Windows::Forms::Label());
			this->label20 = (gcnew System::Windows::Forms::Label());
			this->label21 = (gcnew System::Windows::Forms::Label());
			this->label22 = (gcnew System::Windows::Forms::Label());
			this->label23 = (gcnew System::Windows::Forms::Label());
			this->label24 = (gcnew System::Windows::Forms::Label());
			this->label25 = (gcnew System::Windows::Forms::Label());
			this->label26 = (gcnew System::Windows::Forms::Label());
			this->label27 = (gcnew System::Windows::Forms::Label());
			this->label28 = (gcnew System::Windows::Forms::Label());
			this->label29 = (gcnew System::Windows::Forms::Label());
			this->label30 = (gcnew System::Windows::Forms::Label());
			this->label31 = (gcnew System::Windows::Forms::Label());
			this->label32 = (gcnew System::Windows::Forms::Label());
			this->label33 = (gcnew System::Windows::Forms::Label());
			this->label34 = (gcnew System::Windows::Forms::Label());
			this->label35 = (gcnew System::Windows::Forms::Label());
			this->label36 = (gcnew System::Windows::Forms::Label());
			this->label37 = (gcnew System::Windows::Forms::Label());
			this->label38 = (gcnew System::Windows::Forms::Label());
			this->label39 = (gcnew System::Windows::Forms::Label());
			this->label40 = (gcnew System::Windows::Forms::Label());
			this->label41 = (gcnew System::Windows::Forms::Label());
			this->label42 = (gcnew System::Windows::Forms::Label());
			this->label43 = (gcnew System::Windows::Forms::Label());
			this->label44 = (gcnew System::Windows::Forms::Label());
			this->label45 = (gcnew System::Windows::Forms::Label());
			this->label46 = (gcnew System::Windows::Forms::Label());
			this->label47 = (gcnew System::Windows::Forms::Label());
			this->label48 = (gcnew System::Windows::Forms::Label());
			this->label49 = (gcnew System::Windows::Forms::Label());
			this->label50 = (gcnew System::Windows::Forms::Label());
			this->label51 = (gcnew System::Windows::Forms::Label());
			this->label52 = (gcnew System::Windows::Forms::Label());
			this->label53 = (gcnew System::Windows::Forms::Label());
			this->label54 = (gcnew System::Windows::Forms::Label());
			this->label55 = (gcnew System::Windows::Forms::Label());
			this->label56 = (gcnew System::Windows::Forms::Label());
			this->label57 = (gcnew System::Windows::Forms::Label());
			this->label58 = (gcnew System::Windows::Forms::Label());
			this->label59 = (gcnew System::Windows::Forms::Label());
			this->label60 = (gcnew System::Windows::Forms::Label());
			this->label61 = (gcnew System::Windows::Forms::Label());
			this->label62 = (gcnew System::Windows::Forms::Label());
			this->label63 = (gcnew System::Windows::Forms::Label());
			this->label64 = (gcnew System::Windows::Forms::Label());
			this->label65 = (gcnew System::Windows::Forms::Label());
			this->label66 = (gcnew System::Windows::Forms::Label());
			this->label67 = (gcnew System::Windows::Forms::Label());
			this->label68 = (gcnew System::Windows::Forms::Label());
			this->label69 = (gcnew System::Windows::Forms::Label());
			this->SuspendLayout();
			// 
			// lbl1
			// 
			this->lbl1->AutoSize = true;
			this->lbl1->BackColor = System::Drawing::Color::GreenYellow;
			this->lbl1->Location = System::Drawing::Point(12, 9);
			this->lbl1->Name = L"lbl1";
			this->lbl1->Size = System::Drawing::Size(13, 13);
			this->lbl1->TabIndex = 10;
			this->lbl1->Text = L"- ";
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->BackColor = System::Drawing::Color::GreenYellow;
			this->label1->Location = System::Drawing::Point(12, 44);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(13, 13);
			this->label1->TabIndex = 11;
			this->label1->Text = L"- ";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->BackColor = System::Drawing::Color::GreenYellow;
			this->label2->Location = System::Drawing::Point(12, 78);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(13, 13);
			this->label2->TabIndex = 12;
			this->label2->Text = L"- ";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->BackColor = System::Drawing::Color::GreenYellow;
			this->label3->Location = System::Drawing::Point(12, 117);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(13, 13);
			this->label3->TabIndex = 13;
			this->label3->Text = L"- ";
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->BackColor = System::Drawing::Color::GreenYellow;
			this->label4->Location = System::Drawing::Point(12, 149);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(13, 13);
			this->label4->TabIndex = 14;
			this->label4->Text = L"- ";
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->BackColor = System::Drawing::Color::GreenYellow;
			this->label5->Location = System::Drawing::Point(12, 182);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(13, 13);
			this->label5->TabIndex = 15;
			this->label5->Text = L"- ";
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->BackColor = System::Drawing::Color::GreenYellow;
			this->label6->Location = System::Drawing::Point(12, 214);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(13, 13);
			this->label6->TabIndex = 16;
			this->label6->Text = L"- ";
			// 
			// label7
			// 
			this->label7->AutoSize = true;
			this->label7->BackColor = System::Drawing::Color::GreenYellow;
			this->label7->Location = System::Drawing::Point(12, 245);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(13, 13);
			this->label7->TabIndex = 17;
			this->label7->Text = L"- ";
			// 
			// label8
			// 
			this->label8->AutoSize = true;
			this->label8->BackColor = System::Drawing::Color::GreenYellow;
			this->label8->Location = System::Drawing::Point(12, 279);
			this->label8->Name = L"label8";
			this->label8->Size = System::Drawing::Size(13, 13);
			this->label8->TabIndex = 18;
			this->label8->Text = L"- ";
			// 
			// label9
			// 
			this->label9->AutoSize = true;
			this->label9->BackColor = System::Drawing::Color::GreenYellow;
			this->label9->Location = System::Drawing::Point(12, 306);
			this->label9->Name = L"label9";
			this->label9->Size = System::Drawing::Size(13, 13);
			this->label9->TabIndex = 19;
			this->label9->Text = L"- ";
			// 
			// label10
			// 
			this->label10->AutoSize = true;
			this->label10->BackColor = System::Drawing::Color::GreenYellow;
			this->label10->Location = System::Drawing::Point(221, 306);
			this->label10->Name = L"label10";
			this->label10->Size = System::Drawing::Size(13, 13);
			this->label10->TabIndex = 29;
			this->label10->Text = L"- ";
			// 
			// label11
			// 
			this->label11->AutoSize = true;
			this->label11->BackColor = System::Drawing::Color::GreenYellow;
			this->label11->Location = System::Drawing::Point(221, 279);
			this->label11->Name = L"label11";
			this->label11->Size = System::Drawing::Size(13, 13);
			this->label11->TabIndex = 28;
			this->label11->Text = L"- ";
			// 
			// label12
			// 
			this->label12->AutoSize = true;
			this->label12->BackColor = System::Drawing::Color::GreenYellow;
			this->label12->Location = System::Drawing::Point(221, 245);
			this->label12->Name = L"label12";
			this->label12->Size = System::Drawing::Size(13, 13);
			this->label12->TabIndex = 27;
			this->label12->Text = L"- ";
			// 
			// label13
			// 
			this->label13->AutoSize = true;
			this->label13->BackColor = System::Drawing::Color::GreenYellow;
			this->label13->Location = System::Drawing::Point(221, 214);
			this->label13->Name = L"label13";
			this->label13->Size = System::Drawing::Size(13, 13);
			this->label13->TabIndex = 26;
			this->label13->Text = L"- ";
			// 
			// label14
			// 
			this->label14->AutoSize = true;
			this->label14->BackColor = System::Drawing::Color::GreenYellow;
			this->label14->Location = System::Drawing::Point(221, 182);
			this->label14->Name = L"label14";
			this->label14->Size = System::Drawing::Size(13, 13);
			this->label14->TabIndex = 25;
			this->label14->Text = L"- ";
			// 
			// label15
			// 
			this->label15->AutoSize = true;
			this->label15->BackColor = System::Drawing::Color::GreenYellow;
			this->label15->Location = System::Drawing::Point(221, 149);
			this->label15->Name = L"label15";
			this->label15->Size = System::Drawing::Size(13, 13);
			this->label15->TabIndex = 24;
			this->label15->Text = L"- ";
			// 
			// label16
			// 
			this->label16->AutoSize = true;
			this->label16->BackColor = System::Drawing::Color::GreenYellow;
			this->label16->Location = System::Drawing::Point(221, 117);
			this->label16->Name = L"label16";
			this->label16->Size = System::Drawing::Size(13, 13);
			this->label16->TabIndex = 23;
			this->label16->Text = L"- ";
			// 
			// label17
			// 
			this->label17->AutoSize = true;
			this->label17->BackColor = System::Drawing::Color::GreenYellow;
			this->label17->Location = System::Drawing::Point(221, 78);
			this->label17->Name = L"label17";
			this->label17->Size = System::Drawing::Size(13, 13);
			this->label17->TabIndex = 22;
			this->label17->Text = L"- ";
			// 
			// label18
			// 
			this->label18->AutoSize = true;
			this->label18->BackColor = System::Drawing::Color::GreenYellow;
			this->label18->Location = System::Drawing::Point(221, 44);
			this->label18->Name = L"label18";
			this->label18->Size = System::Drawing::Size(13, 13);
			this->label18->TabIndex = 21;
			this->label18->Text = L"- ";
			// 
			// label19
			// 
			this->label19->AutoSize = true;
			this->label19->BackColor = System::Drawing::Color::GreenYellow;
			this->label19->Location = System::Drawing::Point(221, 9);
			this->label19->Name = L"label19";
			this->label19->Size = System::Drawing::Size(13, 13);
			this->label19->TabIndex = 20;
			this->label19->Text = L"- ";
			// 
			// label20
			// 
			this->label20->AutoSize = true;
			this->label20->BackColor = System::Drawing::Color::GreenYellow;
			this->label20->Location = System::Drawing::Point(411, 306);
			this->label20->Name = L"label20";
			this->label20->Size = System::Drawing::Size(13, 13);
			this->label20->TabIndex = 39;
			this->label20->Text = L"- ";
			// 
			// label21
			// 
			this->label21->AutoSize = true;
			this->label21->BackColor = System::Drawing::Color::GreenYellow;
			this->label21->Location = System::Drawing::Point(411, 279);
			this->label21->Name = L"label21";
			this->label21->Size = System::Drawing::Size(13, 13);
			this->label21->TabIndex = 38;
			this->label21->Text = L"- ";
			// 
			// label22
			// 
			this->label22->AutoSize = true;
			this->label22->BackColor = System::Drawing::Color::GreenYellow;
			this->label22->Location = System::Drawing::Point(411, 245);
			this->label22->Name = L"label22";
			this->label22->Size = System::Drawing::Size(13, 13);
			this->label22->TabIndex = 37;
			this->label22->Text = L"- ";
			// 
			// label23
			// 
			this->label23->AutoSize = true;
			this->label23->BackColor = System::Drawing::Color::GreenYellow;
			this->label23->Location = System::Drawing::Point(411, 214);
			this->label23->Name = L"label23";
			this->label23->Size = System::Drawing::Size(13, 13);
			this->label23->TabIndex = 36;
			this->label23->Text = L"- ";
			// 
			// label24
			// 
			this->label24->AutoSize = true;
			this->label24->BackColor = System::Drawing::Color::GreenYellow;
			this->label24->Location = System::Drawing::Point(411, 182);
			this->label24->Name = L"label24";
			this->label24->Size = System::Drawing::Size(13, 13);
			this->label24->TabIndex = 35;
			this->label24->Text = L"- ";
			// 
			// label25
			// 
			this->label25->AutoSize = true;
			this->label25->BackColor = System::Drawing::Color::GreenYellow;
			this->label25->Location = System::Drawing::Point(411, 149);
			this->label25->Name = L"label25";
			this->label25->Size = System::Drawing::Size(13, 13);
			this->label25->TabIndex = 34;
			this->label25->Text = L"- ";
			// 
			// label26
			// 
			this->label26->AutoSize = true;
			this->label26->BackColor = System::Drawing::Color::GreenYellow;
			this->label26->Location = System::Drawing::Point(411, 117);
			this->label26->Name = L"label26";
			this->label26->Size = System::Drawing::Size(13, 13);
			this->label26->TabIndex = 33;
			this->label26->Text = L"- ";
			// 
			// label27
			// 
			this->label27->AutoSize = true;
			this->label27->BackColor = System::Drawing::Color::GreenYellow;
			this->label27->Location = System::Drawing::Point(411, 78);
			this->label27->Name = L"label27";
			this->label27->Size = System::Drawing::Size(13, 13);
			this->label27->TabIndex = 32;
			this->label27->Text = L"- ";
			// 
			// label28
			// 
			this->label28->AutoSize = true;
			this->label28->BackColor = System::Drawing::Color::GreenYellow;
			this->label28->Location = System::Drawing::Point(411, 44);
			this->label28->Name = L"label28";
			this->label28->Size = System::Drawing::Size(13, 13);
			this->label28->TabIndex = 31;
			this->label28->Text = L"- ";
			// 
			// label29
			// 
			this->label29->AutoSize = true;
			this->label29->BackColor = System::Drawing::Color::GreenYellow;
			this->label29->Location = System::Drawing::Point(411, 9);
			this->label29->Name = L"label29";
			this->label29->Size = System::Drawing::Size(13, 13);
			this->label29->TabIndex = 30;
			this->label29->Text = L"- ";
			// 
			// label30
			// 
			this->label30->AutoSize = true;
			this->label30->BackColor = System::Drawing::Color::GreenYellow;
			this->label30->Location = System::Drawing::Point(595, 306);
			this->label30->Name = L"label30";
			this->label30->Size = System::Drawing::Size(13, 13);
			this->label30->TabIndex = 49;
			this->label30->Text = L"- ";
			// 
			// label31
			// 
			this->label31->AutoSize = true;
			this->label31->BackColor = System::Drawing::Color::GreenYellow;
			this->label31->Location = System::Drawing::Point(595, 279);
			this->label31->Name = L"label31";
			this->label31->Size = System::Drawing::Size(13, 13);
			this->label31->TabIndex = 48;
			this->label31->Text = L"- ";
			// 
			// label32
			// 
			this->label32->AutoSize = true;
			this->label32->BackColor = System::Drawing::Color::GreenYellow;
			this->label32->Location = System::Drawing::Point(595, 245);
			this->label32->Name = L"label32";
			this->label32->Size = System::Drawing::Size(13, 13);
			this->label32->TabIndex = 47;
			this->label32->Text = L"- ";
			// 
			// label33
			// 
			this->label33->AutoSize = true;
			this->label33->BackColor = System::Drawing::Color::GreenYellow;
			this->label33->Location = System::Drawing::Point(595, 214);
			this->label33->Name = L"label33";
			this->label33->Size = System::Drawing::Size(13, 13);
			this->label33->TabIndex = 46;
			this->label33->Text = L"- ";
			// 
			// label34
			// 
			this->label34->AutoSize = true;
			this->label34->BackColor = System::Drawing::Color::GreenYellow;
			this->label34->Location = System::Drawing::Point(595, 182);
			this->label34->Name = L"label34";
			this->label34->Size = System::Drawing::Size(13, 13);
			this->label34->TabIndex = 45;
			this->label34->Text = L"- ";
			// 
			// label35
			// 
			this->label35->AutoSize = true;
			this->label35->BackColor = System::Drawing::Color::GreenYellow;
			this->label35->Location = System::Drawing::Point(595, 149);
			this->label35->Name = L"label35";
			this->label35->Size = System::Drawing::Size(13, 13);
			this->label35->TabIndex = 44;
			this->label35->Text = L"- ";
			// 
			// label36
			// 
			this->label36->AutoSize = true;
			this->label36->BackColor = System::Drawing::Color::GreenYellow;
			this->label36->Location = System::Drawing::Point(595, 117);
			this->label36->Name = L"label36";
			this->label36->Size = System::Drawing::Size(13, 13);
			this->label36->TabIndex = 43;
			this->label36->Text = L"- ";
			// 
			// label37
			// 
			this->label37->AutoSize = true;
			this->label37->BackColor = System::Drawing::Color::GreenYellow;
			this->label37->Location = System::Drawing::Point(595, 78);
			this->label37->Name = L"label37";
			this->label37->Size = System::Drawing::Size(13, 13);
			this->label37->TabIndex = 42;
			this->label37->Text = L"- ";
			// 
			// label38
			// 
			this->label38->AutoSize = true;
			this->label38->BackColor = System::Drawing::Color::GreenYellow;
			this->label38->Location = System::Drawing::Point(595, 44);
			this->label38->Name = L"label38";
			this->label38->Size = System::Drawing::Size(13, 13);
			this->label38->TabIndex = 41;
			this->label38->Text = L"- ";
			// 
			// label39
			// 
			this->label39->AutoSize = true;
			this->label39->BackColor = System::Drawing::Color::GreenYellow;
			this->label39->Location = System::Drawing::Point(595, 9);
			this->label39->Name = L"label39";
			this->label39->Size = System::Drawing::Size(13, 13);
			this->label39->TabIndex = 40;
			this->label39->Text = L"- ";
			// 
			// label40
			// 
			this->label40->AutoSize = true;
			this->label40->BackColor = System::Drawing::Color::GreenYellow;
			this->label40->Location = System::Drawing::Point(771, 306);
			this->label40->Name = L"label40";
			this->label40->Size = System::Drawing::Size(13, 13);
			this->label40->TabIndex = 59;
			this->label40->Text = L"- ";
			// 
			// label41
			// 
			this->label41->AutoSize = true;
			this->label41->BackColor = System::Drawing::Color::GreenYellow;
			this->label41->Location = System::Drawing::Point(771, 279);
			this->label41->Name = L"label41";
			this->label41->Size = System::Drawing::Size(13, 13);
			this->label41->TabIndex = 58;
			this->label41->Text = L"- ";
			// 
			// label42
			// 
			this->label42->AutoSize = true;
			this->label42->BackColor = System::Drawing::Color::GreenYellow;
			this->label42->Location = System::Drawing::Point(771, 245);
			this->label42->Name = L"label42";
			this->label42->Size = System::Drawing::Size(13, 13);
			this->label42->TabIndex = 57;
			this->label42->Text = L"- ";
			// 
			// label43
			// 
			this->label43->AutoSize = true;
			this->label43->BackColor = System::Drawing::Color::GreenYellow;
			this->label43->Location = System::Drawing::Point(771, 214);
			this->label43->Name = L"label43";
			this->label43->Size = System::Drawing::Size(13, 13);
			this->label43->TabIndex = 56;
			this->label43->Text = L"- ";
			// 
			// label44
			// 
			this->label44->AutoSize = true;
			this->label44->BackColor = System::Drawing::Color::GreenYellow;
			this->label44->Location = System::Drawing::Point(771, 182);
			this->label44->Name = L"label44";
			this->label44->Size = System::Drawing::Size(13, 13);
			this->label44->TabIndex = 55;
			this->label44->Text = L"- ";
			// 
			// label45
			// 
			this->label45->AutoSize = true;
			this->label45->BackColor = System::Drawing::Color::GreenYellow;
			this->label45->Location = System::Drawing::Point(771, 149);
			this->label45->Name = L"label45";
			this->label45->Size = System::Drawing::Size(13, 13);
			this->label45->TabIndex = 54;
			this->label45->Text = L"- ";
			// 
			// label46
			// 
			this->label46->AutoSize = true;
			this->label46->BackColor = System::Drawing::Color::GreenYellow;
			this->label46->Location = System::Drawing::Point(771, 117);
			this->label46->Name = L"label46";
			this->label46->Size = System::Drawing::Size(13, 13);
			this->label46->TabIndex = 53;
			this->label46->Text = L"- ";
			// 
			// label47
			// 
			this->label47->AutoSize = true;
			this->label47->BackColor = System::Drawing::Color::GreenYellow;
			this->label47->Location = System::Drawing::Point(771, 78);
			this->label47->Name = L"label47";
			this->label47->Size = System::Drawing::Size(13, 13);
			this->label47->TabIndex = 52;
			this->label47->Text = L"- ";
			// 
			// label48
			// 
			this->label48->AutoSize = true;
			this->label48->BackColor = System::Drawing::Color::GreenYellow;
			this->label48->Location = System::Drawing::Point(771, 44);
			this->label48->Name = L"label48";
			this->label48->Size = System::Drawing::Size(13, 13);
			this->label48->TabIndex = 51;
			this->label48->Text = L"- ";
			// 
			// label49
			// 
			this->label49->AutoSize = true;
			this->label49->BackColor = System::Drawing::Color::GreenYellow;
			this->label49->Location = System::Drawing::Point(771, 9);
			this->label49->Name = L"label49";
			this->label49->Size = System::Drawing::Size(13, 13);
			this->label49->TabIndex = 50;
			this->label49->Text = L"- ";
			// 
			// label50
			// 
			this->label50->AutoSize = true;
			this->label50->BackColor = System::Drawing::Color::GreenYellow;
			this->label50->Location = System::Drawing::Point(961, 306);
			this->label50->Name = L"label50";
			this->label50->Size = System::Drawing::Size(13, 13);
			this->label50->TabIndex = 69;
			this->label50->Text = L"- ";
			// 
			// label51
			// 
			this->label51->AutoSize = true;
			this->label51->BackColor = System::Drawing::Color::GreenYellow;
			this->label51->Location = System::Drawing::Point(961, 279);
			this->label51->Name = L"label51";
			this->label51->Size = System::Drawing::Size(13, 13);
			this->label51->TabIndex = 68;
			this->label51->Text = L"- ";
			// 
			// label52
			// 
			this->label52->AutoSize = true;
			this->label52->BackColor = System::Drawing::Color::GreenYellow;
			this->label52->Location = System::Drawing::Point(961, 245);
			this->label52->Name = L"label52";
			this->label52->Size = System::Drawing::Size(13, 13);
			this->label52->TabIndex = 67;
			this->label52->Text = L"- ";
			// 
			// label53
			// 
			this->label53->AutoSize = true;
			this->label53->BackColor = System::Drawing::Color::GreenYellow;
			this->label53->Location = System::Drawing::Point(961, 214);
			this->label53->Name = L"label53";
			this->label53->Size = System::Drawing::Size(13, 13);
			this->label53->TabIndex = 66;
			this->label53->Text = L"- ";
			// 
			// label54
			// 
			this->label54->AutoSize = true;
			this->label54->BackColor = System::Drawing::Color::GreenYellow;
			this->label54->Location = System::Drawing::Point(961, 182);
			this->label54->Name = L"label54";
			this->label54->Size = System::Drawing::Size(13, 13);
			this->label54->TabIndex = 65;
			this->label54->Text = L"- ";
			// 
			// label55
			// 
			this->label55->AutoSize = true;
			this->label55->BackColor = System::Drawing::Color::GreenYellow;
			this->label55->Location = System::Drawing::Point(961, 149);
			this->label55->Name = L"label55";
			this->label55->Size = System::Drawing::Size(13, 13);
			this->label55->TabIndex = 64;
			this->label55->Text = L"- ";
			// 
			// label56
			// 
			this->label56->AutoSize = true;
			this->label56->BackColor = System::Drawing::Color::GreenYellow;
			this->label56->Location = System::Drawing::Point(961, 117);
			this->label56->Name = L"label56";
			this->label56->Size = System::Drawing::Size(13, 13);
			this->label56->TabIndex = 63;
			this->label56->Text = L"- ";
			// 
			// label57
			// 
			this->label57->AutoSize = true;
			this->label57->BackColor = System::Drawing::Color::GreenYellow;
			this->label57->Location = System::Drawing::Point(961, 78);
			this->label57->Name = L"label57";
			this->label57->Size = System::Drawing::Size(13, 13);
			this->label57->TabIndex = 62;
			this->label57->Text = L"- ";
			// 
			// label58
			// 
			this->label58->AutoSize = true;
			this->label58->BackColor = System::Drawing::Color::GreenYellow;
			this->label58->Location = System::Drawing::Point(961, 44);
			this->label58->Name = L"label58";
			this->label58->Size = System::Drawing::Size(13, 13);
			this->label58->TabIndex = 61;
			this->label58->Text = L"- ";
			// 
			// label59
			// 
			this->label59->AutoSize = true;
			this->label59->BackColor = System::Drawing::Color::GreenYellow;
			this->label59->Location = System::Drawing::Point(961, 9);
			this->label59->Name = L"label59";
			this->label59->Size = System::Drawing::Size(13, 13);
			this->label59->TabIndex = 60;
			this->label59->Text = L"- ";
			// 
			// label60
			// 
			this->label60->AutoSize = true;
			this->label60->BackColor = System::Drawing::Color::GreenYellow;
			this->label60->Location = System::Drawing::Point(1142, 306);
			this->label60->Name = L"label60";
			this->label60->Size = System::Drawing::Size(13, 13);
			this->label60->TabIndex = 79;
			this->label60->Text = L"- ";
			// 
			// label61
			// 
			this->label61->AutoSize = true;
			this->label61->BackColor = System::Drawing::Color::GreenYellow;
			this->label61->Location = System::Drawing::Point(1142, 279);
			this->label61->Name = L"label61";
			this->label61->Size = System::Drawing::Size(13, 13);
			this->label61->TabIndex = 78;
			this->label61->Text = L"- ";
			// 
			// label62
			// 
			this->label62->AutoSize = true;
			this->label62->BackColor = System::Drawing::Color::GreenYellow;
			this->label62->Location = System::Drawing::Point(1142, 245);
			this->label62->Name = L"label62";
			this->label62->Size = System::Drawing::Size(13, 13);
			this->label62->TabIndex = 77;
			this->label62->Text = L"- ";
			// 
			// label63
			// 
			this->label63->AutoSize = true;
			this->label63->BackColor = System::Drawing::Color::GreenYellow;
			this->label63->Location = System::Drawing::Point(1142, 214);
			this->label63->Name = L"label63";
			this->label63->Size = System::Drawing::Size(13, 13);
			this->label63->TabIndex = 76;
			this->label63->Text = L"- ";
			// 
			// label64
			// 
			this->label64->AutoSize = true;
			this->label64->BackColor = System::Drawing::Color::GreenYellow;
			this->label64->Location = System::Drawing::Point(1142, 182);
			this->label64->Name = L"label64";
			this->label64->Size = System::Drawing::Size(13, 13);
			this->label64->TabIndex = 75;
			this->label64->Text = L"- ";
			// 
			// label65
			// 
			this->label65->AutoSize = true;
			this->label65->BackColor = System::Drawing::Color::GreenYellow;
			this->label65->Location = System::Drawing::Point(1142, 149);
			this->label65->Name = L"label65";
			this->label65->Size = System::Drawing::Size(13, 13);
			this->label65->TabIndex = 74;
			this->label65->Text = L"- ";
			// 
			// label66
			// 
			this->label66->AutoSize = true;
			this->label66->BackColor = System::Drawing::Color::GreenYellow;
			this->label66->Location = System::Drawing::Point(1142, 117);
			this->label66->Name = L"label66";
			this->label66->Size = System::Drawing::Size(13, 13);
			this->label66->TabIndex = 73;
			this->label66->Text = L"- ";
			// 
			// label67
			// 
			this->label67->AutoSize = true;
			this->label67->BackColor = System::Drawing::Color::GreenYellow;
			this->label67->Location = System::Drawing::Point(1142, 78);
			this->label67->Name = L"label67";
			this->label67->Size = System::Drawing::Size(13, 13);
			this->label67->TabIndex = 72;
			this->label67->Text = L"- ";
			// 
			// label68
			// 
			this->label68->AutoSize = true;
			this->label68->BackColor = System::Drawing::Color::GreenYellow;
			this->label68->Location = System::Drawing::Point(1142, 44);
			this->label68->Name = L"label68";
			this->label68->Size = System::Drawing::Size(13, 13);
			this->label68->TabIndex = 71;
			this->label68->Text = L"- ";
			// 
			// label69
			// 
			this->label69->AutoSize = true;
			this->label69->BackColor = System::Drawing::Color::GreenYellow;
			this->label69->Location = System::Drawing::Point(1142, 9);
			this->label69->Name = L"label69";
			this->label69->Size = System::Drawing::Size(13, 13);
			this->label69->TabIndex = 70;
			this->label69->Text = L"- ";
			// 
			// Pokedex2
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::Color::Lime;
			this->ClientSize = System::Drawing::Size(1362, 332);
			this->Controls->Add(this->label60);
			this->Controls->Add(this->label61);
			this->Controls->Add(this->label62);
			this->Controls->Add(this->label63);
			this->Controls->Add(this->label64);
			this->Controls->Add(this->label65);
			this->Controls->Add(this->label66);
			this->Controls->Add(this->label67);
			this->Controls->Add(this->label68);
			this->Controls->Add(this->label69);
			this->Controls->Add(this->label50);
			this->Controls->Add(this->label51);
			this->Controls->Add(this->label52);
			this->Controls->Add(this->label53);
			this->Controls->Add(this->label54);
			this->Controls->Add(this->label55);
			this->Controls->Add(this->label56);
			this->Controls->Add(this->label57);
			this->Controls->Add(this->label58);
			this->Controls->Add(this->label59);
			this->Controls->Add(this->label40);
			this->Controls->Add(this->label41);
			this->Controls->Add(this->label42);
			this->Controls->Add(this->label43);
			this->Controls->Add(this->label44);
			this->Controls->Add(this->label45);
			this->Controls->Add(this->label46);
			this->Controls->Add(this->label47);
			this->Controls->Add(this->label48);
			this->Controls->Add(this->label49);
			this->Controls->Add(this->label30);
			this->Controls->Add(this->label31);
			this->Controls->Add(this->label32);
			this->Controls->Add(this->label33);
			this->Controls->Add(this->label34);
			this->Controls->Add(this->label35);
			this->Controls->Add(this->label36);
			this->Controls->Add(this->label37);
			this->Controls->Add(this->label38);
			this->Controls->Add(this->label39);
			this->Controls->Add(this->label20);
			this->Controls->Add(this->label21);
			this->Controls->Add(this->label22);
			this->Controls->Add(this->label23);
			this->Controls->Add(this->label24);
			this->Controls->Add(this->label25);
			this->Controls->Add(this->label26);
			this->Controls->Add(this->label27);
			this->Controls->Add(this->label28);
			this->Controls->Add(this->label29);
			this->Controls->Add(this->label10);
			this->Controls->Add(this->label11);
			this->Controls->Add(this->label12);
			this->Controls->Add(this->label13);
			this->Controls->Add(this->label14);
			this->Controls->Add(this->label15);
			this->Controls->Add(this->label16);
			this->Controls->Add(this->label17);
			this->Controls->Add(this->label18);
			this->Controls->Add(this->label19);
			this->Controls->Add(this->label9);
			this->Controls->Add(this->label8);
			this->Controls->Add(this->label7);
			this->Controls->Add(this->label6);
			this->Controls->Add(this->label5);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->lbl1);
			this->Name = L"Pokedex2";
			this->Text = L"Pokedex2";
			this->Load += gcnew System::EventHandler(this, &Pokedex2::Pokedex2_Load);
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void Pokedex2_Load(System::Object^ sender, System::EventArgs^ e) {
	}
};
}
