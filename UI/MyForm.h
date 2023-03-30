#pragma once
#include "MyForm1.h"


namespace ui {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for MyForm
	/// </summary>
	public ref class MyForm : public System::Windows::Forms::Form
	{
	public:
		MyForm(void)
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
		~MyForm()
		{
			if (components)
			{
				delete components;
			}
		}

	private: System::String^ usedContainerName = L"��� ����������";
	private: int numberOfSelectedContainer = -1;

	private: MyForm1^ form1;
	private: System::Windows::Forms::TextBox^ textBox1;
	private: System::Windows::Forms::TextBox^ textBox2;
	private: System::Windows::Forms::TextBox^ textBox3;
	private: System::Windows::Forms::TextBox^ textBox4;
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::Button^ button2;
	private: System::Windows::Forms::MenuStrip^ menuStrip1;
	private: System::Windows::Forms::ToolStripMenuItem^ aVLtreeToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ dToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ dToolStripMenuItem1;
	private: System::Windows::Forms::ToolStripMenuItem^ ��������������������ToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ ����������������������ToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ ����������������������ToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ ��������������������������������ToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ �����������������������ToolStripMenuItem;

	protected:


	protected:

	private:
		/// <summary>
		/// Required designer variable.
		/// </summary>
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Required method for Designer support - do not modify
		/// the contents of this method with the code editor.
		/// </summary>
		void InitializeComponent(void)
		{
			this->form1 = gcnew MyForm1;
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->textBox2 = (gcnew System::Windows::Forms::TextBox());
			this->textBox3 = (gcnew System::Windows::Forms::TextBox());
			this->textBox4 = (gcnew System::Windows::Forms::TextBox());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->menuStrip1 = (gcnew System::Windows::Forms::MenuStrip());
			this->aVLtreeToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->dToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->dToolStripMenuItem1 = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->��������������������ToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->����������������������ToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->����������������������ToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->��������������������������������ToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->�����������������������ToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->menuStrip1->SuspendLayout();
			this->SuspendLayout();
			// 
			// textBox1
			// 
			this->textBox1->Location = System::Drawing::Point(10, 27);
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(293, 20);
			this->textBox1->TabIndex = 0;
			// 
			// textBox2
			// 
			this->textBox2->Location = System::Drawing::Point(33, 57);
			this->textBox2->Name = L"textBox2";
			this->textBox2->Size = System::Drawing::Size(40, 20);
			this->textBox2->TabIndex = 2;
			this->textBox2->TextChanged += gcnew System::EventHandler(this, &MyForm::textBox2_TextChanged);
			// 
			// textBox3
			// 
			this->textBox3->Location = System::Drawing::Point(100, 57);
			this->textBox3->Name = L"textBox3";
			this->textBox3->Size = System::Drawing::Size(40, 20);
			this->textBox3->TabIndex = 3;
			// 
			// textBox4
			// 
			this->textBox4->Location = System::Drawing::Point(170, 57);
			this->textBox4->Name = L"textBox4";
			this->textBox4->Size = System::Drawing::Size(40, 20);
			this->textBox4->TabIndex = 4;
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(10, 60);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(17, 13);
			this->label1->TabIndex = 5;
			this->label1->Text = L"X:";
			this->label1->Click += gcnew System::EventHandler(this, &MyForm::label1_Click);
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(80, 60);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(17, 13);
			this->label2->TabIndex = 6;
			this->label2->Text = L"Y:";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Location = System::Drawing::Point(150, 60);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(17, 13);
			this->label3->TabIndex = 7;
			this->label3->Text = L"Z:";
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Location = System::Drawing::Point(10, 100);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(17, 13);
			this->label4->TabIndex = 7;
			this->label4->Text = L"Result: ";
			// 
			// button2
			// 
			this->button2->Location = System::Drawing::Point(220, 56);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(83, 22);
			this->button2->TabIndex = 8;
			this->button2->Text = L"���������";
			this->button2->UseVisualStyleBackColor = true;
			this->button2->Click += gcnew System::EventHandler(this, &MyForm::button2_Click);
			// 
			// menuStrip1
			// 
			this->menuStrip1->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Center;
			this->menuStrip1->GripStyle = System::Windows::Forms::ToolStripGripStyle::Visible;
			this->menuStrip1->Items->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(2) {
				this->aVLtreeToolStripMenuItem,
					this->�����������������������ToolStripMenuItem
			});
			this->menuStrip1->LayoutStyle = System::Windows::Forms::ToolStripLayoutStyle::HorizontalStackWithOverflow;
			this->menuStrip1->Location = System::Drawing::Point(0, 0);
			this->menuStrip1->Name = L"menuStrip1";
			this->menuStrip1->Size = System::Drawing::Size(315, 24);
			this->menuStrip1->TabIndex = 9;
			this->menuStrip1->Text = L"menuStrip1";
			// 
			// aVLtreeToolStripMenuItem
			// 
			this->aVLtreeToolStripMenuItem->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(6) {
				this->dToolStripMenuItem,
					this->dToolStripMenuItem1, this->��������������������ToolStripMenuItem, this->����������������������ToolStripMenuItem, this->����������������������ToolStripMenuItem,
					this->��������������������������������ToolStripMenuItem
			});
			this->aVLtreeToolStripMenuItem->Name = L"aVLtreeToolStripMenuItem";
			this->aVLtreeToolStripMenuItem->Size = System::Drawing::Size(107, 20);
			this->aVLtreeToolStripMenuItem->Text = this->usedContainerName;
			this->aVLtreeToolStripMenuItem->Click += gcnew System::EventHandler(this, &MyForm::aVLtreeToolStripMenuItem_Click);
			// 
			// dToolStripMenuItem
			// 
			this->dToolStripMenuItem->Name = L"dToolStripMenuItem";
			this->dToolStripMenuItem->Size = System::Drawing::Size(222, 22);
			this->dToolStripMenuItem->Text = L"AVL ������";
			this->dToolStripMenuItem->Click += gcnew System::EventHandler(this, &MyForm::dToolStripMenuItem_Click);
			// 
			// dToolStripMenuItem1
			// 
			this->dToolStripMenuItem1->Name = L"dToolStripMenuItem1";
			this->dToolStripMenuItem1->Size = System::Drawing::Size(222, 22);
			this->dToolStripMenuItem1->Text = L"R-B ������";
			this->dToolStripMenuItem1->Click += gcnew System::EventHandler(this, &MyForm::dToolStripMenuItem1_Click);
			// 
			// ��������������������ToolStripMenuItem
			// 
			this->��������������������ToolStripMenuItem->Name = L"��������������������ToolStripMenuItem";
			this->��������������������ToolStripMenuItem->Size = System::Drawing::Size(222, 22);
			this->��������������������ToolStripMenuItem->Text = L"������������� �������";
			this->��������������������ToolStripMenuItem->Click += gcnew System::EventHandler(this, &MyForm::��������������������ToolStripMenuItem_Click);
			// 
			// ����������������������ToolStripMenuItem
			// 
			this->����������������������ToolStripMenuItem->Name = L"����������������������ToolStripMenuItem";
			this->����������������������ToolStripMenuItem->Size = System::Drawing::Size(222, 22);
			this->����������������������ToolStripMenuItem->Text = L"��������������� �������";
			this->����������������������ToolStripMenuItem->Click += gcnew System::EventHandler(this, &MyForm::����������������������ToolStripMenuItem_Click);
			// 
			// ����������������������ToolStripMenuItem
			// 
			this->����������������������ToolStripMenuItem->Name = L"����������������������ToolStripMenuItem";
			this->����������������������ToolStripMenuItem->Size = System::Drawing::Size(222, 22);
			this->����������������������ToolStripMenuItem->Text = L"���-������� CHAIN";
			this->����������������������ToolStripMenuItem->Click += gcnew System::EventHandler(this, &MyForm::����������������������ToolStripMenuItem_Click);
			// 
			// ��������������������������������ToolStripMenuItem
			// 
			this->��������������������������������ToolStripMenuItem->Name = L"��������������������������������ToolStripMenuItem";
			this->��������������������������������ToolStripMenuItem->Size = System::Drawing::Size(222, 22);
			this->��������������������������������ToolStripMenuItem->Text = L"���-������� OA";
			this->��������������������������������ToolStripMenuItem->Click += gcnew System::EventHandler(this, &MyForm::��������������������������������ToolStripMenuItem_Click);
			// 
			// �����������������������ToolStripMenuItem
			// 
			this->�����������������������ToolStripMenuItem->Name = L"�����������������������ToolStripMenuItem";
			this->�����������������������ToolStripMenuItem->Size = System::Drawing::Size(170, 20);
			this->�����������������������ToolStripMenuItem->Text = L"������������ �����������";
			this->�����������������������ToolStripMenuItem->Click += gcnew System::EventHandler(this, &MyForm::�����������������������ToolStripMenuItem_Click);
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->ClientSize = System::Drawing::Size(315, 261);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->textBox4);
			this->Controls->Add(this->textBox3);
			this->Controls->Add(this->textBox2);
			this->Controls->Add(this->textBox1);
			this->Controls->Add(this->menuStrip1);
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::FixedSingle;
			this->MainMenuStrip = this->menuStrip1;
			this->Name = L"MyForm";
			this->Text = L"Polynomial �alculation";
			this->Load += gcnew System::EventHandler(this, &MyForm::MyForm_Load);
			this->menuStrip1->ResumeLayout(false);
			this->menuStrip1->PerformLayout();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void MyForm_Load(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void button2_Click(System::Object^ sender, System::EventArgs^ e) {
		switch (this->numberOfSelectedContainer) {
		case -1:
			MessageBox::Show("�� ������ ��� ����������", "������!", MessageBoxButtons::OK, MessageBoxIcon::Warning);
			break;

		}
	}
	private: System::Void label1_Click(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void textBox2_TextChanged(System::Object^ sender, System::EventArgs^ e) {
	}
private: System::Void label4_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void aVLtreeToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void �����������������������ToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
	(gcnew MyForm1)->Show();
}
private: System::Void ��������������������������������ToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
	this->usedContainerName = L"���-������� OA";
	this->numberOfSelectedContainer = 5;
	this->aVLtreeToolStripMenuItem->Text = this->usedContainerName;
}
private: System::Void ����������������������ToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
	this->usedContainerName = L"���-������� CHAIN";
	this->numberOfSelectedContainer = 4;
	this->aVLtreeToolStripMenuItem->Text = this->usedContainerName;
}
private: System::Void ����������������������ToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
	this->usedContainerName = L"���������������..";
	this->numberOfSelectedContainer = 3;
	this->aVLtreeToolStripMenuItem->Text = this->usedContainerName;
}
private: System::Void ��������������������ToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
	this->usedContainerName = L"�������������..";
	this->numberOfSelectedContainer = 2;
	this->aVLtreeToolStripMenuItem->Text = this->usedContainerName;
}
private: System::Void dToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
	   this->usedContainerName = L"AVL ������";
	   this->numberOfSelectedContainer = 0;
	   this->aVLtreeToolStripMenuItem->Text = this->usedContainerName;
}
private: System::Void dToolStripMenuItem1_Click(System::Object^ sender, System::EventArgs^ e) {
	this->usedContainerName = L"R-B ������";
	this->numberOfSelectedContainer = 1;
	this->aVLtreeToolStripMenuItem->Text = this->usedContainerName;
}	   
};
}
