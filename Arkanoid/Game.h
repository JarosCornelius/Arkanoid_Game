#pragma once

namespace Arkanoid {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for Game
	/// </summary>
	public ref class Game : public System::Windows::Forms::Form
	{
	public:
		Game(void)
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
		~Game()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::PictureBox^  ball;
	private: System::Windows::Forms::Timer^  clock;
	private: System::Windows::Forms::PictureBox^  platform;
	private: System::Windows::Forms::Label^  pointslabel;
	private: System::Windows::Forms::Label^  lifeslabel;
	private: System::Windows::Forms::PictureBox^  losepic;
	private: System::Windows::Forms::PictureBox^  endpic;
	private: System::Windows::Forms::PictureBox^  morepic;
	private: System::Windows::Forms::ImageList^  imageList1;
	private: System::Windows::Forms::PictureBox^  pictureBox1;
	private: System::Windows::Forms::PictureBox^  pictureBox7;
	private: System::Windows::Forms::PictureBox^  pictureBox2;
	private: System::Windows::Forms::PictureBox^  pictureBox3;
	private: System::Windows::Forms::PictureBox^  pictureBox4;
	private: System::Windows::Forms::PictureBox^  pictureBox5;
	private: System::Windows::Forms::PictureBox^  pictureBox6;
	private: System::Windows::Forms::PictureBox^  pictureBox8;
	private: System::Windows::Forms::PictureBox^  pictureBox9;
	private: System::Windows::Forms::PictureBox^  pictureBox10;
	private: System::Windows::Forms::PictureBox^  pictureBox11;
	private: System::Windows::Forms::PictureBox^  pictureBox12;
	private: System::Windows::Forms::PictureBox^  pictureBox13;
	private: System::Windows::Forms::PictureBox^  pictureBox14;
	private: System::Windows::Forms::PictureBox^  pictureBox15;
	private: System::Windows::Forms::PictureBox^  pictureBox16;
	private: System::Windows::Forms::PictureBox^  pictureBox17;
	private: System::Windows::Forms::PictureBox^  pictureBox18;
	private: System::Windows::Forms::PictureBox^  pictureBox19;
	private: System::Windows::Forms::PictureBox^  pictureBox20;
	private: System::Windows::Forms::PictureBox^  pictureBox21;
	private: System::Windows::Forms::PictureBox^  pictureBox22;
	private: System::Windows::Forms::PictureBox^  pictureBox23;
	private: System::Windows::Forms::PictureBox^  pictureBox24;
	private: System::Windows::Forms::PictureBox^  pictureBox25;
	private: System::Windows::Forms::PictureBox^  pictureBox26;
	private: System::Windows::Forms::PictureBox^  pictureBox27;
	private: System::Windows::Forms::PictureBox^  pictureBox28;
	private: System::Windows::Forms::PictureBox^  pictureBox29;
	private: System::Windows::Forms::PictureBox^  pictureBox30;
	private: System::Windows::Forms::PictureBox^  pictureBox31;
	private: System::Windows::Forms::PictureBox^  pictureBox32;
	private: System::Windows::Forms::PictureBox^  pictureBox33;
	private: System::Windows::Forms::PictureBox^  pictureBox34;
	private: System::Windows::Forms::PictureBox^  pictureBox35;
	private: System::Windows::Forms::PictureBox^  pictureBox36;
	private: System::Windows::Forms::PictureBox^  pictureBox37;
	private: System::Windows::Forms::PictureBox^  pictureBox38;
	private: System::Windows::Forms::PictureBox^  pictureBox39;
	private: System::Windows::Forms::PictureBox^  pictureBox40;
	private: System::Windows::Forms::PictureBox^  pictureBox41;
	private: System::Windows::Forms::PictureBox^  pictureBox42;
	private: System::Windows::Forms::PictureBox^  pictureBox43;
	private: System::Windows::Forms::PictureBox^  pictureBox44;
	private: System::Windows::Forms::PictureBox^  pictureBox45;
	protected:

	private: System::ComponentModel::IContainer^  components;

	private:
		/// <summary>
		/// Required designer variable.
		/// </summary>


#pragma region Windows Form Designer generated code
		/// <summary>
		/// Required method for Designer support - do not modify
		/// the contents of this method with the code editor.
		/// </summary>
		void InitializeComponent(void)
		{
			this->components = (gcnew System::ComponentModel::Container());
			System::ComponentModel::ComponentResourceManager^  resources = (gcnew System::ComponentModel::ComponentResourceManager(Game::typeid));
			this->ball = (gcnew System::Windows::Forms::PictureBox());
			this->clock = (gcnew System::Windows::Forms::Timer(this->components));
			this->platform = (gcnew System::Windows::Forms::PictureBox());
			this->pointslabel = (gcnew System::Windows::Forms::Label());
			this->lifeslabel = (gcnew System::Windows::Forms::Label());
			this->losepic = (gcnew System::Windows::Forms::PictureBox());
			this->endpic = (gcnew System::Windows::Forms::PictureBox());
			this->morepic = (gcnew System::Windows::Forms::PictureBox());
			this->imageList1 = (gcnew System::Windows::Forms::ImageList(this->components));
			this->pictureBox1 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox7 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox2 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox3 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox4 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox5 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox6 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox8 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox9 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox10 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox11 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox12 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox13 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox14 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox15 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox16 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox17 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox18 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox19 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox20 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox21 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox22 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox23 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox24 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox25 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox26 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox27 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox28 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox29 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox30 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox31 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox32 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox33 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox34 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox35 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox36 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox37 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox38 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox39 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox40 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox41 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox42 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox43 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox44 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox45 = (gcnew System::Windows::Forms::PictureBox());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->ball))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->platform))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->losepic))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->endpic))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->morepic))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox7))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox2))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox3))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox4))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox5))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox6))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox8))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox9))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox10))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox11))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox12))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox13))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox14))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox15))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox16))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox17))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox18))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox19))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox20))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox21))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox22))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox23))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox24))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox25))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox26))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox27))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox28))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox29))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox30))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox31))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox32))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox33))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox34))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox35))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox36))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox37))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox38))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox39))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox40))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox41))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox42))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox43))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox44))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox45))->BeginInit();
			this->SuspendLayout();
			// 
			// ball
			// 
			this->ball->BackColor = System::Drawing::Color::Transparent;
			this->ball->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"ball.Image")));
			this->ball->Location = System::Drawing::Point(363, 439);
			this->ball->Name = L"ball";
			this->ball->Size = System::Drawing::Size(25, 25);
			this->ball->SizeMode = System::Windows::Forms::PictureBoxSizeMode::AutoSize;
			this->ball->TabIndex = 0;
			this->ball->TabStop = false;
			// 
			// clock
			// 
			this->clock->Enabled = true;
			this->clock->Interval = 20;
			this->clock->Tick += gcnew System::EventHandler(this, &Game::timer1_Tick);
			// 
			// platform
			// 
			this->platform->BackColor = System::Drawing::Color::Transparent;
			this->platform->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"platform.Image")));
			this->platform->Location = System::Drawing::Point(306, 461);
			this->platform->Name = L"platform";
			this->platform->Size = System::Drawing::Size(133, 28);
			this->platform->SizeMode = System::Windows::Forms::PictureBoxSizeMode::AutoSize;
			this->platform->TabIndex = 1;
			this->platform->TabStop = false;
			// 
			// pointslabel
			// 
			this->pointslabel->AutoSize = true;
			this->pointslabel->BackColor = System::Drawing::Color::Transparent;
			this->pointslabel->Font = (gcnew System::Drawing::Font(L"Open Sans", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->pointslabel->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
			this->pointslabel->Location = System::Drawing::Point(530, 23);
			this->pointslabel->Name = L"pointslabel";
			this->pointslabel->Size = System::Drawing::Size(37, 22);
			this->pointslabel->TabIndex = 2;
			this->pointslabel->Text = L"000";
			// 
			// lifeslabel
			// 
			this->lifeslabel->AutoSize = true;
			this->lifeslabel->BackColor = System::Drawing::Color::Transparent;
			this->lifeslabel->Font = (gcnew System::Drawing::Font(L"Open Sans", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->lifeslabel->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
			this->lifeslabel->Location = System::Drawing::Point(659, 23);
			this->lifeslabel->Name = L"lifeslabel";
			this->lifeslabel->Size = System::Drawing::Size(19, 22);
			this->lifeslabel->TabIndex = 3;
			this->lifeslabel->Text = L"3";
			// 
			// losepic
			// 
			this->losepic->BackColor = System::Drawing::Color::Transparent;
			this->losepic->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"losepic.Image")));
			this->losepic->Location = System::Drawing::Point(455, 303);
			this->losepic->Name = L"losepic";
			this->losepic->Size = System::Drawing::Size(251, 200);
			this->losepic->SizeMode = System::Windows::Forms::PictureBoxSizeMode::AutoSize;
			this->losepic->TabIndex = 4;
			this->losepic->TabStop = false;
			this->losepic->Visible = false;
			// 
			// endpic
			// 
			this->endpic->BackColor = System::Drawing::Color::Transparent;
			this->endpic->Cursor = System::Windows::Forms::Cursors::Hand;
			this->endpic->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"endpic.Image")));
			this->endpic->Location = System::Drawing::Point(44, 381);
			this->endpic->Name = L"endpic";
			this->endpic->Size = System::Drawing::Size(199, 85);
			this->endpic->SizeMode = System::Windows::Forms::PictureBoxSizeMode::AutoSize;
			this->endpic->TabIndex = 5;
			this->endpic->TabStop = false;
			this->endpic->Visible = false;
			this->endpic->Click += gcnew System::EventHandler(this, &Game::endpic_Click);
			// 
			// morepic
			// 
			this->morepic->BackColor = System::Drawing::Color::Transparent;
			this->morepic->Cursor = System::Windows::Forms::Cursors::Hand;
			this->morepic->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"morepic.Image")));
			this->morepic->Location = System::Drawing::Point(44, 289);
			this->morepic->Name = L"morepic";
			this->morepic->Size = System::Drawing::Size(199, 86);
			this->morepic->SizeMode = System::Windows::Forms::PictureBoxSizeMode::AutoSize;
			this->morepic->TabIndex = 6;
			this->morepic->TabStop = false;
			this->morepic->Visible = false;
			this->morepic->Click += gcnew System::EventHandler(this, &Game::morepic_Click);
			// 
			// imageList1
			// 
			this->imageList1->ImageStream = (cli::safe_cast<System::Windows::Forms::ImageListStreamer^>(resources->GetObject(L"imageList1.ImageStream")));
			this->imageList1->TransparentColor = System::Drawing::Color::Transparent;
			this->imageList1->Images->SetKeyName(0, L"blok_czerwony.png");
			this->imageList1->Images->SetKeyName(1, L"blok_metal.png");
			this->imageList1->Images->SetKeyName(2, L"blok_metal_rozbity.png");
			this->imageList1->Images->SetKeyName(3, L"blok_niebieski.png");
			this->imageList1->Images->SetKeyName(4, L"blok_zielony.png");
			this->imageList1->Images->SetKeyName(5, L"blok_zolty.png");
			// 
			// pictureBox1
			// 
			this->pictureBox1->BackColor = System::Drawing::Color::Transparent;
			this->pictureBox1->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox1.Image")));
			this->pictureBox1->Location = System::Drawing::Point(3, 217);
			this->pictureBox1->Name = L"pictureBox1";
			this->pictureBox1->Size = System::Drawing::Size(76, 36);
			this->pictureBox1->SizeMode = System::Windows::Forms::PictureBoxSizeMode::AutoSize;
			this->pictureBox1->TabIndex = 7;
			this->pictureBox1->TabStop = false;
			this->pictureBox1->Tag = L"C";
			// 
			// pictureBox7
			// 
			this->pictureBox7->BackColor = System::Drawing::Color::Transparent;
			this->pictureBox7->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox7.Image")));
			this->pictureBox7->Location = System::Drawing::Point(3, 182);
			this->pictureBox7->Name = L"pictureBox7";
			this->pictureBox7->Size = System::Drawing::Size(76, 36);
			this->pictureBox7->SizeMode = System::Windows::Forms::PictureBoxSizeMode::AutoSize;
			this->pictureBox7->TabIndex = 14;
			this->pictureBox7->TabStop = false;
			this->pictureBox7->Tag = L"C";
			// 
			// pictureBox2
			// 
			this->pictureBox2->BackColor = System::Drawing::Color::Transparent;
			this->pictureBox2->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox2.Image")));
			this->pictureBox2->Location = System::Drawing::Point(3, 146);
			this->pictureBox2->Name = L"pictureBox2";
			this->pictureBox2->Size = System::Drawing::Size(76, 36);
			this->pictureBox2->SizeMode = System::Windows::Forms::PictureBoxSizeMode::AutoSize;
			this->pictureBox2->TabIndex = 15;
			this->pictureBox2->TabStop = false;
			this->pictureBox2->Tag = L"C";
			// 
			// pictureBox3
			// 
			this->pictureBox3->BackColor = System::Drawing::Color::Transparent;
			this->pictureBox3->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox3.Image")));
			this->pictureBox3->Location = System::Drawing::Point(3, 110);
			this->pictureBox3->Name = L"pictureBox3";
			this->pictureBox3->Size = System::Drawing::Size(76, 36);
			this->pictureBox3->SizeMode = System::Windows::Forms::PictureBoxSizeMode::AutoSize;
			this->pictureBox3->TabIndex = 16;
			this->pictureBox3->TabStop = false;
			this->pictureBox3->Tag = L"C";
			// 
			// pictureBox4
			// 
			this->pictureBox4->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox4.Image")));
			this->pictureBox4->Location = System::Drawing::Point(3, 74);
			this->pictureBox4->Name = L"pictureBox4";
			this->pictureBox4->Size = System::Drawing::Size(76, 36);
			this->pictureBox4->SizeMode = System::Windows::Forms::PictureBoxSizeMode::AutoSize;
			this->pictureBox4->TabIndex = 17;
			this->pictureBox4->TabStop = false;
			this->pictureBox4->Tag = L"T";
			// 
			// pictureBox5
			// 
			this->pictureBox5->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox5.Image")));
			this->pictureBox5->Location = System::Drawing::Point(76, 74);
			this->pictureBox5->Name = L"pictureBox5";
			this->pictureBox5->Size = System::Drawing::Size(76, 36);
			this->pictureBox5->SizeMode = System::Windows::Forms::PictureBoxSizeMode::AutoSize;
			this->pictureBox5->TabIndex = 22;
			this->pictureBox5->TabStop = false;
			this->pictureBox5->Tag = L"T";
			// 
			// pictureBox6
			// 
			this->pictureBox6->BackColor = System::Drawing::Color::Transparent;
			this->pictureBox6->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox6.Image")));
			this->pictureBox6->Location = System::Drawing::Point(76, 110);
			this->pictureBox6->Name = L"pictureBox6";
			this->pictureBox6->Size = System::Drawing::Size(76, 36);
			this->pictureBox6->SizeMode = System::Windows::Forms::PictureBoxSizeMode::AutoSize;
			this->pictureBox6->TabIndex = 21;
			this->pictureBox6->TabStop = false;
			this->pictureBox6->Tag = L"C";
			// 
			// pictureBox8
			// 
			this->pictureBox8->BackColor = System::Drawing::Color::Transparent;
			this->pictureBox8->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox8.Image")));
			this->pictureBox8->Location = System::Drawing::Point(76, 146);
			this->pictureBox8->Name = L"pictureBox8";
			this->pictureBox8->Size = System::Drawing::Size(76, 36);
			this->pictureBox8->SizeMode = System::Windows::Forms::PictureBoxSizeMode::AutoSize;
			this->pictureBox8->TabIndex = 20;
			this->pictureBox8->TabStop = false;
			this->pictureBox8->Tag = L"C";
			// 
			// pictureBox9
			// 
			this->pictureBox9->BackColor = System::Drawing::Color::Transparent;
			this->pictureBox9->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox9.Image")));
			this->pictureBox9->Location = System::Drawing::Point(76, 182);
			this->pictureBox9->Name = L"pictureBox9";
			this->pictureBox9->Size = System::Drawing::Size(76, 36);
			this->pictureBox9->SizeMode = System::Windows::Forms::PictureBoxSizeMode::AutoSize;
			this->pictureBox9->TabIndex = 19;
			this->pictureBox9->TabStop = false;
			this->pictureBox9->Tag = L"C";
			// 
			// pictureBox10
			// 
			this->pictureBox10->BackColor = System::Drawing::Color::Transparent;
			this->pictureBox10->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox10.Image")));
			this->pictureBox10->Location = System::Drawing::Point(76, 217);
			this->pictureBox10->Name = L"pictureBox10";
			this->pictureBox10->Size = System::Drawing::Size(76, 36);
			this->pictureBox10->SizeMode = System::Windows::Forms::PictureBoxSizeMode::AutoSize;
			this->pictureBox10->TabIndex = 18;
			this->pictureBox10->TabStop = false;
			this->pictureBox10->Tag = L"C";
			// 
			// pictureBox11
			// 
			this->pictureBox11->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox11.Image")));
			this->pictureBox11->Location = System::Drawing::Point(148, 74);
			this->pictureBox11->Name = L"pictureBox11";
			this->pictureBox11->Size = System::Drawing::Size(76, 36);
			this->pictureBox11->SizeMode = System::Windows::Forms::PictureBoxSizeMode::AutoSize;
			this->pictureBox11->TabIndex = 27;
			this->pictureBox11->TabStop = false;
			this->pictureBox11->Tag = L"T";
			// 
			// pictureBox12
			// 
			this->pictureBox12->BackColor = System::Drawing::Color::Transparent;
			this->pictureBox12->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox12.Image")));
			this->pictureBox12->Location = System::Drawing::Point(148, 110);
			this->pictureBox12->Name = L"pictureBox12";
			this->pictureBox12->Size = System::Drawing::Size(76, 36);
			this->pictureBox12->SizeMode = System::Windows::Forms::PictureBoxSizeMode::AutoSize;
			this->pictureBox12->TabIndex = 26;
			this->pictureBox12->TabStop = false;
			this->pictureBox12->Tag = L"C";
			// 
			// pictureBox13
			// 
			this->pictureBox13->BackColor = System::Drawing::Color::Transparent;
			this->pictureBox13->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox13.Image")));
			this->pictureBox13->Location = System::Drawing::Point(148, 146);
			this->pictureBox13->Name = L"pictureBox13";
			this->pictureBox13->Size = System::Drawing::Size(76, 36);
			this->pictureBox13->SizeMode = System::Windows::Forms::PictureBoxSizeMode::AutoSize;
			this->pictureBox13->TabIndex = 25;
			this->pictureBox13->TabStop = false;
			this->pictureBox13->Tag = L"C";
			// 
			// pictureBox14
			// 
			this->pictureBox14->BackColor = System::Drawing::Color::Transparent;
			this->pictureBox14->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox14.Image")));
			this->pictureBox14->Location = System::Drawing::Point(148, 182);
			this->pictureBox14->Name = L"pictureBox14";
			this->pictureBox14->Size = System::Drawing::Size(76, 36);
			this->pictureBox14->SizeMode = System::Windows::Forms::PictureBoxSizeMode::AutoSize;
			this->pictureBox14->TabIndex = 24;
			this->pictureBox14->TabStop = false;
			this->pictureBox14->Tag = L"C";
			// 
			// pictureBox15
			// 
			this->pictureBox15->BackColor = System::Drawing::Color::Transparent;
			this->pictureBox15->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox15.Image")));
			this->pictureBox15->Location = System::Drawing::Point(148, 217);
			this->pictureBox15->Name = L"pictureBox15";
			this->pictureBox15->Size = System::Drawing::Size(76, 36);
			this->pictureBox15->SizeMode = System::Windows::Forms::PictureBoxSizeMode::AutoSize;
			this->pictureBox15->TabIndex = 23;
			this->pictureBox15->TabStop = false;
			this->pictureBox15->Tag = L"C";
			// 
			// pictureBox16
			// 
			this->pictureBox16->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox16.Image")));
			this->pictureBox16->Location = System::Drawing::Point(220, 74);
			this->pictureBox16->Name = L"pictureBox16";
			this->pictureBox16->Size = System::Drawing::Size(76, 36);
			this->pictureBox16->SizeMode = System::Windows::Forms::PictureBoxSizeMode::AutoSize;
			this->pictureBox16->TabIndex = 32;
			this->pictureBox16->TabStop = false;
			this->pictureBox16->Tag = L"T";
			// 
			// pictureBox17
			// 
			this->pictureBox17->BackColor = System::Drawing::Color::Transparent;
			this->pictureBox17->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox17.Image")));
			this->pictureBox17->Location = System::Drawing::Point(220, 110);
			this->pictureBox17->Name = L"pictureBox17";
			this->pictureBox17->Size = System::Drawing::Size(76, 36);
			this->pictureBox17->SizeMode = System::Windows::Forms::PictureBoxSizeMode::AutoSize;
			this->pictureBox17->TabIndex = 31;
			this->pictureBox17->TabStop = false;
			this->pictureBox17->Tag = L"C";
			// 
			// pictureBox18
			// 
			this->pictureBox18->BackColor = System::Drawing::Color::Transparent;
			this->pictureBox18->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox18.Image")));
			this->pictureBox18->Location = System::Drawing::Point(220, 146);
			this->pictureBox18->Name = L"pictureBox18";
			this->pictureBox18->Size = System::Drawing::Size(76, 36);
			this->pictureBox18->SizeMode = System::Windows::Forms::PictureBoxSizeMode::AutoSize;
			this->pictureBox18->TabIndex = 30;
			this->pictureBox18->TabStop = false;
			this->pictureBox18->Tag = L"C";
			// 
			// pictureBox19
			// 
			this->pictureBox19->BackColor = System::Drawing::Color::Transparent;
			this->pictureBox19->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox19.Image")));
			this->pictureBox19->Location = System::Drawing::Point(220, 182);
			this->pictureBox19->Name = L"pictureBox19";
			this->pictureBox19->Size = System::Drawing::Size(76, 36);
			this->pictureBox19->SizeMode = System::Windows::Forms::PictureBoxSizeMode::AutoSize;
			this->pictureBox19->TabIndex = 29;
			this->pictureBox19->TabStop = false;
			this->pictureBox19->Tag = L"C";
			// 
			// pictureBox20
			// 
			this->pictureBox20->BackColor = System::Drawing::Color::Transparent;
			this->pictureBox20->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox20.Image")));
			this->pictureBox20->Location = System::Drawing::Point(220, 217);
			this->pictureBox20->Name = L"pictureBox20";
			this->pictureBox20->Size = System::Drawing::Size(76, 36);
			this->pictureBox20->SizeMode = System::Windows::Forms::PictureBoxSizeMode::AutoSize;
			this->pictureBox20->TabIndex = 28;
			this->pictureBox20->TabStop = false;
			this->pictureBox20->Tag = L"C";
			// 
			// pictureBox21
			// 
			this->pictureBox21->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox21.Image")));
			this->pictureBox21->Location = System::Drawing::Point(292, 74);
			this->pictureBox21->Name = L"pictureBox21";
			this->pictureBox21->Size = System::Drawing::Size(76, 36);
			this->pictureBox21->SizeMode = System::Windows::Forms::PictureBoxSizeMode::AutoSize;
			this->pictureBox21->TabIndex = 37;
			this->pictureBox21->TabStop = false;
			this->pictureBox21->Tag = L"T";
			// 
			// pictureBox22
			// 
			this->pictureBox22->BackColor = System::Drawing::Color::Transparent;
			this->pictureBox22->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox22.Image")));
			this->pictureBox22->Location = System::Drawing::Point(292, 110);
			this->pictureBox22->Name = L"pictureBox22";
			this->pictureBox22->Size = System::Drawing::Size(76, 36);
			this->pictureBox22->SizeMode = System::Windows::Forms::PictureBoxSizeMode::AutoSize;
			this->pictureBox22->TabIndex = 36;
			this->pictureBox22->TabStop = false;
			this->pictureBox22->Tag = L"C";
			// 
			// pictureBox23
			// 
			this->pictureBox23->BackColor = System::Drawing::Color::Transparent;
			this->pictureBox23->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox23.Image")));
			this->pictureBox23->Location = System::Drawing::Point(292, 146);
			this->pictureBox23->Name = L"pictureBox23";
			this->pictureBox23->Size = System::Drawing::Size(76, 36);
			this->pictureBox23->SizeMode = System::Windows::Forms::PictureBoxSizeMode::AutoSize;
			this->pictureBox23->TabIndex = 35;
			this->pictureBox23->TabStop = false;
			this->pictureBox23->Tag = L"C";
			// 
			// pictureBox24
			// 
			this->pictureBox24->BackColor = System::Drawing::Color::Transparent;
			this->pictureBox24->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox24.Image")));
			this->pictureBox24->Location = System::Drawing::Point(292, 182);
			this->pictureBox24->Name = L"pictureBox24";
			this->pictureBox24->Size = System::Drawing::Size(76, 36);
			this->pictureBox24->SizeMode = System::Windows::Forms::PictureBoxSizeMode::AutoSize;
			this->pictureBox24->TabIndex = 34;
			this->pictureBox24->TabStop = false;
			this->pictureBox24->Tag = L"C";
			// 
			// pictureBox25
			// 
			this->pictureBox25->BackColor = System::Drawing::Color::Transparent;
			this->pictureBox25->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox25.Image")));
			this->pictureBox25->Location = System::Drawing::Point(292, 217);
			this->pictureBox25->Name = L"pictureBox25";
			this->pictureBox25->Size = System::Drawing::Size(76, 36);
			this->pictureBox25->SizeMode = System::Windows::Forms::PictureBoxSizeMode::AutoSize;
			this->pictureBox25->TabIndex = 33;
			this->pictureBox25->TabStop = false;
			this->pictureBox25->Tag = L"C";
			// 
			// pictureBox26
			// 
			this->pictureBox26->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox26.Image")));
			this->pictureBox26->Location = System::Drawing::Point(363, 74);
			this->pictureBox26->Name = L"pictureBox26";
			this->pictureBox26->Size = System::Drawing::Size(76, 36);
			this->pictureBox26->SizeMode = System::Windows::Forms::PictureBoxSizeMode::AutoSize;
			this->pictureBox26->TabIndex = 42;
			this->pictureBox26->TabStop = false;
			this->pictureBox26->Tag = L"T";
			// 
			// pictureBox27
			// 
			this->pictureBox27->BackColor = System::Drawing::Color::Transparent;
			this->pictureBox27->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox27.Image")));
			this->pictureBox27->Location = System::Drawing::Point(363, 110);
			this->pictureBox27->Name = L"pictureBox27";
			this->pictureBox27->Size = System::Drawing::Size(76, 36);
			this->pictureBox27->SizeMode = System::Windows::Forms::PictureBoxSizeMode::AutoSize;
			this->pictureBox27->TabIndex = 41;
			this->pictureBox27->TabStop = false;
			this->pictureBox27->Tag = L"C";
			// 
			// pictureBox28
			// 
			this->pictureBox28->BackColor = System::Drawing::Color::Transparent;
			this->pictureBox28->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox28.Image")));
			this->pictureBox28->Location = System::Drawing::Point(363, 146);
			this->pictureBox28->Name = L"pictureBox28";
			this->pictureBox28->Size = System::Drawing::Size(76, 36);
			this->pictureBox28->SizeMode = System::Windows::Forms::PictureBoxSizeMode::AutoSize;
			this->pictureBox28->TabIndex = 40;
			this->pictureBox28->TabStop = false;
			this->pictureBox28->Tag = L"C";
			// 
			// pictureBox29
			// 
			this->pictureBox29->BackColor = System::Drawing::Color::Transparent;
			this->pictureBox29->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox29.Image")));
			this->pictureBox29->Location = System::Drawing::Point(363, 182);
			this->pictureBox29->Name = L"pictureBox29";
			this->pictureBox29->Size = System::Drawing::Size(76, 36);
			this->pictureBox29->SizeMode = System::Windows::Forms::PictureBoxSizeMode::AutoSize;
			this->pictureBox29->TabIndex = 39;
			this->pictureBox29->TabStop = false;
			this->pictureBox29->Tag = L"C";
			// 
			// pictureBox30
			// 
			this->pictureBox30->BackColor = System::Drawing::Color::Transparent;
			this->pictureBox30->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox30.Image")));
			this->pictureBox30->Location = System::Drawing::Point(363, 217);
			this->pictureBox30->Name = L"pictureBox30";
			this->pictureBox30->Size = System::Drawing::Size(76, 36);
			this->pictureBox30->SizeMode = System::Windows::Forms::PictureBoxSizeMode::AutoSize;
			this->pictureBox30->TabIndex = 38;
			this->pictureBox30->TabStop = false;
			this->pictureBox30->Tag = L"C";
			// 
			// pictureBox31
			// 
			this->pictureBox31->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox31.Image")));
			this->pictureBox31->Location = System::Drawing::Point(434, 74);
			this->pictureBox31->Name = L"pictureBox31";
			this->pictureBox31->Size = System::Drawing::Size(76, 36);
			this->pictureBox31->SizeMode = System::Windows::Forms::PictureBoxSizeMode::AutoSize;
			this->pictureBox31->TabIndex = 47;
			this->pictureBox31->TabStop = false;
			this->pictureBox31->Tag = L"T";
			// 
			// pictureBox32
			// 
			this->pictureBox32->BackColor = System::Drawing::Color::Transparent;
			this->pictureBox32->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox32.Image")));
			this->pictureBox32->Location = System::Drawing::Point(434, 110);
			this->pictureBox32->Name = L"pictureBox32";
			this->pictureBox32->Size = System::Drawing::Size(76, 36);
			this->pictureBox32->SizeMode = System::Windows::Forms::PictureBoxSizeMode::AutoSize;
			this->pictureBox32->TabIndex = 46;
			this->pictureBox32->TabStop = false;
			this->pictureBox32->Tag = L"C";
			// 
			// pictureBox33
			// 
			this->pictureBox33->BackColor = System::Drawing::Color::Transparent;
			this->pictureBox33->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox33.Image")));
			this->pictureBox33->Location = System::Drawing::Point(434, 146);
			this->pictureBox33->Name = L"pictureBox33";
			this->pictureBox33->Size = System::Drawing::Size(76, 36);
			this->pictureBox33->SizeMode = System::Windows::Forms::PictureBoxSizeMode::AutoSize;
			this->pictureBox33->TabIndex = 45;
			this->pictureBox33->TabStop = false;
			this->pictureBox33->Tag = L"C";
			// 
			// pictureBox34
			// 
			this->pictureBox34->BackColor = System::Drawing::Color::Transparent;
			this->pictureBox34->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox34.Image")));
			this->pictureBox34->Location = System::Drawing::Point(434, 182);
			this->pictureBox34->Name = L"pictureBox34";
			this->pictureBox34->Size = System::Drawing::Size(76, 36);
			this->pictureBox34->SizeMode = System::Windows::Forms::PictureBoxSizeMode::AutoSize;
			this->pictureBox34->TabIndex = 44;
			this->pictureBox34->TabStop = false;
			this->pictureBox34->Tag = L"C";
			// 
			// pictureBox35
			// 
			this->pictureBox35->BackColor = System::Drawing::Color::Transparent;
			this->pictureBox35->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox35.Image")));
			this->pictureBox35->Location = System::Drawing::Point(434, 217);
			this->pictureBox35->Name = L"pictureBox35";
			this->pictureBox35->Size = System::Drawing::Size(76, 36);
			this->pictureBox35->SizeMode = System::Windows::Forms::PictureBoxSizeMode::AutoSize;
			this->pictureBox35->TabIndex = 43;
			this->pictureBox35->TabStop = false;
			this->pictureBox35->Tag = L"C";
			// 
			// pictureBox36
			// 
			this->pictureBox36->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox36.Image")));
			this->pictureBox36->Location = System::Drawing::Point(506, 74);
			this->pictureBox36->Name = L"pictureBox36";
			this->pictureBox36->Size = System::Drawing::Size(76, 36);
			this->pictureBox36->SizeMode = System::Windows::Forms::PictureBoxSizeMode::AutoSize;
			this->pictureBox36->TabIndex = 52;
			this->pictureBox36->TabStop = false;
			this->pictureBox36->Tag = L"T";
			// 
			// pictureBox37
			// 
			this->pictureBox37->BackColor = System::Drawing::Color::Transparent;
			this->pictureBox37->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox37.Image")));
			this->pictureBox37->Location = System::Drawing::Point(506, 110);
			this->pictureBox37->Name = L"pictureBox37";
			this->pictureBox37->Size = System::Drawing::Size(76, 36);
			this->pictureBox37->SizeMode = System::Windows::Forms::PictureBoxSizeMode::AutoSize;
			this->pictureBox37->TabIndex = 51;
			this->pictureBox37->TabStop = false;
			this->pictureBox37->Tag = L"C";
			// 
			// pictureBox38
			// 
			this->pictureBox38->BackColor = System::Drawing::Color::Transparent;
			this->pictureBox38->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox38.Image")));
			this->pictureBox38->Location = System::Drawing::Point(506, 146);
			this->pictureBox38->Name = L"pictureBox38";
			this->pictureBox38->Size = System::Drawing::Size(76, 36);
			this->pictureBox38->SizeMode = System::Windows::Forms::PictureBoxSizeMode::AutoSize;
			this->pictureBox38->TabIndex = 50;
			this->pictureBox38->TabStop = false;
			this->pictureBox38->Tag = L"C";
			// 
			// pictureBox39
			// 
			this->pictureBox39->BackColor = System::Drawing::Color::Transparent;
			this->pictureBox39->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox39.Image")));
			this->pictureBox39->Location = System::Drawing::Point(506, 182);
			this->pictureBox39->Name = L"pictureBox39";
			this->pictureBox39->Size = System::Drawing::Size(76, 36);
			this->pictureBox39->SizeMode = System::Windows::Forms::PictureBoxSizeMode::AutoSize;
			this->pictureBox39->TabIndex = 49;
			this->pictureBox39->TabStop = false;
			this->pictureBox39->Tag = L"C";
			// 
			// pictureBox40
			// 
			this->pictureBox40->BackColor = System::Drawing::Color::Transparent;
			this->pictureBox40->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox40.Image")));
			this->pictureBox40->Location = System::Drawing::Point(506, 217);
			this->pictureBox40->Name = L"pictureBox40";
			this->pictureBox40->Size = System::Drawing::Size(76, 36);
			this->pictureBox40->SizeMode = System::Windows::Forms::PictureBoxSizeMode::AutoSize;
			this->pictureBox40->TabIndex = 48;
			this->pictureBox40->TabStop = false;
			this->pictureBox40->Tag = L"C";
			// 
			// pictureBox41
			// 
			this->pictureBox41->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox41.Image")));
			this->pictureBox41->Location = System::Drawing::Point(578, 74);
			this->pictureBox41->Name = L"pictureBox41";
			this->pictureBox41->Size = System::Drawing::Size(76, 36);
			this->pictureBox41->SizeMode = System::Windows::Forms::PictureBoxSizeMode::AutoSize;
			this->pictureBox41->TabIndex = 57;
			this->pictureBox41->TabStop = false;
			this->pictureBox41->Tag = L"T";
			// 
			// pictureBox42
			// 
			this->pictureBox42->BackColor = System::Drawing::Color::Transparent;
			this->pictureBox42->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox42.Image")));
			this->pictureBox42->Location = System::Drawing::Point(578, 110);
			this->pictureBox42->Name = L"pictureBox42";
			this->pictureBox42->Size = System::Drawing::Size(76, 36);
			this->pictureBox42->SizeMode = System::Windows::Forms::PictureBoxSizeMode::AutoSize;
			this->pictureBox42->TabIndex = 56;
			this->pictureBox42->TabStop = false;
			this->pictureBox42->Tag = L"C";
			// 
			// pictureBox43
			// 
			this->pictureBox43->BackColor = System::Drawing::Color::Transparent;
			this->pictureBox43->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox43.Image")));
			this->pictureBox43->Location = System::Drawing::Point(578, 146);
			this->pictureBox43->Name = L"pictureBox43";
			this->pictureBox43->Size = System::Drawing::Size(76, 36);
			this->pictureBox43->SizeMode = System::Windows::Forms::PictureBoxSizeMode::AutoSize;
			this->pictureBox43->TabIndex = 55;
			this->pictureBox43->TabStop = false;
			this->pictureBox43->Tag = L"C";
			// 
			// pictureBox44
			// 
			this->pictureBox44->BackColor = System::Drawing::Color::Transparent;
			this->pictureBox44->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox44.Image")));
			this->pictureBox44->Location = System::Drawing::Point(578, 182);
			this->pictureBox44->Name = L"pictureBox44";
			this->pictureBox44->Size = System::Drawing::Size(76, 36);
			this->pictureBox44->SizeMode = System::Windows::Forms::PictureBoxSizeMode::AutoSize;
			this->pictureBox44->TabIndex = 54;
			this->pictureBox44->TabStop = false;
			this->pictureBox44->Tag = L"C";
			// 
			// pictureBox45
			// 
			this->pictureBox45->BackColor = System::Drawing::Color::Transparent;
			this->pictureBox45->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox45.Image")));
			this->pictureBox45->Location = System::Drawing::Point(578, 217);
			this->pictureBox45->Name = L"pictureBox45";
			this->pictureBox45->Size = System::Drawing::Size(76, 36);
			this->pictureBox45->SizeMode = System::Windows::Forms::PictureBoxSizeMode::AutoSize;
			this->pictureBox45->TabIndex = 53;
			this->pictureBox45->TabStop = false;
			this->pictureBox45->Tag = L"C";
			// 
			// Game
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"$this.BackgroundImage")));
			this->ClientSize = System::Drawing::Size(704, 501);
			this->Controls->Add(this->platform);
			this->Controls->Add(this->pictureBox41);
			this->Controls->Add(this->pictureBox42);
			this->Controls->Add(this->pictureBox43);
			this->Controls->Add(this->pictureBox44);
			this->Controls->Add(this->pictureBox45);
			this->Controls->Add(this->pictureBox36);
			this->Controls->Add(this->pictureBox37);
			this->Controls->Add(this->pictureBox38);
			this->Controls->Add(this->pictureBox39);
			this->Controls->Add(this->pictureBox40);
			this->Controls->Add(this->pictureBox31);
			this->Controls->Add(this->pictureBox32);
			this->Controls->Add(this->pictureBox33);
			this->Controls->Add(this->pictureBox34);
			this->Controls->Add(this->pictureBox35);
			this->Controls->Add(this->pictureBox26);
			this->Controls->Add(this->pictureBox27);
			this->Controls->Add(this->pictureBox28);
			this->Controls->Add(this->pictureBox29);
			this->Controls->Add(this->pictureBox30);
			this->Controls->Add(this->pictureBox21);
			this->Controls->Add(this->pictureBox22);
			this->Controls->Add(this->pictureBox23);
			this->Controls->Add(this->pictureBox24);
			this->Controls->Add(this->pictureBox25);
			this->Controls->Add(this->pictureBox16);
			this->Controls->Add(this->pictureBox17);
			this->Controls->Add(this->pictureBox18);
			this->Controls->Add(this->pictureBox19);
			this->Controls->Add(this->pictureBox20);
			this->Controls->Add(this->pictureBox11);
			this->Controls->Add(this->pictureBox12);
			this->Controls->Add(this->pictureBox13);
			this->Controls->Add(this->pictureBox14);
			this->Controls->Add(this->pictureBox15);
			this->Controls->Add(this->pictureBox5);
			this->Controls->Add(this->pictureBox6);
			this->Controls->Add(this->pictureBox8);
			this->Controls->Add(this->pictureBox9);
			this->Controls->Add(this->pictureBox10);
			this->Controls->Add(this->pictureBox4);
			this->Controls->Add(this->pictureBox3);
			this->Controls->Add(this->pictureBox2);
			this->Controls->Add(this->pictureBox7);
			this->Controls->Add(this->pictureBox1);
			this->Controls->Add(this->morepic);
			this->Controls->Add(this->endpic);
			this->Controls->Add(this->losepic);
			this->Controls->Add(this->lifeslabel);
			this->Controls->Add(this->pointslabel);
			this->Controls->Add(this->ball);
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::FixedSingle;
			this->MaximizeBox = false;
			this->Name = L"Game";
			this->Tag = L"C";
			this->Text = L"Game";
			this->Load += gcnew System::EventHandler(this, &Game::Game_Load);
			this->KeyDown += gcnew System::Windows::Forms::KeyEventHandler(this, &Game::movement);
			this->KeyUp += gcnew System::Windows::Forms::KeyEventHandler(this, &Game::Game_KeyUp);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->ball))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->platform))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->losepic))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->endpic))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->morepic))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox7))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox2))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox3))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox4))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox5))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox6))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox8))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox9))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox10))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox11))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox12))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox13))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox14))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox15))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox16))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox17))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox18))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox19))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox20))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox21))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox22))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox23))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox24))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox25))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox26))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox27))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox28))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox29))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox30))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox31))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox32))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox33))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox34))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox35))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox36))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox37))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox38))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox39))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox40))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox41))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox42))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox43))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox44))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox45))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}

		int x = 0, y = 0;
		char way;
		int points = 0;
		int lifes = 3;
		bool blockspace = false;
		int bricks = 0;

#pragma endregion

		private: Void play(String^ sound)
		try{
			System::Media::SoundPlayer^ playgame = gcnew System::Media::SoundPlayer();
			playgame->SoundLocation = sound;
			playgame->Load();
			playgame->Play();

		}
				 catch (...)
				 {

				 }


		private: Void hit(System::Windows::Forms::Control^ brick)
		{
			if ((ball->Top + ball->Height > brick->Top) && 
				(ball->Top < brick->Top + brick->Height) &&
				(ball->Left + ball->Width > brick->Left) &&
				(ball->Left < brick->Left + brick->Width) &&
				(brick->Visible == true))
			{

				if (brick->Tag != "T")
				{ 
					
					brick->Visible = false;
					points += 10;

					bricks += 1;
					play(".. /dzwieki/zbicie.wav");
				}
				else
				{
					if (x > 0)
					{
						x += 1;
					}
					else
					{
						x -= 1;
					}
					
					if (y > 0)
					{
						y += 1;
					}
					else
					{
						y -= 1;
					}
					PictureBox^ crushedbrick = (PictureBox^)brick;
					crushedbrick->Image = imageList1->Images[2];
					ball->Image = Image::FromFile("../grafiki/pilka_power.png");
					brick->Tag = "CT";
					points += 10;

					play(".. /dzwieki/kruszenie.wav");

				}
				y = -y;
				
				points += 10;
			}

			pointslabel->Text = "" + points;

			if (bricks == 45)
			{
				clock->Enabled = false;
				play(".. /dzwieki/wygrana.wav");
				bricks = 0;
				Game::BackgroundImage = Image::FromFile("../grafiki/tlo_koniec.png");
				morepic->Visible = true;
				endpic->Visible = true;
	

			}

		}


	private: System::Void timer1_Tick(System::Object^  sender, System::EventArgs^  e) {


		for each(Control^ elemement in this->Controls)
		{
			if (elemement->Tag == "C" || elemement->Tag == "T" || elemement->Tag=="CT")
			{
				hit(elemement);
			}

		}



		//ball movement
		ball->Left += x;
		ball->Top += y;


		//ball right wall event
		if (ball->Left >= Game::Width - ball->Width - 20)
		{
			x = -x;
		}
		

		//ball top wall event
		if (ball->Top <= 75)
		{
			y = -y; 
		}


		//ball left wall event
		if (ball->Left <= 10)
		{
			x = -x;
		}

		//platform left movement
		if ((way == 'L') && (platform->Left>10 ))
		{
			platform->Left -= 20;
			if (x == 0 && y == 0)
			{
				ball->Left -= 20;
			}
		}

		//platform right movement
		if ((way == 'R') && (platform->Left< Game::Width - platform->Width - 25 ))
		{
			platform->Left += 20;
			if (x == 0 && y == 0)
			{
				ball->Left += 20;
			}
		}

		//ball, platform event
		if ((ball->Left > platform-> Left - (ball->Width)) && (ball->Left < platform -> Left + platform->Width) && (ball->Top + ball->Height > platform->Top))
		{
			y = -y;
			play(".. /dzwieki/paletka.wav");
		}
		else if (ball->Top + ball->Height-5 >= platform -> Top + 5)
		{

			clock->Enabled = false;
			ball->Visible = false;
			points -= 10;
			lifes--;
			pointslabel->Text = "" + points;

			if (lifes > 0)
			{
				
				MessageBox::Show("Ball lost!!!", "Game Over", MessageBoxButtons::OK, MessageBoxIcon::Stop);
				ball->Top = platform->Top - ball->Height - 3;
				ball->Left = platform->Left + platform->Width / 2;
				x = 0;
				y = 0;
				clock->Enabled = true;
				ball->Visible = true;
				lifeslabel->Text = "" + lifes;
				blockspace = false;
				ball->Image = Image::FromFile("../grafiki/pilka.png");
			}
			else
			{
				lifeslabel->Text = ":C";
				losepic->Visible = true;
				morepic->Visible = true;
				endpic->Visible = true;
				play(".. /dzwieki/smiech.wav");

			}
			
		}


	}
	private: System::Void movement(System::Object^  sender, System::Windows::Forms::KeyEventArgs^  e) {

		if (e->KeyCode == Keys::Left) way = 'L';
		if (e->KeyCode == Keys::Right) way = 'R';
		if ((e->KeyCode == Keys::Space) && (blockspace == false))
		{
			x = -10; y = -10;
			blockspace = true;
		}

	}
	private: System::Void Game_KeyUp(System::Object^  sender, System::Windows::Forms::KeyEventArgs^  e) {

		way = 'S';

	}
private: System::Void Game_Load(System::Object^  sender, System::EventArgs^  e) {
}
private: System::Void endpic_Click(System::Object^  sender, System::EventArgs^  e) {

	this->Close();
}
private: System::Void morepic_Click(System::Object^  sender, System::EventArgs^  e) {

	ball->Image = Image::FromFile("../grafiki/pilka.png");
	lifes = 3;
	points = 0;
	pointslabel->Text = "" + points;

	lifeslabel->Text = "" + lifes;
	losepic->Visible = false;
	morepic->Visible = false;
	endpic->Visible = false;

	ball->Top = platform->Top - ball->Height - 3;
	ball->Left = platform->Left + platform->Width / 2;

	ball->Visible = true;
	clock->Enabled = true;
	x = 0;
	y = 0;
	blockspace = false;

	Game::BackgroundImage = Image::FromFile("../grafiki/tlo_gra_01.png");

	for each (Control^ elements in this->Controls)
	{
		if (elements->Tag == "C" || elements->Tag == "T" || elements->Tag == "CT")
		{
			elements->Visible = true;
		}

		if (elements->Tag == "CT")
		{
			elements->Tag = "T";
			PictureBox^ pict = (PictureBox^)elements;
			pict->Image = imageList1->Images[1];
		}
	}
}
};
}
