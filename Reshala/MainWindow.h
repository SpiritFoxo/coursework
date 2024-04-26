#pragma once
#include "QuadraticEquationSolver.h"
#include "HelpWindow.h"

namespace Reshala {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Text::RegularExpressions;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Сводка для MainWindow
	/// </summary>
	public ref class MainWindow : public System::Windows::Forms::Form
	{
	public:
		MainWindow(void)
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
		~MainWindow()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Label^ FirstK;
	private: System::Windows::Forms::Label^ SecondK;

	public: System::Windows::Forms::TextBox^ FirstKTB;
	private:

	private: System::Windows::Forms::TextBox^ SecondKTB;
	private: System::Windows::Forms::TextBox^ ThirdKTB;
	private: System::Windows::Forms::Button^ SolveButton;
	private: System::Windows::Forms::Label^ RootTextLabel;
	public: System::Windows::Forms::Label^ FirstRoot;
	private:

	private: System::Windows::Forms::Label^ SecondRoot;
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Label^ SecondRootAlt;

	public: System::Windows::Forms::Label^ FirstRootAlt;
	private: System::Windows::Forms::DataVisualization::Charting::Chart^ FunctionVizualizer;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::Button^ HelpButton;
	private: System::Windows::Forms::TextBox^ PrecisionKTB;

	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::Label^ label5;
	private: System::Windows::Forms::Label^ SelectedRoots;
	private: System::Windows::Forms::Button^ ClearButton;



	private:
		/// <summary>
		/// Обязательная переменная конструктора.
		/// </summary>
		System::ComponentModel::Container^ components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Требуемый метод для поддержки конструктора — не изменяйте 
		/// содержимое этого метода с помощью редактора кода.
		/// </summary>
		void InitializeComponent(void)
		{
			System::Windows::Forms::DataVisualization::Charting::ChartArea^ chartArea1 = (gcnew System::Windows::Forms::DataVisualization::Charting::ChartArea());
			System::Windows::Forms::DataVisualization::Charting::Legend^ legend1 = (gcnew System::Windows::Forms::DataVisualization::Charting::Legend());
			System::Windows::Forms::DataVisualization::Charting::Series^ series1 = (gcnew System::Windows::Forms::DataVisualization::Charting::Series());
			System::Windows::Forms::DataVisualization::Charting::Series^ series2 = (gcnew System::Windows::Forms::DataVisualization::Charting::Series());
			System::Windows::Forms::DataVisualization::Charting::Series^ series3 = (gcnew System::Windows::Forms::DataVisualization::Charting::Series());
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(MainWindow::typeid));
			this->FirstK = (gcnew System::Windows::Forms::Label());
			this->SecondK = (gcnew System::Windows::Forms::Label());
			this->FirstKTB = (gcnew System::Windows::Forms::TextBox());
			this->SecondKTB = (gcnew System::Windows::Forms::TextBox());
			this->ThirdKTB = (gcnew System::Windows::Forms::TextBox());
			this->SolveButton = (gcnew System::Windows::Forms::Button());
			this->RootTextLabel = (gcnew System::Windows::Forms::Label());
			this->FirstRoot = (gcnew System::Windows::Forms::Label());
			this->SecondRoot = (gcnew System::Windows::Forms::Label());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->SecondRootAlt = (gcnew System::Windows::Forms::Label());
			this->FirstRootAlt = (gcnew System::Windows::Forms::Label());
			this->FunctionVizualizer = (gcnew System::Windows::Forms::DataVisualization::Charting::Chart());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->HelpButton = (gcnew System::Windows::Forms::Button());
			this->PrecisionKTB = (gcnew System::Windows::Forms::TextBox());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->SelectedRoots = (gcnew System::Windows::Forms::Label());
			this->ClearButton = (gcnew System::Windows::Forms::Button());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->FunctionVizualizer))->BeginInit();
			this->SuspendLayout();
			// 
			// FirstK
			// 
			this->FirstK->AutoSize = true;
			this->FirstK->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->FirstK->Location = System::Drawing::Point(90, 93);
			this->FirstK->Name = L"FirstK";
			this->FirstK->Size = System::Drawing::Size(59, 24);
			this->FirstK->TabIndex = 0;
			this->FirstK->Text = L"X^2 +";
			// 
			// SecondK
			// 
			this->SecondK->AutoSize = true;
			this->SecondK->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->SecondK->Location = System::Drawing::Point(241, 93);
			this->SecondK->Name = L"SecondK";
			this->SecondK->Size = System::Drawing::Size(40, 24);
			this->SecondK->TabIndex = 1;
			this->SecondK->Text = L"X +";
			// 
			// FirstKTB
			// 
			this->FirstKTB->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->FirstKTB->Location = System::Drawing::Point(8, 93);
			this->FirstKTB->MaxLength = 5;
			this->FirstKTB->Name = L"FirstKTB";
			this->FirstKTB->Size = System::Drawing::Size(80, 26);
			this->FirstKTB->TabIndex = 3;
			this->FirstKTB->KeyPress += gcnew System::Windows::Forms::KeyPressEventHandler(this, &MainWindow::FirstKTB_KeyPress);
			// 
			// SecondKTB
			// 
			this->SecondKTB->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->SecondKTB->Location = System::Drawing::Point(155, 93);
			this->SecondKTB->MaxLength = 5;
			this->SecondKTB->Name = L"SecondKTB";
			this->SecondKTB->Size = System::Drawing::Size(80, 26);
			this->SecondKTB->TabIndex = 4;
			this->SecondKTB->KeyPress += gcnew System::Windows::Forms::KeyPressEventHandler(this, &MainWindow::SecondKTB_KeyPress);
			// 
			// ThirdKTB
			// 
			this->ThirdKTB->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->ThirdKTB->Location = System::Drawing::Point(287, 93);
			this->ThirdKTB->MaxLength = 5;
			this->ThirdKTB->Name = L"ThirdKTB";
			this->ThirdKTB->Size = System::Drawing::Size(80, 26);
			this->ThirdKTB->TabIndex = 5;
			this->ThirdKTB->KeyPress += gcnew System::Windows::Forms::KeyPressEventHandler(this, &MainWindow::ThirdKTB_KeyPress);
			// 
			// SolveButton
			// 
			this->SolveButton->Font = (gcnew System::Drawing::Font(L"Arial", 14, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->SolveButton->Location = System::Drawing::Point(8, 143);
			this->SolveButton->Name = L"SolveButton";
			this->SolveButton->Size = System::Drawing::Size(123, 46);
			this->SolveButton->TabIndex = 6;
			this->SolveButton->Text = L"Решить";
			this->SolveButton->UseVisualStyleBackColor = true;
			this->SolveButton->Click += gcnew System::EventHandler(this, &MainWindow::SolveButton_Click);
			// 
			// RootTextLabel
			// 
			this->RootTextLabel->AutoSize = true;
			this->RootTextLabel->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->RootTextLabel->Location = System::Drawing::Point(12, 217);
			this->RootTextLabel->Name = L"RootTextLabel";
			this->RootTextLabel->Size = System::Drawing::Size(171, 24);
			this->RootTextLabel->TabIndex = 7;
			this->RootTextLabel->Text = L"Корни уравнения:";
			// 
			// FirstRoot
			// 
			this->FirstRoot->AutoSize = true;
			this->FirstRoot->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->FirstRoot->Location = System::Drawing::Point(29, 263);
			this->FirstRoot->Name = L"FirstRoot";
			this->FirstRoot->Size = System::Drawing::Size(29, 20);
			this->FirstRoot->TabIndex = 8;
			this->FirstRoot->Text = L"X0";
			// 
			// SecondRoot
			// 
			this->SecondRoot->AutoSize = true;
			this->SecondRoot->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->SecondRoot->Location = System::Drawing::Point(29, 298);
			this->SecondRoot->Name = L"SecondRoot";
			this->SecondRoot->Size = System::Drawing::Size(29, 20);
			this->SecondRoot->TabIndex = 9;
			this->SecondRoot->Text = L"X1";
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label1->Location = System::Drawing::Point(8, 345);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(208, 24);
			this->label1->TabIndex = 10;
			this->label1->Text = L"Альтернативный вид:";
			// 
			// SecondRootAlt
			// 
			this->SecondRootAlt->AutoSize = true;
			this->SecondRootAlt->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->SecondRootAlt->Location = System::Drawing::Point(25, 434);
			this->SecondRootAlt->Name = L"SecondRootAlt";
			this->SecondRootAlt->Size = System::Drawing::Size(29, 20);
			this->SecondRootAlt->TabIndex = 12;
			this->SecondRootAlt->Text = L"X1";
			// 
			// FirstRootAlt
			// 
			this->FirstRootAlt->AutoSize = true;
			this->FirstRootAlt->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->FirstRootAlt->Location = System::Drawing::Point(25, 388);
			this->FirstRootAlt->Name = L"FirstRootAlt";
			this->FirstRootAlt->Size = System::Drawing::Size(29, 20);
			this->FirstRootAlt->TabIndex = 11;
			this->FirstRootAlt->Text = L"X0";
			// 
			// FunctionVizualizer
			// 
			chartArea1->AxisX->LabelStyle->Format = L"{0:0.00}";
			chartArea1->Name = L"ChartArea1";
			this->FunctionVizualizer->ChartAreas->Add(chartArea1);
			legend1->Name = L"Legend1";
			this->FunctionVizualizer->Legends->Add(legend1);
			this->FunctionVizualizer->Location = System::Drawing::Point(390, 44);
			this->FunctionVizualizer->Name = L"FunctionVizualizer";
			series1->BorderWidth = 3;
			series1->ChartArea = L"ChartArea1";
			series1->ChartType = System::Windows::Forms::DataVisualization::Charting::SeriesChartType::Spline;
			series1->Color = System::Drawing::Color::Red;
			series1->Legend = L"Legend1";
			series1->Name = L"Function";
			series2->BorderWidth = 3;
			series2->ChartArea = L"ChartArea1";
			series2->ChartType = System::Windows::Forms::DataVisualization::Charting::SeriesChartType::Line;
			series2->Color = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(0)),
				static_cast<System::Int32>(static_cast<System::Byte>(64)));
			series2->Legend = L"Legend1";
			series2->Name = L"y = 0";
			series3->BorderWidth = 3;
			series3->ChartArea = L"ChartArea1";
			series3->ChartType = System::Windows::Forms::DataVisualization::Charting::SeriesChartType::Line;
			series3->Color = System::Drawing::Color::DarkSlateGray;
			series3->Legend = L"Legend1";
			series3->Name = L"x = 0";
			this->FunctionVizualizer->Series->Add(series1);
			this->FunctionVizualizer->Series->Add(series2);
			this->FunctionVizualizer->Series->Add(series3);
			this->FunctionVizualizer->Size = System::Drawing::Size(600, 550);
			this->FunctionVizualizer->TabIndex = 13;
			this->FunctionVizualizer->Text = L"chart1";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label2->Location = System::Drawing::Point(8, 44);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(287, 24);
			this->label2->TabIndex = 14;
			this->label2->Text = L"Введите коэффициенты при x:";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label3->Location = System::Drawing::Point(12, 488);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(165, 24);
			this->label3->TabIndex = 15;
			this->label3->Text = L"Поиск подбором:";
			// 
			// HelpButton
			// 
			this->HelpButton->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->HelpButton->Location = System::Drawing::Point(261, 143);
			this->HelpButton->Name = L"HelpButton";
			this->HelpButton->Size = System::Drawing::Size(122, 46);
			this->HelpButton->TabIndex = 16;
			this->HelpButton->Text = L"Справка";
			this->HelpButton->UseVisualStyleBackColor = true;
			this->HelpButton->Click += gcnew System::EventHandler(this, &MainWindow::HelpButton_Click);
			// 
			// PrecisionKTB
			// 
			this->PrecisionKTB->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->PrecisionKTB->Location = System::Drawing::Point(12, 529);
			this->PrecisionKTB->MaxLength = 5;
			this->PrecisionKTB->Name = L"PrecisionKTB";
			this->PrecisionKTB->Size = System::Drawing::Size(171, 26);
			this->PrecisionKTB->TabIndex = 17;
			this->PrecisionKTB->KeyPress += gcnew System::Windows::Forms::KeyPressEventHandler(this, &MainWindow::PrecisionKTB_KeyPress);
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label4->Location = System::Drawing::Point(194, 535);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(149, 20);
			this->label4->TabIndex = 18;
			this->label4->Text = L"точность подбора";
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label5->Location = System::Drawing::Point(4, 581);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(251, 20);
			this->label5->TabIndex = 19;
			this->label5->Text = L"Корни находятся в промежутке:";
			// 
			// SelectedRoots
			// 
			this->SelectedRoots->AutoSize = true;
			this->SelectedRoots->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->SelectedRoots->Location = System::Drawing::Point(4, 619);
			this->SelectedRoots->Name = L"SelectedRoots";
			this->SelectedRoots->Size = System::Drawing::Size(45, 20);
			this->SelectedRoots->TabIndex = 20;
			this->SelectedRoots->Text = L"[ ] ; [ ]";
			// 
			// ClearButton
			// 
			this->ClearButton->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->ClearButton->Location = System::Drawing::Point(133, 143);
			this->ClearButton->Name = L"ClearButton";
			this->ClearButton->Size = System::Drawing::Size(122, 46);
			this->ClearButton->TabIndex = 21;
			this->ClearButton->Text = L"Очистить";
			this->ClearButton->UseVisualStyleBackColor = true;
			this->ClearButton->Click += gcnew System::EventHandler(this, &MainWindow::ClearButton_Click);
			// 
			// MainWindow
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(1002, 788);
			this->Controls->Add(this->ClearButton);
			this->Controls->Add(this->SelectedRoots);
			this->Controls->Add(this->label5);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->PrecisionKTB);
			this->Controls->Add(this->HelpButton);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->FunctionVizualizer);
			this->Controls->Add(this->SecondRootAlt);
			this->Controls->Add(this->FirstRootAlt);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->SecondRoot);
			this->Controls->Add(this->FirstRoot);
			this->Controls->Add(this->RootTextLabel);
			this->Controls->Add(this->SolveButton);
			this->Controls->Add(this->ThirdKTB);
			this->Controls->Add(this->SecondKTB);
			this->Controls->Add(this->FirstKTB);
			this->Controls->Add(this->SecondK);
			this->Controls->Add(this->FirstK);
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::FixedSingle;
			this->Icon = (cli::safe_cast<System::Drawing::Icon^>(resources->GetObject(L"$this.Icon")));
			this->Name = L"MainWindow";
			this->Text = L"Решала";
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->FunctionVizualizer))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion


	//Маска для вводимого текста
	private: System::Void FirstKTB_KeyPress(System::Object^ sender, System::Windows::Forms::KeyPressEventArgs^ e) {
		
		bool isMinusHandled = false;
		//запрет на ввод запятой в начале
		if (FirstKTB->TextLength == 0) {
			if (e->KeyChar >= '0' && e->KeyChar <= '9') { return; }
			if (e->KeyChar == '-') { return; }
		}
		//поддержка лишь одной запятой
		if (FirstKTB->TextLength > 0 && !FirstKTB->Text->Contains(",")) {
			if (FirstKTB->TextLength == 1 && FirstKTB->Text->Contains("-")) {
				if (e->KeyChar >= '0' && e->KeyChar <= '9') { return; }
				if (e->KeyChar == 8) { return; }
			}
			else {
				if (e->KeyChar == ',') { return; }
				if (e->KeyChar >= '0' && e->KeyChar <= '9') { return; }
				if (e->KeyChar == 8) { return; }
			}
		}
		
		if (FirstKTB->Text->Contains(",") && FirstKTB->TextLength < 5) {
			if (e->KeyChar == 8) { return; }
		}

		if (!FirstKTB->Text->Contains("-") && FirstKTB->TextLength > 0) {
			if (!FirstKTB->Text->Contains(",")) { if (e->KeyChar == ',') { return; } }
			if (e->KeyChar >= '0' && e->KeyChar <= '9') { return; }
			if (e->KeyChar == 8) { return; }
			if (e->KeyChar == '-')
			{
				if (!isMinusHandled)
				{
					String^ c = FirstKTB->Text;
					FirstKTB->Text = "-" + c->Replace("-", "");
					isMinusHandled = true;
				}
				e->Handled = true;
			}
			else
			{
				isMinusHandled = false;
			}
		}

		else {
			if (e->KeyChar >= '0' && e->KeyChar <= '9') { return; }
			if (e->KeyChar == 8) { return; }
		}

		e->Handled = true;
	}

	private: System::Void SecondKTB_KeyPress(System::Object^ sender, System::Windows::Forms::KeyPressEventArgs^ e) {
		bool isMinusHandled = false;
		//запрет на ввод запятой в начале
		if (SecondKTB->TextLength == 0) {
			if (e->KeyChar >= '0' && e->KeyChar <= '9') { return; }
			if (e->KeyChar == '-') { return; }
		}
		//поддержка лишь одной запятой
		if (SecondKTB->TextLength > 0 && !SecondKTB->Text->Contains(",")) {
			if (SecondKTB->TextLength == 1 && SecondKTB->Text->Contains("-")) {
				if (e->KeyChar >= '0' && e->KeyChar <= '9') { return; }
				if (e->KeyChar == 8) { return; }
			}
			else {
				if (e->KeyChar == ',') { return; }
				if (e->KeyChar >= '0' && e->KeyChar <= '9') { return; }
				if (e->KeyChar == 8) { return; }
			}
		}

		if (!SecondKTB->Text->Contains("-") && SecondKTB->TextLength > 0) {
			if (!SecondKTB->Text->Contains(",")) { if (e->KeyChar == ',') { return; } }
			if (e->KeyChar >= '0' && e->KeyChar <= '9') { return; }
			if (e->KeyChar == 8) { return; }
			if (e->KeyChar == '-')
			{
				if (!isMinusHandled)
				{
					String^ c = SecondKTB->Text;
					SecondKTB->Text = "-" + c->Replace("-", "");
					isMinusHandled = true;
				}
				e->Handled = true;
			}
			else
			{
				isMinusHandled = false;
			}
		}

		else {
				if (e->KeyChar >= '0' && e->KeyChar <= '9') { return; }
				if (e->KeyChar == 8) { return; }
		}

		e->Handled = true;
	}

	private: System::Void ThirdKTB_KeyPress(System::Object^ sender, System::Windows::Forms::KeyPressEventArgs^ e) {
		//запрет на ввод запятой в начале
		bool isMinusHandled = false;
		//запрет на ввод запятой в начале
		if (ThirdKTB->TextLength == 0) {
			if (e->KeyChar >= '0' && e->KeyChar <= '9') { return; }
			if (e->KeyChar == '-') { return; }
		}
		//поддержка лишь одной запятой
		if (ThirdKTB->TextLength > 0 && !ThirdKTB->Text->Contains(",")) {
			if (ThirdKTB->TextLength == 1 && ThirdKTB->Text->Contains("-")) {
				if (e->KeyChar >= '0' && e->KeyChar <= '9') { return; }
				if (e->KeyChar == 8) { return; }
			}
			else {
				if (e->KeyChar == ',') { return; }
				if (e->KeyChar >= '0' && e->KeyChar <= '9') { return; }
				if (e->KeyChar == 8) { return; }
			}
		}


		if (!ThirdKTB->Text->Contains("-") && ThirdKTB->TextLength > 0) {
			if (!ThirdKTB->Text->Contains(",")) { if (e->KeyChar == ',') { return; } }
			if (e->KeyChar >= '0' && e->KeyChar <= '9') { return; }
			if (e->KeyChar == 8) { return; }
			if (e->KeyChar == '-')
			{
				if (!isMinusHandled)
				{
					String^ c = ThirdKTB->Text;
					ThirdKTB->Text = "-" + c->Replace("-", "");
					isMinusHandled = true;
				}
				e->Handled = true;
			}
			else
			{
				isMinusHandled = false;
			}
		}

		else {
			if (e->KeyChar >= '0' && e->KeyChar <= '9') { return; }
			if (e->KeyChar == 8) { return; }
		}

		e->Handled = true;
	}

	private: System::Void PrecisionKTB_KeyPress(System::Object^ sender, System::Windows::Forms::KeyPressEventArgs^ e) {

		//поддержка лишь одной запятой
		if (PrecisionKTB->TextLength > 0 && !PrecisionKTB->Text->Contains(",")) {
			if (e->KeyChar == ',') { return; }
			if (e->KeyChar >= '0' && e->KeyChar <= '9') { return; }
			if (e->KeyChar == 8) { return; }
			e->Handled = true;
		}
		else {
			if (e->KeyChar >= '0' && e->KeyChar <= '9') { return; }
			if (e->KeyChar == 8) { return; }
			e->Handled = true;
		}
	}


	//Обработчик конпки
	private: System::Void SolveButton_Click(System::Object^ sender, System::EventArgs^ e) {

		double a, b, c, pr;
		//костыльное исправление "-,"
		if (FirstKTB->Text->Contains(",-") || FirstKTB->Text->Contains("-,")) {
			FirstKTB->Text = FirstKTB->Text->Replace(",-", "-");
			FirstKTB->Text = FirstKTB->Text->Replace("-,", "-");
		}
		if (SecondKTB->Text->Contains(",-") || SecondKTB->Text->Contains("-,")) {
			SecondKTB->Text = SecondKTB->Text->Replace(",-", "-");
			SecondKTB->Text = SecondKTB->Text->Replace("-,", "-");
		}
		if (ThirdKTB->Text->Contains(",-") || ThirdKTB->Text->Contains("-,")) {
			ThirdKTB->Text = ThirdKTB->Text->Replace(",-", "-");
			ThirdKTB->Text = ThirdKTB->Text->Replace("-,", "-");
		}


		//если поле пусто или равно 0, то точность подбора будет равна 1
		//Устал править возможности для ввода и костылить, так что теперь просто кидает окно с ошибкой и меняет коэффициенты на 1, если юзер пытается ввести не число или ввел его криво
		if (PrecisionKTB->Text == "" || PrecisionKTB->Text == "0" || (PrecisionKTB->TextLength > 1 && PrecisionKTB->Text->Contains(",") && PrecisionKTB->Text->EndsWith("0"))) {
			pr = 1;
			PrecisionKTB->Text = "1";
		}
		else
		{
			try
			{
				pr = Convert::ToDouble(PrecisionKTB->Text);
			}
			catch (...)
			{	
				//если юзер не знает, как выглядят числа, то кидаем ему окно с напоминанием о том, что вводимые данные должны быть корректны
				MessageBox::Show(L"В следующий раз введите число", L"", MessageBoxButtons::OK, MessageBoxIcon::Warning);
				pr = 1;
				PrecisionKTB->Text = "1";
			}
		}

		//Если поля пусты или не являются корректными числами, то автоматически присваивается значение 1
		if (FirstKTB->Text == "") {
			a = 1;
			FirstKTB->Text = "1";
		}
		else
		{
			try
			{
				a = Convert::ToDouble(FirstKTB->Text);
			}
			catch (...)
			{
				//если юзер не знает, как выглядят числа, то кидаем ему окно с напоминанием о том, что вводимые данные должны быть корректны
				MessageBox::Show(L"В следующий раз введите число", L"", MessageBoxButtons::OK, MessageBoxIcon::Warning);
				a = 1;
				FirstKTB->Text = "1";

			}
			
		}
		if (SecondKTB->Text == "") {
			b = 1;
			SecondKTB->Text = "1";
		}
		else
		{
			try
			{
				b = Convert::ToDouble(SecondKTB->Text);
			}
			catch (...)
			{
				//если юзер не знает, как выглядят числа, то кидаем ему окно с напоминанием о том, что вводимые данные должны быть корректны
				MessageBox::Show(L"В следующий раз введите число", L"", MessageBoxButtons::OK, MessageBoxIcon::Warning);
				b = 1;
				SecondKTB->Text = "1";
			}
			
		}
		if (ThirdKTB->Text == "") {
			c = 1;
			ThirdKTB->Text = "1";
		}
		else
		{
			try
			{
				c = Convert::ToDouble(ThirdKTB->Text);
			}
			catch (...)
			{
				//если юзер не знает, как выглядят числа, то кидаем ему окно с напоминанием о том, что вводимые данные должны быть корректны
				MessageBox::Show(L"В следующий раз введите число", L"", MessageBoxButtons::OK, MessageBoxIcon::Warning);
				c = 1;
				ThirdKTB->Text = "1";

			}
			
		}

		


		//объявление переменных для хранения корней и класса решения
		QuadraticEquationSolver^ solver = gcnew QuadraticEquationSolver(a, b, c); //экземпляр класса с заданными коэффициентами
		array<String^>^ Roots = gcnew array<String^>(4); //массив для хранения корней
		array<String^>^ RootsSelection = gcnew array<String^>(2); //массив для хранения корней методом подбора
		Roots = solver->Solve(); //получение корней

		//Изменение текста для вывода корней
		FirstRoot->Text = Roots[0];
		FirstRootAlt->Text = Roots[2];
		SecondRoot->Text = Roots[1];
		SecondRootAlt->Text = Roots[3];

		//график
		double LeftBorder;
		double RightBorder;
		double Peak = 0;
		if (a != 0) {
			Peak = solver->GetPeak();
		}

		//очистка графика от предыдущих решений
		FunctionVizualizer->Series[0]->Points->Clear();
		FunctionVizualizer->Series[1]->Points->Clear();
		FunctionVizualizer->Series[2]->Points->Clear();

		//границы рисования графика
		LeftBorder = c * -2;
		if (LeftBorder > 0) {
			RightBorder = LeftBorder;
			LeftBorder = -1 * LeftBorder;
		}
		if (LeftBorder < 0) {
			RightBorder = -1 * LeftBorder;
		}

		if (LeftBorder == 0) {
			RightBorder = 5;
			LeftBorder = -5;
		}

		//оси
		FunctionVizualizer->Series[1]->Points->AddXY(0, solver->Function(Peak + LeftBorder));
		FunctionVizualizer->Series[1]->Points->AddXY(0, 0);
		FunctionVizualizer->Series[1]->Points->AddXY(0, solver->Function(Peak)+(2*a/-a));
		FunctionVizualizer->Series[2]->Points->AddXY(LeftBorder, 0);
		FunctionVizualizer->Series[2]->Points->AddXY(RightBorder, 0);
		FunctionVizualizer->Series[2]->Points->AddXY(0, 0);

		//сам график
		for (double i = (Peak + LeftBorder); i <= (Peak + RightBorder); i++) {
			FunctionVizualizer->Series[0]->Points->AddXY(i, solver->Function(i));
		}

		//метод подбора

		int RoundLen = PrecisionKTB->TextLength;
		if (PrecisionKTB->Text->Contains(",")) {
			RoundLen = RoundLen - 1;
		}
		RootsSelection = solver->SolveSelection(pr, RightBorder, RoundLen);
		SelectedRoots->Text = RootsSelection[0] + " " + RootsSelection[1];


		//очистка памяти от экземпляра класса и массивов
		delete Roots, RootsSelection, solver;

	}


	 //открытие окна помощи
	private: System::Void HelpButton_Click(System::Object^ sender, System::EventArgs^ e) {
		HelpWindow^ hw = gcnew HelpWindow;
		hw->Show();
	}
	
//очистка текстбоксов
private: 
	System::Void ClearButton_Click(System::Object^ sender, System::EventArgs^ e) {
		FirstKTB->Text = "";
		SecondKTB->Text = "";
		ThirdKTB->Text = "";
		PrecisionKTB->Text = "";
		FirstRoot->Text = "";
		SecondRoot->Text = "";
		FirstRootAlt->Text = "";
		SecondRootAlt->Text = "";
		SelectedRoots->Text = "";
		FunctionVizualizer->Series[0]->Points->Clear();
		FunctionVizualizer->Series[1]->Points->Clear();
		FunctionVizualizer->Series[2]->Points->Clear();
	}
};

}
 