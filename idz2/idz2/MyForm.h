#pragma once
#include "tree.h"

int n, m;
int* values = new int;
int* moves = new int;

namespace idz2 {

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
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::TextBox^ textBox1;
	private: System::Windows::Forms::Button^ button1;
	private: System::Windows::Forms::PictureBox^ pictureBox1;

	private: System::Windows::Forms::Button^ button2;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::PictureBox^ pictureBox3;
	private: System::Windows::Forms::PictureBox^ pictureBox4;
	private: System::Windows::Forms::PictureBox^ pictureBox2;





	protected:

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
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->pictureBox1 = (gcnew System::Windows::Forms::PictureBox());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->pictureBox3 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox4 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox2 = (gcnew System::Windows::Forms::PictureBox());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox3))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox4))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox2))->BeginInit();
			this->SuspendLayout();
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(38, 27);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(28, 17);
			this->label1->TabIndex = 0;
			this->label1->Text = L"n =";
			// 
			// textBox1
			// 
			this->textBox1->Location = System::Drawing::Point(72, 24);
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(59, 22);
			this->textBox1->TabIndex = 1;
			// 
			// button1
			// 
			this->button1->Location = System::Drawing::Point(39, 68);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(92, 24);
			this->button1->TabIndex = 2;
			this->button1->Text = L"рисовать";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &MyForm::Button1_Click);
			// 
			// pictureBox1
			// 
			this->pictureBox1->Location = System::Drawing::Point(137, 1);
			this->pictureBox1->Name = L"pictureBox1";
			this->pictureBox1->Size = System::Drawing::Size(1784, 337);
			this->pictureBox1->TabIndex = 3;
			this->pictureBox1->TabStop = false;
			// 
			// button2
			// 
			this->button2->Location = System::Drawing::Point(39, 107);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(92, 24);
			this->button2->TabIndex = 5;
			this->button2->Text = L"обновить";
			this->button2->UseVisualStyleBackColor = true;
			this->button2->Click += gcnew System::EventHandler(this, &MyForm::Button2_Click);
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(36, 770);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(0, 17);
			this->label2->TabIndex = 6;
			// 
			// pictureBox3
			// 
			this->pictureBox3->Location = System::Drawing::Point(147, 817);
			this->pictureBox3->Name = L"pictureBox3";
			this->pictureBox3->Size = System::Drawing::Size(391, 124);
			this->pictureBox3->TabIndex = 7;
			this->pictureBox3->TabStop = false;
			// 
			// pictureBox4
			// 
			this->pictureBox4->Location = System::Drawing::Point(544, 817);
			this->pictureBox4->Name = L"pictureBox4";
			this->pictureBox4->Size = System::Drawing::Size(391, 124);
			this->pictureBox4->TabIndex = 8;
			this->pictureBox4->TabStop = false;
			// 
			// pictureBox2
			// 
			this->pictureBox2->Location = System::Drawing::Point(136, 357);
			this->pictureBox2->Name = L"pictureBox2";
			this->pictureBox2->Size = System::Drawing::Size(1785, 454);
			this->pictureBox2->TabIndex = 9;
			this->pictureBox2->TabStop = false;
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(1924, 1055);
			this->Controls->Add(this->pictureBox2);
			this->Controls->Add(this->pictureBox4);
			this->Controls->Add(this->pictureBox3);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->pictureBox1);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->textBox1);
			this->Controls->Add(this->label1);
			this->Name = L"MyForm";
			this->Text = L"MyForm";
			this->Load += gcnew System::EventHandler(this, &MyForm::MyForm_Load);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox3))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox4))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox2))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void MyForm_Load(System::Object^ sender, System::EventArgs^ e) {
		pictureBox3->Image = Image::FromFile("C:\\Users\\senny\\source\\repos\\idz2\\idz2\\кривая1.jpg");
		pictureBox4->Image = Image::FromFile("C:\\Users\\senny\\source\\repos\\idz2\\idz2\\кривая2.jpg");
	}
	private: System::Void Button1_Click(System::Object^ sender, System::EventArgs^ e) {
		n = Convert::ToInt32(textBox1->Text);
		if ((1 <= n) && (n <= 6))
		{
			label2->Text = " ";
			for (int k = 1; k <= n; k++)
			{
				m = 1;
				tree mytree;
				for (int i = 1; i < k; i++)
					m *= 4;
				mytree.create_tree(k);
				values = new int[m];
				mytree.create_values(values);
				Paint_Tree(k);
				Paint_Fractal(k);
			}
		}
		else 
			label2->Text = "Ошибка, недопустимое n";
	}
private: System::Void Button2_Click(System::Object^ sender, System::EventArgs^ e) {
	pictureBox1->Refresh();
	label2->Text = " ";
}
private: void Paint_Tree(int n)
{
	Graphics^ Графика = pictureBox1->CreateGraphics();
	pictureBox1->Refresh();
	m = 1;
	int x;
	int x1;
	for (int i = 0; i < n; i++)
	{
		if (i == 0)
			Графика->DrawEllipse(System::Drawing::Pens::Red, 512, 0, 3, 3);
		if (i == 1)
		{
			m *= 4;
			x = 204;
			x1 = 60;
			for (int j = 0; j < m; j++)
			{
				Графика->DrawEllipse(System::Drawing::Pens::Blue, x, 50, 3, 3);
				Графика->DrawLine(System::Drawing::Pens::Blue, 512, 0, x, 50);
				if (i < n - 1)
					for (int k = 0; k < 4; k++)
					{
						Графика->DrawLine(System::Drawing::Pens::Green, x, 50, x1, 100);
						x1 += 60;
					}
				x += 204;
			}
		}
		if (i == 2)
		{
			m *= 4;
			x = 60;
			x1 = 16;
			for (int j = 0; j < m; j++)
			{
				Графика->DrawEllipse(System::Drawing::Pens::Green, x, 100, 3, 3);
				if (i < n - 1)
					for (int k = 0; k < 4; k++)
					{
						Графика->DrawLine(System::Drawing::Pens::Yellow, x, 100, x1, 150);
						x1 += 16;
					}
				x += 60;
			}
		}
		if (i == 3)
		{
			m *= 4;
			x = 16;
			x1 = 4;
			for (int j = 0; j < m; j++)
			{
				Графика->DrawEllipse(System::Drawing::Pens::Yellow, x, 150, 3, 3);
				if (i < n - 1)
					for (int k = 0; k < 4; k++)
					{
						Графика->DrawLine(System::Drawing::Pens::Violet, x, 150, x1, 200);
						x1 += 4;
					}
				x += 16;
			}
		}
		if (i == 4)
		{
			m *= 4;
			x = 4;
			x1 = 0;
			for (int j = 0; j < m; j++)
			{
				Графика->DrawEllipse(System::Drawing::Pens::Violet, x, 200, 3, 3);
				if (i < n - 1)
					for (int k = 0; k < 4; k++)
					{
						Графика->DrawLine(System::Drawing::Pens::Cyan, x, 200, x1, 250);
						x1 += 1;
					}
				x += 4;
			}
		}
		if (i == 5)
		{
			m *= 4;
			x = 0;
			for (int j = 0; j < m; j++)
			{
				Графика->DrawEllipse(System::Drawing::Pens::Cyan, x, 250, 3, 3);
				x += 1;
			}
		}
	}
}
private: void Paint_Fractal10(int step, int* x, int* y)
{
	Graphics^ Графика = pictureBox2->CreateGraphics();
	Графика->DrawLine(System::Drawing::Pens::Red, *x, *y, *x, *y + step);
	*y += step;
	Графика->DrawLine(System::Drawing::Pens::Red, *x, *y, *x + step, *y);
	*x += step;
	Графика->DrawLine(System::Drawing::Pens::Red, *x, *y, *x, *y - step);
	*y -= step;
}
private: void Paint_Fractal11(int step, int* x, int* y)
{
	Graphics^ Графика = pictureBox2->CreateGraphics();
	Графика->DrawLine(System::Drawing::Pens::Red, *x, *y, *x + step, *y);
	*x += step;
	Графика->DrawLine(System::Drawing::Pens::Red, *x, *y, *x, *y + step);
	*y += step;
	Графика->DrawLine(System::Drawing::Pens::Red, *x, *y, *x - step, *y);
	*x -= step;
}
private: void Paint_Fractal12(int step, int* x, int* y)
{
	Graphics^ Графика = pictureBox2->CreateGraphics();
	Графика->DrawLine(System::Drawing::Pens::Red, *x, *y, *x, *y - step);
	*y -= step;
	Графика->DrawLine(System::Drawing::Pens::Red, *x, *y, *x - step, *y);
	*x -= step;
	Графика->DrawLine(System::Drawing::Pens::Red, *x, *y, *x, *y + step);
	*y += step;
}
private: void Paint_Fractal13(int step, int* x, int* y)
{
	Graphics^ Графика = pictureBox2->CreateGraphics();
	Графика->DrawLine(System::Drawing::Pens::Red, *x, *y, *x - step, *y);
	*x -= step;
	Графика->DrawLine(System::Drawing::Pens::Red, *x, *y, *x, *y - step);
	*y -= step;
	Графика->DrawLine(System::Drawing::Pens::Red, *x, *y, *x + step, *y);
	*x += step;
}
	private: void Paint_Fractal(int k)
	{
		Graphics^ Графика = pictureBox2->CreateGraphics();
		int x0 = (k - 1) * 160;
		int m1 = 1;
		for (int i = 0; i < k; i++)
			m1 *= 2;
		int x = x0 + (64 / m1);
		int y = 64 / m1;
		int step = 128 / m1;
		for (int i = 0; i < m; i++)
		{
			if (values[i] == 0)
			{
				Paint_Fractal10(step, &x, &y);
				if (i != m - 1)
					if ((values[i + 1] == 0) || (values[i + 1] == 1))
					{
						Графика->DrawLine(System::Drawing::Pens::Red, x, y, x + step, y);
						x += step;
					}
					else
					{
						Графика->DrawLine(System::Drawing::Pens::Red, x, y, x, y - step);
						y -= step;
					}
			}
			if (values[i] == 1)
			{
				Paint_Fractal11(step, &x, &y);
				if (i != m - 1)
					if ((values[i + 1] == 0) || (values[i + 1] == 1))
					{
						Графика->DrawLine(System::Drawing::Pens::Red, x, y, x, y + step);
						y += step;
					}
					else
					{
						Графика->DrawLine(System::Drawing::Pens::Red, x, y, x - step, y);
						x -= step;
					}
			}
			if (values[i] == 2)
			{
				Paint_Fractal12(step, &x, &y);
				if (i != m - 1)
					if ((values[i + 1] == 2) || (values[i + 1] == 3))
					{
						Графика->DrawLine(System::Drawing::Pens::Red, x, y, x - step, y);
						x -= step;
					}
					else
					{
						Графика->DrawLine(System::Drawing::Pens::Red, x, y, x, y + step);
						y += step;
					}
			}
			if (values[i] == 3)
			{
				Paint_Fractal13(step, &x, &y);
				if (i != m - 1)
					if ((values[i + 1] == 2) || (values[i + 1] == 3))
					{
						Графика->DrawLine(System::Drawing::Pens::Red, x, y, x, y - step);
						y -= step;
					}
					else
					{
						Графика->DrawLine(System::Drawing::Pens::Red, x, y, x + step, y);
						x += step;
					}
			}
		}

	}
};
}
