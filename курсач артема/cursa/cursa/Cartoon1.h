#pragma once
static int x, y, x1, x2, y2,x3,y3; //Координаты
static float y1;
static int T,k,q;

namespace cursa {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace System::Media;

	/// <summary>
	/// Сводка для Cartoon1
	/// </summary>
	public ref class Cartoon1 : public System::Windows::Forms::Form
	{
	public:
		Cartoon1(void)
		{
			InitializeComponent();
			//
			//TODO: добавьте код конструктора
			//
		}

	protected:
		/// <summary>
		/// Освободить все используемые ресурсы.
		/// </summary>
		~Cartoon1()
		{
			if (components)
			{
				delete components;
			}
		}

	protected:
	private: System::Windows::Forms::PictureBox^ pictureBox3;
	private: System::Windows::Forms::Timer^ timer1;
	private: System::Windows::Forms::MenuStrip^ menuStrip1;
	private: System::Windows::Forms::ToolStripMenuItem^ startToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ stopToolStripMenuItem;
	private: System::Windows::Forms::PictureBox^ pictureBox1;
	private: System::Windows::Forms::PictureBox^ pictureBox2;
	private: System::Windows::Forms::PictureBox^ pictureBox4;

	private: System::Windows::Forms::PictureBox^ pictureBox5;
	private: System::Windows::Forms::PictureBox^ pictureBox6;
	private: System::Windows::Forms::PictureBox^ pictureBox7;
	private: System::Windows::Forms::PictureBox^ pictureBox8;
	private: System::Windows::Forms::PictureBox^ pictureBox9;
	private: System::ComponentModel::IContainer^ components;

	private:
		/// <summary>
		/// Обязательная переменная конструктора.
		/// </summary>


#pragma region Windows Form Designer generated code
		/// <summary>
		/// Требуемый метод для поддержки конструктора — не изменяйте 
		/// содержимое этого метода с помощью редактора кода.
		/// </summary>
		void InitializeComponent(void)
		{
			this->components = (gcnew System::ComponentModel::Container());
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(Cartoon1::typeid));
			this->pictureBox3 = (gcnew System::Windows::Forms::PictureBox());
			this->timer1 = (gcnew System::Windows::Forms::Timer(this->components));
			this->menuStrip1 = (gcnew System::Windows::Forms::MenuStrip());
			this->startToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->stopToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->pictureBox1 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox2 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox4 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox5 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox6 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox7 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox8 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox9 = (gcnew System::Windows::Forms::PictureBox());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox3))->BeginInit();
			this->menuStrip1->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox2))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox4))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox5))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox6))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox7))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox8))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox9))->BeginInit();
			this->SuspendLayout();
			// 
			// pictureBox3
			// 
			this->pictureBox3->BackColor = System::Drawing::Color::Transparent;
			this->pictureBox3->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox3.Image")));
			this->pictureBox3->Location = System::Drawing::Point(748, 352);
			this->pictureBox3->Name = L"pictureBox3";
			this->pictureBox3->Size = System::Drawing::Size(155, 144);
			this->pictureBox3->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
			this->pictureBox3->TabIndex = 3;
			this->pictureBox3->TabStop = false;
			// 
			// timer1
			// 
			this->timer1->Tick += gcnew System::EventHandler(this, &Cartoon1::timer1_Tick);
			// 
			// menuStrip1
			// 
			this->menuStrip1->Items->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(2) {
				this->startToolStripMenuItem,
					this->stopToolStripMenuItem
			});
			this->menuStrip1->Location = System::Drawing::Point(0, 0);
			this->menuStrip1->Name = L"menuStrip1";
			this->menuStrip1->Size = System::Drawing::Size(1050, 24);
			this->menuStrip1->TabIndex = 4;
			this->menuStrip1->Text = L"menuStrip1";
			// 
			// startToolStripMenuItem
			// 
			this->startToolStripMenuItem->Name = L"startToolStripMenuItem";
			this->startToolStripMenuItem->Size = System::Drawing::Size(43, 20);
			this->startToolStripMenuItem->Text = L"Start";
			this->startToolStripMenuItem->Click += gcnew System::EventHandler(this, &Cartoon1::startToolStripMenuItem_Click);
			// 
			// stopToolStripMenuItem
			// 
			this->stopToolStripMenuItem->Name = L"stopToolStripMenuItem";
			this->stopToolStripMenuItem->Size = System::Drawing::Size(43, 20);
			this->stopToolStripMenuItem->Text = L"Stop";
			this->stopToolStripMenuItem->Click += gcnew System::EventHandler(this, &Cartoon1::stopToolStripMenuItem_Click);
			// 
			// pictureBox1
			// 
			this->pictureBox1->BackColor = System::Drawing::Color::Transparent;
			this->pictureBox1->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox1.Image")));
			this->pictureBox1->Location = System::Drawing::Point(-14, 352);
			this->pictureBox1->Name = L"pictureBox1";
			this->pictureBox1->Size = System::Drawing::Size(177, 216);
			this->pictureBox1->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
			this->pictureBox1->TabIndex = 5;
			this->pictureBox1->TabStop = false;
			// 
			// pictureBox2
			// 
			this->pictureBox2->BackColor = System::Drawing::Color::Transparent;
			this->pictureBox2->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox2.Image")));
			this->pictureBox2->Location = System::Drawing::Point(121, 404);
			this->pictureBox2->Name = L"pictureBox2";
			this->pictureBox2->Size = System::Drawing::Size(68, 40);
			this->pictureBox2->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
			this->pictureBox2->TabIndex = 6;
			this->pictureBox2->TabStop = false;
			// 
			// pictureBox4
			// 
			this->pictureBox4->BackColor = System::Drawing::Color::Transparent;
			this->pictureBox4->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox4.Image")));
			this->pictureBox4->Location = System::Drawing::Point(758, 56);
			this->pictureBox4->Name = L"pictureBox4";
			this->pictureBox4->Size = System::Drawing::Size(193, 112);
			this->pictureBox4->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
			this->pictureBox4->TabIndex = 7;
			this->pictureBox4->TabStop = false;
			// 
			// pictureBox5
			// 
			this->pictureBox5->BackColor = System::Drawing::Color::Transparent;
			this->pictureBox5->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox5.Image")));
			this->pictureBox5->Location = System::Drawing::Point(731, 321);
			this->pictureBox5->Name = L"pictureBox5";
			this->pictureBox5->Size = System::Drawing::Size(193, 161);
			this->pictureBox5->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
			this->pictureBox5->TabIndex = 9;
			this->pictureBox5->TabStop = false;
			// 
			// pictureBox6
			// 
			this->pictureBox6->BackColor = System::Drawing::Color::Transparent;
			this->pictureBox6->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox6.Image")));
			this->pictureBox6->Location = System::Drawing::Point(731, 319);
			this->pictureBox6->Name = L"pictureBox6";
			this->pictureBox6->Size = System::Drawing::Size(200, 163);
			this->pictureBox6->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
			this->pictureBox6->TabIndex = 10;
			this->pictureBox6->TabStop = false;
			// 
			// pictureBox7
			// 
			this->pictureBox7->BackColor = System::Drawing::Color::Transparent;
			this->pictureBox7->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox7.Image")));
			this->pictureBox7->Location = System::Drawing::Point(311, 456);
			this->pictureBox7->Name = L"pictureBox7";
			this->pictureBox7->Size = System::Drawing::Size(193, 112);
			this->pictureBox7->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
			this->pictureBox7->TabIndex = 11;
			this->pictureBox7->TabStop = false;
			// 
			// pictureBox8
			// 
			this->pictureBox8->BackColor = System::Drawing::Color::Transparent;
			this->pictureBox8->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox8.Image")));
			this->pictureBox8->Location = System::Drawing::Point(510, 456);
			this->pictureBox8->Name = L"pictureBox8";
			this->pictureBox8->Size = System::Drawing::Size(193, 112);
			this->pictureBox8->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
			this->pictureBox8->TabIndex = 12;
			this->pictureBox8->TabStop = false;
			// 
			// pictureBox9
			// 
			this->pictureBox9->BackColor = System::Drawing::Color::Transparent;
			this->pictureBox9->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox9.Image")));
			this->pictureBox9->Location = System::Drawing::Point(201, 252);
			this->pictureBox9->Name = L"pictureBox9";
			this->pictureBox9->Size = System::Drawing::Size(71, 29);
			this->pictureBox9->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
			this->pictureBox9->TabIndex = 13;
			this->pictureBox9->TabStop = false;
			// 
			// Cartoon1
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(1050, 567);
			this->Controls->Add(this->pictureBox9);
			this->Controls->Add(this->pictureBox8);
			this->Controls->Add(this->pictureBox7);
			this->Controls->Add(this->pictureBox6);
			this->Controls->Add(this->pictureBox5);
			this->Controls->Add(this->pictureBox3);
			this->Controls->Add(this->pictureBox4);
			this->Controls->Add(this->pictureBox1);
			this->Controls->Add(this->menuStrip1);
			this->Controls->Add(this->pictureBox2);
			this->MainMenuStrip = this->menuStrip1;
			this->Name = L"Cartoon1";
			this->Text = L"Cartoon1";
			this->Load += gcnew System::EventHandler(this, &Cartoon1::Cartoon1_Load);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox3))->EndInit();
			this->menuStrip1->ResumeLayout(false);
			this->menuStrip1->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox2))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox4))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox5))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox6))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox7))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox8))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox9))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
		SoundPlayer^ boom = gcnew System::Media::SoundPlayer();
		SoundPlayer^ hel = gcnew System::Media::SoundPlayer();
		SoundPlayer^ rpg = gcnew System::Media::SoundPlayer();
	private: System::Void Cartoon1_Load(System::Object^ sender, System::EventArgs^ e) {
		this->BackgroundImage = Image::FromFile("C:\\Users\\veret\\OneDrive\\Рабочий стол\\папука\\city.jpg");
		pictureBox3->Hide();
		pictureBox2->Hide();
		pictureBox1->Hide();
		pictureBox4->Hide();
		pictureBox5->Hide();
		pictureBox6->Hide();
		pictureBox7->Hide();
		pictureBox8->Hide();
		k = -2;
		q = 0;
		boom->SoundLocation = "C:\\Users\\veret\\OneDrive\\Рабочий стол\\папука\\bum .wav";
		hel->SoundLocation = "C:\\Users\\veret\\OneDrive\\Рабочий стол\\папука\\верт.wav";
		rpg->SoundLocation = "C:\\Users\\veret\\OneDrive\\Рабочий стол\\папука\\рпг.wav";
	}
	private: System::Void startToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
		pictureBox1->Show();
		pictureBox2->Show();
		pictureBox4->Show();
		pictureBox3->Show();
		timer1->Enabled = true;
		timer1->Interval = 10;
		startToolStripMenuItem->Enabled = false;
		stopToolStripMenuItem->Enabled = true;
		hel->PlayLooping();

	}
private: System::Void stopToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
	timer1->Enabled = false;
	stopToolStripMenuItem->Enabled = false;
	startToolStripMenuItem->Enabled = true;
	hel->Stop();
}
private: System::Void timer1_Tick(System::Object^ sender, System::EventArgs^ e) {
	T++;
	if (T == 1) {
		x = -14; //Chel
		y = 352;
		pictureBox1->Location = Point(x, y);
		x1 = 121; //roc
		y1 = 404;
		pictureBox2->Location = Point(x1, y1);
		x2 = 748;  //car
		y2 = 352;
		pictureBox3->Location = Point(x2, y2);
		x3 = 758; //hel
		y3 = 56;
		pictureBox4->Location = Point(x3, y3);
	}
	if (T > 1 && T < 230) {
		x1 = x1 + 3;
		y1 = y1 + 0, 5;
		pictureBox2->Location = Point(x1, y1);
		if (T == 2) {
			hel->Stop();
			rpg->Play();
		}
		if (T == 50) {
			rpg->Stop();
			hel->PlayLooping();
		}
	}
	if (T > 231 && T <350) {
		pictureBox2->Hide();
		pictureBox3->Hide();
		pictureBox5->Show();
		if (T == 232) {
			hel->Stop();
			boom->Play();
		}
		if (T == 270) {
			boom->Stop();
			hel->PlayLooping();
		}
		
	}
	if (T == 350) {
		pictureBox5->Hide();//boom

	}
	if (T > 350) {
		pictureBox6->Show();//fire

	}
	if (T > 1) {
		if (T % 350 == 0) {
			k = k * (-1);
			pictureBox4->Image = pictureBox7->Image;
		}
		if(T%700 ==0){
			pictureBox4->Image = pictureBox8->Image;
		}
		x3 = x3 + k;
		pictureBox4->Location = Point(x3, y3);
	}

}
};
}
