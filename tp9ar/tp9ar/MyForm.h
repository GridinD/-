#pragma once
#include "Matrica.h"
namespace tp9ar {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Сводка для MyForm
	/// </summary>
	public ref class MyForm : public System::Windows::Forms::Form
	{
	public:
		MyForm(void)
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
		~MyForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::MenuStrip^ menuStrip1;
	protected:
	private: System::Windows::Forms::ToolStripMenuItem^ выборЦветаМатрицыToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ обработкаМатрицыToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ формированиеToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ обработкаToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ оПрограммеToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ сведениеОРазработчикеToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ заданиеПоОбработкеToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ выходToolStripMenuItem;
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Label^ label3;



	private:
		/// <summary>
		/// Обязательная переменная конструктора.
		/// </summary>
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Требуемый метод для поддержки конструктора — не изменяйте 
		/// содержимое этого метода с помощью редактора кода.
		/// </summary>
		void InitializeComponent(void)
		{
			this->menuStrip1 = (gcnew System::Windows::Forms::MenuStrip());
			this->выборЦветаМатрицыToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->обработкаМатрицыToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->формированиеToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->обработкаToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->оПрограммеToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->сведениеОРазработчикеToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->заданиеПоОбработкеToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->выходToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->menuStrip1->SuspendLayout();
			this->SuspendLayout();
			// 
			// menuStrip1
			// 
			this->menuStrip1->Items->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(4) {
				this->выборЦветаМатрицыToolStripMenuItem,
					this->обработкаМатрицыToolStripMenuItem, this->оПрограммеToolStripMenuItem, this->выходToolStripMenuItem
			});
			this->menuStrip1->Location = System::Drawing::Point(0, 0);
			this->menuStrip1->Name = L"menuStrip1";
			this->menuStrip1->Size = System::Drawing::Size(721, 24);
			this->menuStrip1->TabIndex = 0;
			this->menuStrip1->Text = L"menuStrip1";
			// 
			// выборЦветаМатрицыToolStripMenuItem
			// 
			this->выборЦветаМатрицыToolStripMenuItem->Name = L"выборЦветаМатрицыToolStripMenuItem";
			this->выборЦветаМатрицыToolStripMenuItem->Size = System::Drawing::Size(142, 20);
			this->выборЦветаМатрицыToolStripMenuItem->Text = L"Выбор цвета матрицы";
			// 
			// обработкаМатрицыToolStripMenuItem
			// 
			this->обработкаМатрицыToolStripMenuItem->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(2) {
				this->формированиеToolStripMenuItem,
					this->обработкаToolStripMenuItem
			});
			this->обработкаМатрицыToolStripMenuItem->Name = L"обработкаМатрицыToolStripMenuItem";
			this->обработкаМатрицыToolStripMenuItem->Size = System::Drawing::Size(132, 20);
			this->обработкаМатрицыToolStripMenuItem->Text = L"Обработка матрицы";
			// 
			// формированиеToolStripMenuItem
			// 
			this->формированиеToolStripMenuItem->Name = L"формированиеToolStripMenuItem";
			this->формированиеToolStripMenuItem->Size = System::Drawing::Size(159, 22);
			this->формированиеToolStripMenuItem->Text = L"Формирование";
			this->формированиеToolStripMenuItem->Click += gcnew System::EventHandler(this, &MyForm::формированиеToolStripMenuItem_Click);
			// 
			// обработкаToolStripMenuItem
			// 
			this->обработкаToolStripMenuItem->Name = L"обработкаToolStripMenuItem";
			this->обработкаToolStripMenuItem->Size = System::Drawing::Size(159, 22);
			this->обработкаToolStripMenuItem->Text = L"Обработка";
			this->обработкаToolStripMenuItem->Click += gcnew System::EventHandler(this, &MyForm::обработкаToolStripMenuItem_Click);
			// 
			// оПрограммеToolStripMenuItem
			// 
			this->оПрограммеToolStripMenuItem->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(2) {
				this->сведениеОРазработчикеToolStripMenuItem,
					this->заданиеПоОбработкеToolStripMenuItem
			});
			this->оПрограммеToolStripMenuItem->Name = L"оПрограммеToolStripMenuItem";
			this->оПрограммеToolStripMenuItem->Size = System::Drawing::Size(94, 20);
			this->оПрограммеToolStripMenuItem->Text = L"О программе";
			// 
			// сведениеОРазработчикеToolStripMenuItem
			// 
			this->сведениеОРазработчикеToolStripMenuItem->Name = L"сведениеОРазработчикеToolStripMenuItem";
			this->сведениеОРазработчикеToolStripMenuItem->Size = System::Drawing::Size(215, 22);
			this->сведениеОРазработчикеToolStripMenuItem->Text = L"Сведение о разработчике";
			this->сведениеОРазработчикеToolStripMenuItem->Click += gcnew System::EventHandler(this, &MyForm::сведениеОРазработчикеToolStripMenuItem_Click);
			// 
			// заданиеПоОбработкеToolStripMenuItem
			// 
			this->заданиеПоОбработкеToolStripMenuItem->Name = L"заданиеПоОбработкеToolStripMenuItem";
			this->заданиеПоОбработкеToolStripMenuItem->Size = System::Drawing::Size(215, 22);
			this->заданиеПоОбработкеToolStripMenuItem->Text = L"Задание по обработке";
			this->заданиеПоОбработкеToolStripMenuItem->Click += gcnew System::EventHandler(this, &MyForm::заданиеПоОбработкеToolStripMenuItem_Click);
			// 
			// выходToolStripMenuItem
			// 
			this->выходToolStripMenuItem->Name = L"выходToolStripMenuItem";
			this->выходToolStripMenuItem->Size = System::Drawing::Size(54, 20);
			this->выходToolStripMenuItem->Text = L"Выход";
			this->выходToolStripMenuItem->Click += gcnew System::EventHandler(this, &MyForm::выходToolStripMenuItem_Click);
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(247, 181);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(176, 13);
			this->label1->TabIndex = 1;
			this->label1->Text = L"Максимум на главной диагонали";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(247, 250);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(176, 13);
			this->label2->TabIndex = 2;
			this->label2->Text = L"Минимум на побочной диагонали";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Location = System::Drawing::Point(196, 99);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(291, 13);
			this->label3->TabIndex = 3;
			this->label3->Text = L"Количество четных элементов над главной диагональю";
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(721, 445);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->menuStrip1);
			this->MainMenuStrip = this->menuStrip1;
			this->Name = L"MyForm";
			this->Text = L"MyForm";
			this->Load += gcnew System::EventHandler(this, &MyForm::MyForm_Load);
			this->menuStrip1->ResumeLayout(false);
			this->menuStrip1->PerformLayout();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void MyForm_Load(System::Object^ sender, System::EventArgs^ e) {
	}
private: System::Void формированиеToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
	int i, j;
	System::String^ s = gcnew String("");
	form(A);
	for (i = 0; i < 6; i++) {
		for (j = 0; j < 6; j++) {
			s = s + System::Convert::ToString(A[i][j]) + "\t";
		}
		s = s + "\r\n";
	}
	MessageBox::Show(s, "Матрица");
}
private: System::Void обработкаToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
	int Max;
	int Min;
	int K;
	Max = MaxMain(A);
	Min = MinSide(A);
	K = quantity(A);
	label1->Text = "Максимум на главной диагонали = " + System::Convert::ToString(Max);
	label2->Text = "Минимум на побочной диагонали = " + System::Convert::ToString(Min);
	label3->Text = "Количество элементов над главной диагональю = " + System::Convert::ToString(K);
}
private: System::Void сведениеОРазработчикеToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
	System::String^ r = gcnew String("Веретено Артемий Алексеевич");
	MessageBox::Show(r, "Разработчик");
}
private: System::Void заданиеПоОбработкеToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
	System::String^ z = gcnew String("Создать матрицу A[N][N], найти в матрице количество четных чисел над главной диагональю матрицы, найти значения максимального на главной диагонали и минимального элемента матрицы на побочной диагонали."); 
	MessageBox::Show(z, "Задание");
}
private: System::Void выходToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
	this->Close();
}
};
}
