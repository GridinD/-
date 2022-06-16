#pragma once

namespace xui {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// —водка дл€ MyForm
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
		/// ќсвободить все используемые ресурсы.
		/// </summary>
		~MyForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Button^ button1;
	protected:
	private: System::Windows::Forms::Button^ button2;

	private:
		/// <summary>
		/// ќб€зательна€ переменна€ конструктора.
		/// </summary>
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// “ребуемый метод дл€ поддержки конструктора Ч не измен€йте 
		/// содержимое этого метода с помощью редактора кода.
		/// </summary>
		void InitializeComponent(void)
		{
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->SuspendLayout();
			// 
			// button1
			// 
			this->button1->Location = System::Drawing::Point(174, 388);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(101, 34);
			this->button1->TabIndex = 0;
			this->button1->Text = L"figure";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &MyForm::button1_Click);
			// 
			// button2
			// 
			this->button2->Location = System::Drawing::Point(433, 388);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(103, 34);
			this->button2->TabIndex = 1;
			this->button2->Text = L"callor";
			this->button2->UseVisualStyleBackColor = true;
			this->button2->Click += gcnew System::EventHandler(this, &MyForm::button2_Click);
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(734, 467);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->button1);
			this->Name = L"MyForm";
			this->Text = L"MyForm";
			this->ResumeLayout(false);

		}
#pragma endregion
	private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
		Graphics^ gfx = CreateGraphics(); 
		gfx-> DrawRectangle(Pens:: Black,100,100, 210,210);
		gfx->DrawEllipse(Pens::Black, 145, 100, 120, 210);
		gfx->DrawEllipse(Pens::Black, 100, 145, 210, 120);
	}	
	private: System::Void button2_Click(System::Object^ sender, System::EventArgs^ e) {
		Graphics^ gfx = CreateGraphics();
		Brush^ BrshR = gcnew SolidBrush(Color::Red);
		Brush^ BrshB = gcnew SolidBrush(Color::Green);
		gfx->FillRectangle(BrshR, 100, 100, 210, 210);
		gfx ->FillEllipse(BrshB, 145, 100, 120, 210);
		gfx->FillEllipse(BrshB, 100, 145, 210, 120);

	}
	};
}
