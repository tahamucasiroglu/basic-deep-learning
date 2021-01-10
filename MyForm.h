#pragma once
#include<Windows.h>
#include <ctime>
#include "variable.h"
#include "func.h"
#include <iostream>

namespace homework2 {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// MyForm için özet
	/// </summary>
	public ref class MyForm : public System::Windows::Forms::Form
	{
	public:
		MyForm(void)
		{
			InitializeComponent();
			//
			//TODO: Oluþturucu kodunu buraya ekle
			//
		}

	protected:
		/// <summary>
		///Kullanýlan tüm kaynaklarý temizleyin.
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
	private: System::Windows::Forms::ComboBox^ comboBox1;
	private: System::Windows::Forms::ComboBox^ comboBox2;
	private: System::Windows::Forms::GroupBox^ groupBox1;
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::GroupBox^ groupBox2;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::GroupBox^ groupBox3;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::MenuStrip^ menuStrip1;
	private: System::Windows::Forms::ToolStripMenuItem^ processToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ singlelayerToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ penceptronToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ penceptronDeltaToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ multiPenceptronToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ multiPenceptronDeltaToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ multilayerToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ penceptronToolStripMenuItem1;
	private: System::Windows::Forms::ToolStripMenuItem^ samplesToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ showKoordinatToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ singlelayer2ClassToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ singlelayer4ClassToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ multilayer2ClassToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ multilayer2Class2ToolStripMenuItem;

	private:
		/// <summary>
		///Gerekli tasarýmcý deðiþkeni.
		/// </summary>
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Tasarýmcý desteði için gerekli metot - bu metodun 
		///içeriðini kod düzenleyici ile deðiþtirmeyin.
		/// </summary>
		void InitializeComponent(void)
		{
			this->pictureBox1 = (gcnew System::Windows::Forms::PictureBox());
			this->comboBox1 = (gcnew System::Windows::Forms::ComboBox());
			this->comboBox2 = (gcnew System::Windows::Forms::ComboBox());
			this->groupBox1 = (gcnew System::Windows::Forms::GroupBox());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->groupBox2 = (gcnew System::Windows::Forms::GroupBox());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->groupBox3 = (gcnew System::Windows::Forms::GroupBox());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->menuStrip1 = (gcnew System::Windows::Forms::MenuStrip());
			this->processToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->singlelayerToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->penceptronToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->penceptronDeltaToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->multiPenceptronToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->multiPenceptronDeltaToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->multilayerToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->penceptronToolStripMenuItem1 = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->samplesToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->showKoordinatToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->singlelayer2ClassToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->singlelayer4ClassToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->multilayer2ClassToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->multilayer2Class2ToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->BeginInit();
			this->groupBox1->SuspendLayout();
			this->groupBox2->SuspendLayout();
			this->groupBox3->SuspendLayout();
			this->menuStrip1->SuspendLayout();
			this->SuspendLayout();
			// 
			// pictureBox1
			// 
			this->pictureBox1->BackColor = System::Drawing::SystemColors::ControlLightLight;
			this->pictureBox1->Cursor = System::Windows::Forms::Cursors::Cross;
			this->pictureBox1->Location = System::Drawing::Point(13, 29);
			this->pictureBox1->Name = L"pictureBox1";
			this->pictureBox1->Size = System::Drawing::Size(1090, 673);
			this->pictureBox1->TabIndex = 0;
			this->pictureBox1->TabStop = false;
			this->pictureBox1->Paint += gcnew System::Windows::Forms::PaintEventHandler(this, &MyForm::pictureBox1_Paint);
			this->pictureBox1->MouseClick += gcnew System::Windows::Forms::MouseEventHandler(this, &MyForm::pictureBox1_MouseClick);
			// 
			// comboBox1
			// 
			this->comboBox1->FormattingEnabled = true;
			this->comboBox1->Items->AddRange(gcnew cli::array< System::Object^  >(6) { L"1", L"2", L"3", L"4", L"5", L"6" });
			this->comboBox1->Location = System::Drawing::Point(1110, 29);
			this->comboBox1->Name = L"comboBox1";
			this->comboBox1->Size = System::Drawing::Size(138, 21);
			this->comboBox1->TabIndex = 1;
			this->comboBox1->Text = L"Class Number";
			this->comboBox1->SelectedIndexChanged += gcnew System::EventHandler(this, &MyForm::comboBox1_SelectedIndexChanged);
			// 
			// comboBox2
			// 
			this->comboBox2->FormattingEnabled = true;
			this->comboBox2->Items->AddRange(gcnew cli::array< System::Object^  >(60) {
				L"1", L"2", L"3", L"4", L"5", L"6", L"7", L"8",
					L"9", L"10", L"11", L"12", L"13", L"14", L"15", L"16", L"17", L"18", L"19", L"20", L"21", L"22", L"23", L"24", L"25", L"26",
					L"27", L"28", L"29", L"30", L"31", L"32", L"33", L"34", L"35", L"36", L"37", L"38", L"39", L"40", L"41", L"42", L"43", L"44",
					L"45", L"46", L"47", L"48", L"49", L"50", L"51", L"52", L"53", L"54", L"55", L"56", L"57", L"58", L"59", L"60"
			});
			this->comboBox2->Location = System::Drawing::Point(1110, 57);
			this->comboBox2->Name = L"comboBox2";
			this->comboBox2->Size = System::Drawing::Size(138, 21);
			this->comboBox2->TabIndex = 2;
			this->comboBox2->Text = L"Hidden Layer";
			this->comboBox2->SelectedIndexChanged += gcnew System::EventHandler(this, &MyForm::comboBox2_SelectedIndexChanged);
			// 
			// groupBox1
			// 
			this->groupBox1->Controls->Add(this->label1);
			this->groupBox1->Location = System::Drawing::Point(1110, 85);
			this->groupBox1->Name = L"groupBox1";
			this->groupBox1->Size = System::Drawing::Size(138, 191);
			this->groupBox1->TabIndex = 3;
			this->groupBox1->TabStop = false;
			this->groupBox1->Text = L"Class";
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(7, 20);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(32, 13);
			this->label1->TabIndex = 0;
			this->label1->Text = L"Class";
			// 
			// groupBox2
			// 
			this->groupBox2->Controls->Add(this->label2);
			this->groupBox2->Location = System::Drawing::Point(1110, 283);
			this->groupBox2->Name = L"groupBox2";
			this->groupBox2->Size = System::Drawing::Size(138, 243);
			this->groupBox2->TabIndex = 4;
			this->groupBox2->TabStop = false;
			this->groupBox2->Text = L"Resoult information";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(10, 20);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(24, 13);
			this->label2->TabIndex = 0;
			this->label2->Text = L"info";
			// 
			// groupBox3
			// 
			this->groupBox3->Controls->Add(this->label3);
			this->groupBox3->Location = System::Drawing::Point(1254, 29);
			this->groupBox3->Name = L"groupBox3";
			this->groupBox3->Size = System::Drawing::Size(211, 673);
			this->groupBox3->TabIndex = 5;
			this->groupBox3->TabStop = false;
			this->groupBox3->Text = L"Weights";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Location = System::Drawing::Point(7, 20);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(43, 13);
			this->label3->TabIndex = 0;
			this->label3->Text = L"weights";
			// 
			// menuStrip1
			// 
			this->menuStrip1->Items->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(1) { this->processToolStripMenuItem });
			this->menuStrip1->Location = System::Drawing::Point(0, 0);
			this->menuStrip1->Name = L"menuStrip1";
			this->menuStrip1->Size = System::Drawing::Size(1477, 24);
			this->menuStrip1->TabIndex = 6;
			this->menuStrip1->Text = L"menuStrip1";
			// 
			// processToolStripMenuItem
			// 
			this->processToolStripMenuItem->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(3) {
				this->singlelayerToolStripMenuItem,
					this->multilayerToolStripMenuItem, this->samplesToolStripMenuItem
			});
			this->processToolStripMenuItem->Name = L"processToolStripMenuItem";
			this->processToolStripMenuItem->Size = System::Drawing::Size(59, 20);
			this->processToolStripMenuItem->Text = L"Process";
			// 
			// singlelayerToolStripMenuItem
			// 
			this->singlelayerToolStripMenuItem->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(4) {
				this->penceptronToolStripMenuItem,
					this->penceptronDeltaToolStripMenuItem, this->multiPenceptronToolStripMenuItem, this->multiPenceptronDeltaToolStripMenuItem
			});
			this->singlelayerToolStripMenuItem->Name = L"singlelayerToolStripMenuItem";
			this->singlelayerToolStripMenuItem->Size = System::Drawing::Size(180, 22);
			this->singlelayerToolStripMenuItem->Text = L"Singlelayer";
			// 
			// penceptronToolStripMenuItem
			// 
			this->penceptronToolStripMenuItem->Name = L"penceptronToolStripMenuItem";
			this->penceptronToolStripMenuItem->Size = System::Drawing::Size(196, 22);
			this->penceptronToolStripMenuItem->Text = L"Penceptron";
			this->penceptronToolStripMenuItem->Click += gcnew System::EventHandler(this, &MyForm::penceptronToolStripMenuItem_Click);
			// 
			// penceptronDeltaToolStripMenuItem
			// 
			this->penceptronDeltaToolStripMenuItem->Name = L"penceptronDeltaToolStripMenuItem";
			this->penceptronDeltaToolStripMenuItem->Size = System::Drawing::Size(196, 22);
			this->penceptronDeltaToolStripMenuItem->Text = L"Penceptron Delta";
			this->penceptronDeltaToolStripMenuItem->Click += gcnew System::EventHandler(this, &MyForm::penceptronDeltaToolStripMenuItem_Click);
			// 
			// multiPenceptronToolStripMenuItem
			// 
			this->multiPenceptronToolStripMenuItem->Name = L"multiPenceptronToolStripMenuItem";
			this->multiPenceptronToolStripMenuItem->Size = System::Drawing::Size(196, 22);
			this->multiPenceptronToolStripMenuItem->Text = L"Multi Penceptron";
			this->multiPenceptronToolStripMenuItem->Click += gcnew System::EventHandler(this, &MyForm::multiPenceptronToolStripMenuItem_Click);
			// 
			// multiPenceptronDeltaToolStripMenuItem
			// 
			this->multiPenceptronDeltaToolStripMenuItem->Name = L"multiPenceptronDeltaToolStripMenuItem";
			this->multiPenceptronDeltaToolStripMenuItem->Size = System::Drawing::Size(196, 22);
			this->multiPenceptronDeltaToolStripMenuItem->Text = L"Multi Penceptron Delta";
			this->multiPenceptronDeltaToolStripMenuItem->Click += gcnew System::EventHandler(this, &MyForm::multiPenceptronDeltaToolStripMenuItem_Click);
			// 
			// multilayerToolStripMenuItem
			// 
			this->multilayerToolStripMenuItem->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(1) { this->penceptronToolStripMenuItem1 });
			this->multilayerToolStripMenuItem->Name = L"multilayerToolStripMenuItem";
			this->multilayerToolStripMenuItem->Size = System::Drawing::Size(180, 22);
			this->multilayerToolStripMenuItem->Text = L"Multilayer";
			// 
			// penceptronToolStripMenuItem1
			// 
			this->penceptronToolStripMenuItem1->Name = L"penceptronToolStripMenuItem1";
			this->penceptronToolStripMenuItem1->Size = System::Drawing::Size(180, 22);
			this->penceptronToolStripMenuItem1->Text = L"Perceptron";
			this->penceptronToolStripMenuItem1->Click += gcnew System::EventHandler(this, &MyForm::penceptronToolStripMenuItem1_Click);
			// 
			// samplesToolStripMenuItem
			// 
			this->samplesToolStripMenuItem->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(5) {
				this->showKoordinatToolStripMenuItem,
					this->singlelayer2ClassToolStripMenuItem, this->singlelayer4ClassToolStripMenuItem, this->multilayer2ClassToolStripMenuItem,
					this->multilayer2Class2ToolStripMenuItem
			});
			this->samplesToolStripMenuItem->Name = L"samplesToolStripMenuItem";
			this->samplesToolStripMenuItem->Size = System::Drawing::Size(180, 22);
			this->samplesToolStripMenuItem->Text = L"Samples";
			// 
			// showKoordinatToolStripMenuItem
			// 
			this->showKoordinatToolStripMenuItem->Name = L"showKoordinatToolStripMenuItem";
			this->showKoordinatToolStripMenuItem->Size = System::Drawing::Size(173, 22);
			this->showKoordinatToolStripMenuItem->Text = L"Show Koordinat";
			this->showKoordinatToolStripMenuItem->Click += gcnew System::EventHandler(this, &MyForm::showKoordinatToolStripMenuItem_Click);
			// 
			// singlelayer2ClassToolStripMenuItem
			// 
			this->singlelayer2ClassToolStripMenuItem->Name = L"singlelayer2ClassToolStripMenuItem";
			this->singlelayer2ClassToolStripMenuItem->Size = System::Drawing::Size(173, 22);
			this->singlelayer2ClassToolStripMenuItem->Text = L"Singlelayer 2 class";
			this->singlelayer2ClassToolStripMenuItem->Click += gcnew System::EventHandler(this, &MyForm::singlelayer2ClassToolStripMenuItem_Click);
			// 
			// singlelayer4ClassToolStripMenuItem
			// 
			this->singlelayer4ClassToolStripMenuItem->Name = L"singlelayer4ClassToolStripMenuItem";
			this->singlelayer4ClassToolStripMenuItem->Size = System::Drawing::Size(173, 22);
			this->singlelayer4ClassToolStripMenuItem->Text = L"singlelayer 4 class";
			this->singlelayer4ClassToolStripMenuItem->Click += gcnew System::EventHandler(this, &MyForm::singlelayer4ClassToolStripMenuItem_Click);
			// 
			// multilayer2ClassToolStripMenuItem
			// 
			this->multilayer2ClassToolStripMenuItem->Name = L"multilayer2ClassToolStripMenuItem";
			this->multilayer2ClassToolStripMenuItem->Size = System::Drawing::Size(173, 22);
			this->multilayer2ClassToolStripMenuItem->Text = L"Multilayer 2 class 1";
			this->multilayer2ClassToolStripMenuItem->Click += gcnew System::EventHandler(this, &MyForm::multilayer2ClassToolStripMenuItem_Click);
			// 
			// multilayer2Class2ToolStripMenuItem
			// 
			this->multilayer2Class2ToolStripMenuItem->Name = L"multilayer2Class2ToolStripMenuItem";
			this->multilayer2Class2ToolStripMenuItem->Size = System::Drawing::Size(173, 22);
			this->multilayer2Class2ToolStripMenuItem->Text = L"Multilayer 2 class 2";
			this->multilayer2Class2ToolStripMenuItem->Click += gcnew System::EventHandler(this, &MyForm::multilayer2Class2ToolStripMenuItem_Click);
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(1477, 714);
			this->Controls->Add(this->groupBox3);
			this->Controls->Add(this->groupBox2);
			this->Controls->Add(this->groupBox1);
			this->Controls->Add(this->comboBox2);
			this->Controls->Add(this->comboBox1);
			this->Controls->Add(this->pictureBox1);
			this->Controls->Add(this->menuStrip1);
			this->MainMenuStrip = this->menuStrip1;
			this->Name = L"MyForm";
			this->Text = L"MyForm";
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->EndInit();
			this->groupBox1->ResumeLayout(false);
			this->groupBox1->PerformLayout();
			this->groupBox2->ResumeLayout(false);
			this->groupBox2->PerformLayout();
			this->groupBox3->ResumeLayout(false);
			this->groupBox3->PerformLayout();
			this->menuStrip1->ResumeLayout(false);
			this->menuStrip1->PerformLayout();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion

private: System::Void pictureBox1_Paint(System::Object^ sender, System::Windows::Forms::PaintEventArgs^ e) {
	Pen^ pen = gcnew Pen(Color::Black, 1.3f);
	int centerW, centerH;
	centerW = (int)(pictureBox1->Width / 2);
	centerH = (int)(pictureBox1->Height / 2);
	e->Graphics->DrawLine(pen, centerW, 0, centerW, pictureBox1->Height);
	e->Graphics->DrawLine(pen, 0, centerH, pictureBox1->Width, centerH);
}
private: System::Void pictureBox1_MouseClick(System::Object^ sender, System::Windows::Forms::MouseEventArgs^ e) {
	if (classNumber == -1)
	{
		MessageBox::Show("class seçiniz");
	}
	else
	{
		int tempX, tempY;
		double x1, x2;//x1 width x2 height
		tempX = (System::Convert::ToInt32(e->X));
		tempY = (System::Convert::ToInt32(e->Y));
		x1 = (double)(tempX - (pictureBox1->Width >> 1));
		x2 = (double)((pictureBox1->Height >> 1) - tempY);

		if (size[0] == 0)
		{
			size[classNumber] += 1;
			size[0] += 1;
			p = new koordinat[1];
			p[0].x1 = x1;
			p[0].x2 = x2;
			p[0].id = classNumber;
		}
		else
		{
			koordinat* temp;
			temp = p;
			size[0] += 1;
			size[classNumber] += 1;
			p = new koordinat[size[0]];
			for (int i = 0; i < size[0] - 1; i++)
			{
				p[i].x1 = temp[i].x1;
				p[i].x2 = temp[i].x2;
				p[i].id = temp[i].id;
			}
			p[size[0] - 1].x1 = x1;
			p[size[0] - 1].x2 = x2;
			p[size[0] - 1].id = classNumber;
			delete temp;
		}

		label1->Text = "x: " + x1 + "   y: " + x2 + "\r\n" + "Toplam nokta: " + size[0] + "\r\nClass1: " + size[1] + "\r\nClass2:" + size[2] + "\r\nClass3:" + size[3] + "\r\nClass4:" + size[4] + "\r\nClass5:" + size[5] + "\r\nClass6:" + size[6];

		if (classNumber == 1) {
			Pen^ pen = gcnew Pen(Color::Black, 3.0f);
			pictureBox1->CreateGraphics()->DrawLine(pen, tempX - 5, tempY - 5, tempX + 5, tempY + 5);
			pictureBox1->CreateGraphics()->DrawLine(pen, tempX - 5, tempY + 5, tempX + 5, tempY - 5);
		}
		else if (classNumber == 2) {
			Pen^ pen = gcnew Pen(Color::Red, 3.0f);
			pictureBox1->CreateGraphics()->DrawLine(pen, tempX - 5, tempY - 5, tempX + 5, tempY + 5);
			pictureBox1->CreateGraphics()->DrawLine(pen, tempX - 5, tempY + 5, tempX + 5, tempY - 5);
		}
		else if (classNumber == 3) {
			Pen^ pen = gcnew Pen(Color::Blue, 3.0f);
			pictureBox1->CreateGraphics()->DrawLine(pen, tempX - 5, tempY - 5, tempX + 5, tempY + 5);
			pictureBox1->CreateGraphics()->DrawLine(pen, tempX - 5, tempY + 5, tempX + 5, tempY - 5);
		}
		else if (classNumber == 4) {
			Pen^ pen = gcnew Pen(Color::Green, 3.0f);
			pictureBox1->CreateGraphics()->DrawLine(pen, tempX - 5, tempY - 5, tempX + 5, tempY + 5);
			pictureBox1->CreateGraphics()->DrawLine(pen, tempX - 5, tempY + 5, tempX + 5, tempY - 5);
		}
		else if (classNumber == 5) {
			Pen^ pen = gcnew Pen(Color::Orange, 3.0f);
			pictureBox1->CreateGraphics()->DrawLine(pen, tempX - 5, tempY - 5, tempX + 5, tempY + 5);
			pictureBox1->CreateGraphics()->DrawLine(pen, tempX - 5, tempY + 5, tempX + 5, tempY - 5);
		}
		else if (classNumber == 6) {
			Pen^ pen = gcnew Pen(Color::Purple, 3.0f);
			pictureBox1->CreateGraphics()->DrawLine(pen, tempX - 5, tempY - 5, tempX + 5, tempY + 5);
			pictureBox1->CreateGraphics()->DrawLine(pen, tempX - 5, tempY + 5, tempX + 5, tempY - 5);
		}
		else {
			MessageBox::Show("bilinmeyen deðer seçildi programý yeniden baþlatýn");
		}







	}
}
private: System::Void comboBox1_SelectedIndexChanged(System::Object^ sender, System::EventArgs^ e) {
	System::String^ degisken = comboBox1->SelectedItem->ToString();
	classNumber = Convert::ToInt16(degisken);
}
private: System::Void penceptronToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
	std::clock_t start, end;
	start = clock();
	int cycle = 0;
	koordinat* normP = new koordinat[size[0]];
	normP = normalizeXY(p, size[0], norm);
	normP = karistir(normP, size[0]);
	w = new double[3];
	w = random_weight(3);
	w = penceptron(normP, size[0], w, 0.1, cycle, 1);
	draw_line(3, w, (int)norm);
	end = clock();
	double time = double(end - start) / double(CLOCKS_PER_SEC);
	label2->Text = "Cycle=" + Convert::ToString(cycle) + "\r\n" + "norm=" + Convert::ToString(norm) + "\r\n" + "time=" + Convert::ToString(time)+"sec";
	label3->Text = "w[0]=" + Convert::ToString(w[0]) + "\r\n" + "w[1]=" + Convert::ToString(w[1]) + "\r\n" + "w[2]=" + Convert::ToString(w[2]) + "\r\n";
	delete[] normP, w;
}
private: System::Void penceptronDeltaToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
	std::clock_t start, end;
	start = clock();
	int cycle = 0;
	double error = 0, alpha = 1.0;
	koordinat* deltaP = new koordinat[size[0]];
	deltaP = normalizeXY(p, size[0], norm);
	deltaP = karistir(deltaP, size[0]);
	w = new double[3];
	w = random_weight(3);
	w = penceptronDelta(deltaP, size[0], w, 0.1, cycle, error, 1, alpha);
	draw_line(3, w, (int)norm);
	end = clock();
	double time = double(end - start) / double(CLOCKS_PER_SEC);
	label2->Text = "Cycle=" + Convert::ToString(cycle) + "\r\n" + "norm=" + Convert::ToString(norm) + "\r\n" + "error=" + error + "\r\n" + "time=" + Convert::ToString(time) + "sec";
	label3->Text = "w[0]=" + Convert::ToString(w[0]) + "\r\n" + "w[1]=" + Convert::ToString(w[1]) + "\r\n" + "w[2]=" + Convert::ToString(w[2]) + "\r\n";
	delete deltaP, w;
}
private: System::Void multiPenceptronToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
	std::clock_t start, end;
	start = clock();
	int cycle = 0;
	int sinifsayisi = GetClassNumber();
	W = new double* [sinifsayisi];
	for (int i = 0; i < sinifsayisi; i++) {
		W[i] = new double[3];
	}
	koordinat* MultiP;
	MultiP = new koordinat[size[0]];
	MultiP = normalizeXY(p, size[0], norm);
	MultiP = karistir(MultiP, size[0]);
	W = random_matrix(sinifsayisi, 3);
	W = MultiPenceptron(MultiP, size[0], W, 0.1, cycle);
	String^ text = "";
	for (int i = 0; i < sinifsayisi; i++) {
		draw_line(i + 1, W[i], (int)norm);
	}
	end = clock();
	double time = double(end - start) / double(CLOCKS_PER_SEC);
	for (int i = 0; i < sinifsayisi; i++) {
		for (int j = 0; j < 3; j++) {
			text += "W[" + Convert::ToString(i) + "][" + Convert::ToString(j) + "]=" + Convert::ToString(W[i][j]) + "\r\n";
		}
	}
	label3->Text = text;
	label2->Text = "Cycle=" + Convert::ToString(cycle) + "\r\n" + "norm=" + Convert::ToString(norm) + "\r\n" + "time=" + Convert::ToString(time) + "sec";
	delete MultiP, W;
}
private: System::Void multiPenceptronDeltaToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
	std::clock_t start, end;
	start = clock();
	double alpha = 1.0;
	int cycle = 0;
	int sinifsayisi = GetClassNumber();

	W = new double* [sinifsayisi];
	for (int i = 0; i < sinifsayisi; i++) {
		W[i] = new double[4];
	}
	koordinat* MultiPD;
	MultiPD = new koordinat[size[0]];
	MultiPD = normalizeXY(p, size[0], norm);
	MultiPD = karistir(MultiPD, size[0]);
	W = random_matrix(sinifsayisi, 3);
	W = MultiPenceptronDelta(MultiPD, size[0], W, 0.1, cycle, alpha);
	String^ text = "";
	for (int i = 0; i < sinifsayisi; i++) {
		draw_line(i + 1, W[i], (int)norm);
	}
	end = clock();
	double time = double(end - start) / double(CLOCKS_PER_SEC);
	for (int i = 0; i < sinifsayisi; i++) {
		for (int j = 0; j < 3; j++) {
			text += "W[" + Convert::ToString(i) + "][" + Convert::ToString(j) + "]=" + Convert::ToString(W[i][j]) + "\r\n";
		}
	}
	label3->Text = text;
	text = "";
	text = "Cycle=" + Convert::ToString(cycle) + "\r\n" + "norm=" + Convert::ToString(norm) + "\r\n" + "time=" + Convert::ToString(time) + "sec" + "\r\n";
	for (int i = 0; i < sinifsayisi; i++) {
		text += "error[" + Convert::ToString(i) + "]=" + Convert::ToString(W[i][3]) + "\r\n";
	}
	label2->Text = text;
	delete[] MultiPD;
	delete[] W;
}
private: System::Void penceptronToolStripMenuItem1_Click(System::Object^ sender, System::EventArgs^ e) {
	if (hiddenlayer == -1)
	{
		MessageBox::Show("Please select hidden layer.");
	}
	else
	{
		std::clock_t start, end;
		start = clock();
		int sinifsayisi = GetClassNumber();
		int cycle = 0;
		double error = 0;
		int height = pictureBox1->Height;
		int width = pictureBox1->Width;
		koordinat input;
		koordinat* multi = new koordinat[size[0]];
		multi = normalizeXY(p, size[0], norm);
		multi = karistir(multi, size[0]);
		V = new double* [3];
		for (int i = 0; i < 3; i++) { V[i] = new double[hiddenlayer+1]; }
		W = new double* [hiddenlayer + 1];
		for (int i = 0; i < hiddenlayer + 1; i++) { W[i] = new double[sinifsayisi]; }
		V = random_matrix(3, hiddenlayer+1);
		W = random_matrix(hiddenlayer + 1, sinifsayisi);
		multilayer(multi, size[0], W, V, 0.5, 0.3, cycle, error, hiddenlayer, sinifsayisi);
		Bitmap^ img;
		img = gcnew Bitmap(width, height);
		pictureBox1->Image = img;
		for (int i = 0; i < height; i++) { for (int j = 0; j < width; j++) { img->SetPixel(j, i, Color::FromArgb(255, 255, 255)); } }
		for (int i = 0; i < height; i += 2)
		{
			for (int j = 0; j < width; j += 2)
			{
				input.x1 = (double)(j - (width / 2));
				input.x2 = (double)-1 * (i - (height / 2));
				input.id = -1;
				int color = multilayershow(W, V, input, sinifsayisi, hiddenlayer, norm);
				if (color == 0)
				{
					img->SetPixel(j, i, Color::FromArgb(0, 0, 0));
				}
				else if (color == 1)
				{
					img->SetPixel(j, i, Color::FromArgb(255, 0, 0));
				}
				else if (color == 2)
				{
					img->SetPixel(j, i, Color::FromArgb(0, 0, 255));
				}
				else if (color == 3)
				{
					img->SetPixel(j, i, Color::FromArgb(0, 255, 0));
				}
				else if (color == 4)
				{
					img->SetPixel(j, i, Color::FromArgb(255, 160, 0));
				}
				else
				{
					img->SetPixel(j, i, Color::FromArgb(111, 0, 187));
				}
			}
		}
		pictureBox1->Refresh();
		draw_point();
		end = clock();
		double time = double(end - start) / double(CLOCKS_PER_SEC);
		String^ text = "";
		for (int i = 0; i < hiddenlayer + 1; i++) {
			for (int j = 0; j < sinifsayisi; j++) {
				text += "w[" + i.ToString() + "][" + j.ToString() + "]=" + W[i][j].ToString() + "\r\n";
			}
		}
		for (int i = 0; i < 3; i++) {
			for (int j = 0; j < hiddenlayer; j++) {
				text += "v[" + i.ToString() + "][" + j.ToString() + "]=" + V[i][j].ToString() + "\r\n";
			}
		}
		label3->Text = text;
		label2->Text = "cycle=" + cycle.ToString() + "\r\n" + "error=" + error.ToString() + "\r\n" + "norm=" + Convert::ToString(norm) + "\r\n" + "time=" + Convert::ToString(time) + "sec" + "\r\n";




	}

}
private: void draw_line(int color, double* weight, int factor)
	   {
		   int min_x, max_x, min_y, max_y;

		   min_x = (this->pictureBox1->Width) / -2;
		   max_x = (this->pictureBox1->Width) / 2;

		   min_y = YPoint(min_x, weight, (int)factor);
		   max_y = YPoint(max_x, weight, (int)factor);

		   if (color == 1) {
			   Pen^ pen = gcnew Pen(Color::Black, 3.0f);
			   pictureBox1->CreateGraphics()->DrawLine(pen, (pictureBox1->Width / 2) + min_x, (pictureBox1->Height / 2) - min_y, (pictureBox1->Width / 2) + max_x, (pictureBox1->Height / 2) - max_y);
		   }
		   else if (color == 2) {
			   Pen^ pen = gcnew Pen(Color::Red, 3.0f);
			   pictureBox1->CreateGraphics()->DrawLine(pen, (pictureBox1->Width / 2) + min_x, (pictureBox1->Height / 2) - min_y, (pictureBox1->Width / 2) + max_x, (pictureBox1->Height / 2) - max_y);
		   }
		   else if (color == 3) {
			   Pen^ pen = gcnew Pen(Color::Blue, 3.0f);
			   pictureBox1->CreateGraphics()->DrawLine(pen, (pictureBox1->Width / 2) + min_x, (pictureBox1->Height / 2) - min_y, (pictureBox1->Width / 2) + max_x, (pictureBox1->Height / 2) - max_y);
		   }
		   else if (color == 4) {
			   Pen^ pen = gcnew Pen(Color::Green, 3.0f);
			   pictureBox1->CreateGraphics()->DrawLine(pen, (pictureBox1->Width / 2) + min_x, (pictureBox1->Height / 2) - min_y, (pictureBox1->Width / 2) + max_x, (pictureBox1->Height / 2) - max_y);
		   }
		   else if (color == 5) {
			   Pen^ pen = gcnew Pen(Color::Orange, 3.0f);
			   pictureBox1->CreateGraphics()->DrawLine(pen, (pictureBox1->Width / 2) + min_x, (pictureBox1->Height / 2) - min_y, (pictureBox1->Width / 2) + max_x, (pictureBox1->Height / 2) - max_y);
		   }
		   else if (color == 6) {
			   Pen^ pen = gcnew Pen(Color::Purple, 3.0f);
			   pictureBox1->CreateGraphics()->DrawLine(pen, (pictureBox1->Width / 2) + min_x, (pictureBox1->Height / 2) - min_y, (pictureBox1->Width / 2) + max_x, (pictureBox1->Height / 2) - max_y);
		   }
	   }
public:System::Void draw_point() {//reflesh sonrasý geri noktalarý çizmek için
	for (int i = 0; i < size[0]; i++) {
		int classNumber = p[i].id;
		int tempX = p[i].x1 + (pictureBox1->Width / 2);
		int tempY = (pictureBox1->Height / 2) - p[i].x2;
		if (classNumber == 1) {
			Pen^ pen = gcnew Pen(Color::Black, 3.0f);
			pictureBox1->CreateGraphics()->DrawLine(pen, tempX - 5, tempY - 5, tempX + 5, tempY + 5);
			pictureBox1->CreateGraphics()->DrawLine(pen, tempX - 5, tempY + 5, tempX + 5, tempY - 5);
		}
		else if (classNumber == 2) {
			Pen^ pen = gcnew Pen(Color::Red, 3.0f);
			pictureBox1->CreateGraphics()->DrawLine(pen, tempX - 5, tempY - 5, tempX + 5, tempY + 5);
			pictureBox1->CreateGraphics()->DrawLine(pen, tempX - 5, tempY + 5, tempX + 5, tempY - 5);
		}
		else if (classNumber == 3) {
			Pen^ pen = gcnew Pen(Color::Blue, 3.0f);
			pictureBox1->CreateGraphics()->DrawLine(pen, tempX - 5, tempY - 5, tempX + 5, tempY + 5);
			pictureBox1->CreateGraphics()->DrawLine(pen, tempX - 5, tempY + 5, tempX + 5, tempY - 5);
		}
		else if (classNumber == 4) {
			Pen^ pen = gcnew Pen(Color::Green, 3.0f);
			pictureBox1->CreateGraphics()->DrawLine(pen, tempX - 5, tempY - 5, tempX + 5, tempY + 5);
			pictureBox1->CreateGraphics()->DrawLine(pen, tempX - 5, tempY + 5, tempX + 5, tempY - 5);
		}
		else if (classNumber == 5) {
			Pen^ pen = gcnew Pen(Color::Orange, 3.0f);
			pictureBox1->CreateGraphics()->DrawLine(pen, tempX - 5, tempY - 5, tempX + 5, tempY + 5);
			pictureBox1->CreateGraphics()->DrawLine(pen, tempX - 5, tempY + 5, tempX + 5, tempY - 5);
		}
		else if (classNumber == 6) {
			Pen^ pen = gcnew Pen(Color::Purple, 3.0f);
			pictureBox1->CreateGraphics()->DrawLine(pen, tempX - 5, tempY - 5, tempX + 5, tempY + 5);
			pictureBox1->CreateGraphics()->DrawLine(pen, tempX - 5, tempY + 5, tempX + 5, tempY - 5);
		}
		else {
			MessageBox::Show("bilinmeyen deðer seçildi programý yeniden baþlatýn");
		}
	}
}
private: System::Void showKoordinatToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
	System::String^ text = "(x,y)\n";
	for (int i = 0; i < size[0]; i++) {
		text += "Class" + p[i].id + "->" + p[i].x1 + "|" + p[i].x2 + "\n";
	}
	MessageBox::Show(text);
}
private: System::Void singlelayer2ClassToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
	p = new koordinat[12];
	p[0].x1 = -239; p[0].x2 = 228; p[0].id = 1;
	p[1].x1 = -143; p[1].x2 = 225; p[1].id = 1;
	p[2].x1 = -28; p[2].x2 = 231; p[2].id = 1;
	p[3].x1 = 43; p[3].x2 = 230; p[3].id = 1;
	p[4].x1 = 168; p[4].x2 = 230; p[4].id = 1;
	p[5].x1 = 210; p[5].x2 = 227; p[5].id = 1;
	p[6].x1 = -232; p[6].x2 = -107; p[6].id = 2;
	p[7].x1 = -125; p[7].x2 = -111; p[7].id = 2;
	p[8].x1 = -24; p[8].x2 = -111; p[8].id = 2;
	p[9].x1 = 21; p[9].x2 = -111; p[9].id = 2;
	p[10].x1 = 102; p[10].x2 = -114; p[10].id = 2;
	p[11].x1 = 217; p[11].x2 = -116; p[11].id = 2;
	size[0] = 12;
	size[1] = 6;
	size[2] = 6;
	draw_point();
	label1->Text = "Toplam nokta: " + size[0] + "\r\nClass1: " + size[1] + "\r\nClass2:" + size[2] + "\r\nClass3:" + size[3] + "\r\nClass4:" + size[4] + "\r\nClass5:" + size[5] + "\r\nClass6:" + size[6];

}
private: System::Void singlelayer4ClassToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
	p = new koordinat[24];
	p[0].x1 = -234; p[0].x2 = 283; p[0].id = 1;
	p[1].x1 = -248; p[1].x2 = 268; p[1].id = 1;
	p[2].x1 = -273; p[2].x2 = 261; p[2].id = 1;
	p[3].x1 = -288; p[3].x2 = 272; p[3].id = 1;
	p[4].x1 = -267; p[4].x2 = 285; p[4].id = 1;
	p[5].x1 = -250; p[5].x2 = 284; p[5].id = 1;
	p[6].x1 = 240; p[6].x2 = 275; p[6].id = 2;
	p[7].x1 = 252; p[7].x2 = 272; p[7].id = 2;
	p[8].x1 = 257; p[8].x2 = 260; p[8].id = 2;
	p[9].x1 = 256; p[9].x2 = 249; p[9].id = 2;
	p[10].x1 = 240; p[10].x2 = 243; p[10].id = 2;
	p[11].x1 = 233; p[11].x2 = 258; p[11].id = 2;
	p[12].x1 = 271; p[12].x2 = -266; p[12].id = 3;
	p[13].x1 = 257; p[13].x2 = -234; p[13].id = 3;
	p[14].x1 = 284; p[14].x2 = -227; p[14].id = 3;
	p[15].x1 = 293; p[15].x2 = -244; p[15].id = 3;
	p[16].x1 = 283; p[16].x2 = -267; p[16].id = 3;
	p[17].x1 = 238; p[17].x2 = -270; p[17].id = 3;
	p[18].x1 = -270; p[18].x2 = -231; p[18].id = 4;
	p[19].x1 = -256; p[19].x2 = -239; p[19].id = 4;
	p[20].x1 = -248; p[20].x2 = -257; p[20].id = 4;
	p[21].x1 = -254; p[21].x2 = -274; p[21].id = 4;
	p[22].x1 = -275; p[22].x2 = -265; p[22].id = 4;
	p[23].x1 = -269; p[23].x2 = -256; p[23].id = 4;
	size[0] = 24;
	size[1] = 6;
	size[2] = 6;
	size[3] = 6;
	size[4] = 6;
	draw_point();
	label1->Text = "Toplam nokta: " + size[0] + "\r\nClass1: " + size[1] + "\r\nClass2:" + size[2] + "\r\nClass3:" + size[3] + "\r\nClass4:" + size[4] + "\r\nClass5:" + size[5] + "\r\nClass6:" + size[6];

}
private: System::Void multilayer2ClassToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
	p = new koordinat[30];
	hiddenlayer = 6;
	p[0].x1 = -32; p[0].x2 = 270; p[0].id = 1;
	p[1].x1 = -33; p[1].x2 = 180; p[1].id = 1;
	p[2].x1 = -42; p[2].x2 = 105; p[2].id = 1;
	p[3].x1 = -36; p[3].x2 = 24; p[3].id = 1;
	p[4].x1 = -26; p[4].x2 = -44; p[4].id = 1;
	p[5].x1 = -19; p[5].x2 = -121; p[5].id = 1;
	p[6].x1 = -10; p[6].x2 = -191; p[6].id = 1;
	p[7].x1 = 4; p[7].x2 = -249; p[7].id = 1;
	p[8].x1 = 19; p[8].x2 = 249; p[8].id = 1;
	p[9].x1 = 28; p[9].x2 = 94; p[9].id = 1;
	p[10].x1 = 36; p[10].x2 = -21; p[10].id = 1;
	p[11].x1 = 45; p[11].x2 = -131; p[11].id = 1;
	p[12].x1 = 41; p[12].x2 = -215; p[12].id = 1;
	p[13].x1 = 249; p[13].x2 = 172; p[13].id = 2;
	p[14].x1 = 271; p[14].x2 = 95; p[14].id = 2;
	p[15].x1 = 254; p[15].x2 = 34; p[15].id = 2;
	p[16].x1 = 218; p[16].x2 = -13; p[16].id = 2;
	p[17].x1 = 199; p[17].x2 = 67; p[17].id = 2;
	p[18].x1 = 231; p[18].x2 = 126; p[18].id = 2;
	p[19].x1 = 259; p[19].x2 = 39; p[19].id = 2;
	p[20].x1 = 243; p[20].x2 = -38; p[20].id = 2;
	p[21].x1 = -205; p[21].x2 = 137; p[21].id = 2;
	p[22].x1 = -179; p[22].x2 = 58; p[22].id = 2;
	p[23].x1 = -218; p[23].x2 = 92; p[23].id = 2;
	p[24].x1 = -237; p[24].x2 = 8; p[24].id = 2;
	p[25].x1 = -220; p[25].x2 = -37; p[25].id = 2;
	p[26].x1 = -182; p[26].x2 = -89; p[26].id = 2;
	p[27].x1 = -162; p[27].x2 = -121; p[27].id = 2;
	p[28].x1 = -181; p[28].x2 = -33; p[28].id = 2;
	p[29].x1 = -208; p[29].x2 = -92; p[29].id = 2;

	size[0] = 30;
	size[1] = 13;
	size[2] = 17;
	size[3] = 0;
	size[4] = 0;
	draw_point();
	label1->Text = "Toplam nokta: " + size[0] + "\r\nClass1: " + size[1] + "\r\nClass2:" + size[2] + "\r\nClass3:" + size[3] + "\r\nClass4:" + size[4] + "\r\nClass5:" + size[5] + "\r\nClass6:" + size[6];

}
private: System::Void multilayer2Class2ToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
	p = new koordinat[30];
	hiddenlayer = 6;
	p[0].x1 = -258; p[0].x2 = 282; p[0].id = 1;
	p[1].x1 = -170; p[1].x2 = 263; p[1].id = 1;
	p[2].x1 = -75; p[2].x2 = 243; p[2].id = 1;
	p[3].x1 = 45; p[3].x2 = 199; p[3].id = 1;
	p[4].x1 = 112; p[4].x2 = 161; p[4].id = 1;
	p[5].x1 = 162; p[5].x2 = 81; p[5].id = 1;
	p[6].x1 = 142; p[6].x2 = 33; p[6].id = 1;
	p[7].x1 = 46; p[7].x2 = -7; p[7].id = 1;
	p[8].x1 = -36; p[8].x2 = 3; p[8].id = 1;
	p[9].x1 = -61; p[9].x2 = 45; p[9].id = 1;
	p[10].x1 = 49; p[10].x2 = 86; p[10].id = 2;
	p[11].x1 = -14; p[11].x2 = 120; p[11].id = 2;
	p[12].x1 = -110; p[12].x2 = 126; p[12].id = 2;
	p[13].x1 = -176; p[13].x2 = 101; p[13].id = 2;
	p[14].x1 = -194; p[14].x2 = 22; p[14].id = 2;
	p[15].x1 = -183; p[15].x2 = -50; p[15].id = 2;
	p[16].x1 = -71; p[16].x2 = -146; p[16].id = 2;
	p[17].x1 = 34; p[17].x2 = -190; p[17].id = 2;
	p[18].x1 = 177; p[18].x2 = -234; p[18].id = 2;
	p[19].x1 = 254; p[19].x2 = -262; p[19].id = 2;
	size[0] = 20;
	size[1] = 10;
	size[2] = 10;
	size[3] = 0;
	size[4] = 0;
	draw_point();
	label1->Text = "Toplam nokta: " + size[0] + "\r\nClass1: " + size[1] + "\r\nClass2:" + size[2] + "\r\nClass3:" + size[3] + "\r\nClass4:" + size[4] + "\r\nClass5:" + size[5] + "\r\nClass6:" + size[6];

}
private: System::Void comboBox2_SelectedIndexChanged(System::Object^ sender, System::EventArgs^ e) {
	System::String^ degisken = comboBox2->SelectedItem->ToString();
	hiddenlayer = Convert::ToInt16(degisken);
}
};
}
