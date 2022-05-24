#pragma once
#include "Matrica.h"

namespace formlab9 {

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
	private: System::Windows::Forms::ToolStripMenuItem^ выборЦветаФормыToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ красныйToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ зеленыйToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ синийToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ отменаЦветаToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ работаСМатрицейToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ формированиеToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ обработкаToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ оПрограммеToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ сведенияОРазработчикеToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ заданиеПоОбработкеToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ выходToolStripMenuItem;
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::ToolStripMenuItem^ матрицаПослеОбработкиToolStripMenuItem;

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
			this->выборЦветаФормыToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->красныйToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->зеленыйToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->синийToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->отменаЦветаToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->работаСМатрицейToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->формированиеToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->обработкаToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->матрицаПослеОбработкиToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->оПрограммеToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->сведенияОРазработчикеToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->заданиеПоОбработкеToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->выходToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->menuStrip1->SuspendLayout();
			this->SuspendLayout();
			// 
			// menuStrip1
			// 
			this->menuStrip1->Items->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(4) {
				this->выборЦветаФормыToolStripMenuItem,
					this->работаСМатрицейToolStripMenuItem, this->оПрограммеToolStripMenuItem, this->выходToolStripMenuItem
			});
			this->menuStrip1->Location = System::Drawing::Point(0, 0);
			this->menuStrip1->Name = L"menuStrip1";
			this->menuStrip1->Size = System::Drawing::Size(791, 24);
			this->menuStrip1->TabIndex = 0;
			this->menuStrip1->Text = L"menuStrip1";
			// 
			// выборЦветаФормыToolStripMenuItem
			// 
			this->выборЦветаФормыToolStripMenuItem->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(4) {
				this->красныйToolStripMenuItem,
					this->зеленыйToolStripMenuItem, this->синийToolStripMenuItem, this->отменаЦветаToolStripMenuItem
			});
			this->выборЦветаФормыToolStripMenuItem->Name = L"выборЦветаФормыToolStripMenuItem";
			this->выборЦветаФормыToolStripMenuItem->Size = System::Drawing::Size(133, 20);
			this->выборЦветаФормыToolStripMenuItem->Text = L"Выбор цвета формы";
			// 
			// красныйToolStripMenuItem
			// 
			this->красныйToolStripMenuItem->Name = L"красныйToolStripMenuItem";
			this->красныйToolStripMenuItem->Size = System::Drawing::Size(180, 22);
			this->красныйToolStripMenuItem->Text = L"Красный";
			this->красныйToolStripMenuItem->Click += gcnew System::EventHandler(this, &MyForm::красныйToolStripMenuItem_Click);
			// 
			// зеленыйToolStripMenuItem
			// 
			this->зеленыйToolStripMenuItem->Name = L"зеленыйToolStripMenuItem";
			this->зеленыйToolStripMenuItem->Size = System::Drawing::Size(180, 22);
			this->зеленыйToolStripMenuItem->Text = L"Зеленый";
			this->зеленыйToolStripMenuItem->Click += gcnew System::EventHandler(this, &MyForm::зеленыйToolStripMenuItem_Click);
			// 
			// синийToolStripMenuItem
			// 
			this->синийToolStripMenuItem->Name = L"синийToolStripMenuItem";
			this->синийToolStripMenuItem->Size = System::Drawing::Size(180, 22);
			this->синийToolStripMenuItem->Text = L"Синий";
			// 
			// отменаЦветаToolStripMenuItem
			// 
			this->отменаЦветаToolStripMenuItem->Name = L"отменаЦветаToolStripMenuItem";
			this->отменаЦветаToolStripMenuItem->Size = System::Drawing::Size(180, 22);
			this->отменаЦветаToolStripMenuItem->Text = L"Отмена цвета";
			// 
			// работаСМатрицейToolStripMenuItem
			// 
			this->работаСМатрицейToolStripMenuItem->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(3) {
				this->формированиеToolStripMenuItem,
					this->обработкаToolStripMenuItem, this->матрицаПослеОбработкиToolStripMenuItem
			});
			this->работаСМатрицейToolStripMenuItem->Name = L"работаСМатрицейToolStripMenuItem";
			this->работаСМатрицейToolStripMenuItem->Size = System::Drawing::Size(123, 20);
			this->работаСМатрицейToolStripMenuItem->Text = L"Работа с матрицей";
			// 
			// формированиеToolStripMenuItem
			// 
			this->формированиеToolStripMenuItem->Name = L"формированиеToolStripMenuItem";
			this->формированиеToolStripMenuItem->Size = System::Drawing::Size(221, 22);
			this->формированиеToolStripMenuItem->Text = L"Формирование";
			this->формированиеToolStripMenuItem->Click += gcnew System::EventHandler(this, &MyForm::формированиеToolStripMenuItem_Click);
			// 
			// обработкаToolStripMenuItem
			// 
			this->обработкаToolStripMenuItem->Name = L"обработкаToolStripMenuItem";
			this->обработкаToolStripMenuItem->Size = System::Drawing::Size(221, 22);
			this->обработкаToolStripMenuItem->Text = L"Обработка";
			this->обработкаToolStripMenuItem->Click += gcnew System::EventHandler(this, &MyForm::обработкаToolStripMenuItem_Click);
			// 
			// матрицаПослеОбработкиToolStripMenuItem
			// 
			this->матрицаПослеОбработкиToolStripMenuItem->Name = L"матрицаПослеОбработкиToolStripMenuItem";
			this->матрицаПослеОбработкиToolStripMenuItem->Size = System::Drawing::Size(221, 22);
			this->матрицаПослеОбработкиToolStripMenuItem->Text = L"Матрица после обработки";
			this->матрицаПослеОбработкиToolStripMenuItem->Click += gcnew System::EventHandler(this, &MyForm::матрицаПослеОбработкиToolStripMenuItem_Click);
			// 
			// оПрограммеToolStripMenuItem
			// 
			this->оПрограммеToolStripMenuItem->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(2) {
				this->сведенияОРазработчикеToolStripMenuItem,
					this->заданиеПоОбработкеToolStripMenuItem
			});
			this->оПрограммеToolStripMenuItem->Name = L"оПрограммеToolStripMenuItem";
			this->оПрограммеToolStripMenuItem->Size = System::Drawing::Size(94, 20);
			this->оПрограммеToolStripMenuItem->Text = L"О программе";
			// 
			// сведенияОРазработчикеToolStripMenuItem
			// 
			this->сведенияОРазработчикеToolStripMenuItem->Name = L"сведенияОРазработчикеToolStripMenuItem";
			this->сведенияОРазработчикеToolStripMenuItem->Size = System::Drawing::Size(215, 22);
			this->сведенияОРазработчикеToolStripMenuItem->Text = L"Сведения о разработчике";
			this->сведенияОРазработчикеToolStripMenuItem->Click += gcnew System::EventHandler(this, &MyForm::сведенияОРазработчикеToolStripMenuItem_Click);
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
			this->label1->Location = System::Drawing::Point(281, 233);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(171, 13);
			this->label1->TabIndex = 1;
			this->label1->Text = L"Результаты обработки матрицы";
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(791, 529);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->menuStrip1);
			this->MainMenuStrip = this->menuStrip1;
			this->Name = L"MyForm";
			this->Text = L"MyForm";
			this->menuStrip1->ResumeLayout(false);
			this->menuStrip1->PerformLayout();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void формированиеToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
		int i, j;
		System::String^ s = gcnew String("");
		form(A);
		for (i = 0; i < 6; i++) {
			for (j = 0; j < 6; j++) {
				s = s + System::Convert::ToString(A[i][j]) + "\t";
			}
			s = s + "\t\n";
		}
		MessageBox::Show(s, "Матрица");
	}
private: System::Void обработкаToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
	int sum;
	sum = Summ(A);
	label1->Text = "Сумма элементов над побочной диагональю = " + System::Convert::ToString(sum);
}
private: System::Void выходToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
	this->Close();
}
private: System::Void матрицаПослеОбработкиToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
 	int i, j;
	int q;
	System::String^ a = gcnew String("");
	q = Summ(A);
	Result(A, q);
	for (i = 0; i < 6; i++) {
		for (j = 0; j < 6; j++) {
			a = a + System::Convert::ToString(A[i][j]) + "\t";
		}
		a = a + "\t\n";
	}
	MessageBox::Show(a, "Матрица после обработки");
}
private: System::Void сведенияОРазработчикеToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
	System::String^ s = gcnew String(" ");
	s = s + "Гридин Данила Дмитриевич";
	MessageBox::Show(s, "Разработчик");
}
private: System::Void заданиеПоОбработкеToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
	System::String^ h = gcnew String(" ");
	h = h + "1.Сформировать датчиком случайных чисел матрицу 6х6\n 2.Нати в матрице сумму чисел, стоящих над побочной диагональю\n 3.Увеличить элементы третьего столбца матрицы на число, полученное в предыдущем пункте";
	MessageBox::Show(h, "Задание по обработке");
}
};
}

