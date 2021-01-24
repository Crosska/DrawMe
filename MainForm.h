#pragma once

namespace DrawMe {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace System::Collections::Generic;

	/// <summary>
	/// Сводка для MainForm
	/// </summary>
	public ref class MainForm : public System::Windows::Forms::Form
	{
	public:
		MainForm(void);

	protected:
		/// <summary>
		/// Освободить все используемые ресурсы.
		/// </summary>
		~MainForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::StatusStrip^ statusStrip;
	protected:

	private: System::Windows::Forms::ToolStrip^ toolStrip;
	protected:

	private: System::Windows::Forms::ToolStripDropDownButton^ toolStripDropDownButton1;
	private: System::Windows::Forms::ToolStripMenuItem^ создатьToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ сохранитьКакToolStripMenuItem;

	private: System::Windows::Forms::ToolStripMenuItem^ очиститьToolStripMenuItem;





	private: System::Windows::Forms::PictureBox^ pictureBox1;
	private: System::Windows::Forms::GroupBox^ groupBoxBrush;

	private: System::Windows::Forms::NumericUpDown^ numericUpDownBrushSize;

	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Button^ button7;
	private: System::Windows::Forms::Button^ buttonBrushTypeTriangle;
	private: System::Windows::Forms::Button^ buttonBrushTypeRectangle;


	private: System::Windows::Forms::Button^ buttonBrushTypeCircle;

	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Button^ buttonBrushTypePoint;

	private: System::Windows::Forms::Button^ buttonApplyBrushSize;
	private: System::Windows::Forms::Button^ buttonBrushTypeLine;


	private: System::Windows::Forms::Button^ buttonBrushColor;
	private: System::Windows::Forms::ToolStripButton^ toolStripButtonBrushSettings;

	private: System::Windows::Forms::SaveFileDialog^ saveFileDialog;
	private: System::Windows::Forms::ColorDialog^ colorDialog;
	private: System::Windows::Forms::GroupBox^ groupBoxStart;

	private: System::Windows::Forms::RadioButton^ radioButtonUsersSize;
	private: System::Windows::Forms::RadioButton^ radioButtonStandartSize;
	private: System::Windows::Forms::Label^ label5;
	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::NumericUpDown^ numericUpDownWidth;
	private: System::Windows::Forms::NumericUpDown^ numericUpDownLength;


	private: System::Windows::Forms::Button^ buttonCreateNew;
	private: System::Windows::Forms::ToolStripButton^ toolStripButtonInfo;
	private: System::Windows::Forms::ToolStripButton^ toolStripButtonExit;
	private: System::Windows::Forms::ToolStripButton^ toolStripButton1;








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
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(MainForm::typeid));
			this->statusStrip = (gcnew System::Windows::Forms::StatusStrip());
			this->toolStrip = (gcnew System::Windows::Forms::ToolStrip());
			this->toolStripDropDownButton1 = (gcnew System::Windows::Forms::ToolStripDropDownButton());
			this->создатьToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->сохранитьКакToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->очиститьToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->toolStripButtonBrushSettings = (gcnew System::Windows::Forms::ToolStripButton());
			this->toolStripButton1 = (gcnew System::Windows::Forms::ToolStripButton());
			this->toolStripButtonInfo = (gcnew System::Windows::Forms::ToolStripButton());
			this->toolStripButtonExit = (gcnew System::Windows::Forms::ToolStripButton());
			this->pictureBox1 = (gcnew System::Windows::Forms::PictureBox());
			this->groupBoxBrush = (gcnew System::Windows::Forms::GroupBox());
			this->numericUpDownBrushSize = (gcnew System::Windows::Forms::NumericUpDown());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->button7 = (gcnew System::Windows::Forms::Button());
			this->buttonBrushTypeTriangle = (gcnew System::Windows::Forms::Button());
			this->buttonBrushTypeRectangle = (gcnew System::Windows::Forms::Button());
			this->buttonBrushTypeCircle = (gcnew System::Windows::Forms::Button());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->buttonBrushTypePoint = (gcnew System::Windows::Forms::Button());
			this->buttonApplyBrushSize = (gcnew System::Windows::Forms::Button());
			this->buttonBrushTypeLine = (gcnew System::Windows::Forms::Button());
			this->buttonBrushColor = (gcnew System::Windows::Forms::Button());
			this->saveFileDialog = (gcnew System::Windows::Forms::SaveFileDialog());
			this->colorDialog = (gcnew System::Windows::Forms::ColorDialog());
			this->groupBoxStart = (gcnew System::Windows::Forms::GroupBox());
			this->radioButtonUsersSize = (gcnew System::Windows::Forms::RadioButton());
			this->radioButtonStandartSize = (gcnew System::Windows::Forms::RadioButton());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->numericUpDownWidth = (gcnew System::Windows::Forms::NumericUpDown());
			this->numericUpDownLength = (gcnew System::Windows::Forms::NumericUpDown());
			this->buttonCreateNew = (gcnew System::Windows::Forms::Button());
			this->toolStrip->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->BeginInit();
			this->groupBoxBrush->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numericUpDownBrushSize))->BeginInit();
			this->groupBoxStart->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numericUpDownWidth))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numericUpDownLength))->BeginInit();
			this->SuspendLayout();
			// 
			// statusStrip
			// 
			this->statusStrip->Location = System::Drawing::Point(0, 512);
			this->statusStrip->Name = L"statusStrip";
			this->statusStrip->Size = System::Drawing::Size(836, 22);
			this->statusStrip->TabIndex = 0;
			this->statusStrip->Text = L"statusStrip1";
			// 
			// toolStrip
			// 
			this->toolStrip->BackColor = System::Drawing::SystemColors::GradientInactiveCaption;
			this->toolStrip->Font = (gcnew System::Drawing::Font(L"Century Gothic", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->toolStrip->Items->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(5) {
				this->toolStripDropDownButton1,
					this->toolStripButtonBrushSettings, this->toolStripButton1, this->toolStripButtonInfo, this->toolStripButtonExit
			});
			this->toolStrip->Location = System::Drawing::Point(0, 0);
			this->toolStrip->Name = L"toolStrip";
			this->toolStrip->Size = System::Drawing::Size(836, 25);
			this->toolStrip->TabIndex = 1;
			this->toolStrip->Text = L"toolStrip1";
			// 
			// toolStripDropDownButton1
			// 
			this->toolStripDropDownButton1->DisplayStyle = System::Windows::Forms::ToolStripItemDisplayStyle::Text;
			this->toolStripDropDownButton1->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(3) {
				this->создатьToolStripMenuItem,
					this->сохранитьКакToolStripMenuItem, this->очиститьToolStripMenuItem
			});
			this->toolStripDropDownButton1->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"toolStripDropDownButton1.Image")));
			this->toolStripDropDownButton1->ImageTransparentColor = System::Drawing::Color::Magenta;
			this->toolStripDropDownButton1->Name = L"toolStripDropDownButton1";
			this->toolStripDropDownButton1->Size = System::Drawing::Size(56, 22);
			this->toolStripDropDownButton1->Text = L"Файл";
			// 
			// создатьToolStripMenuItem
			// 
			this->создатьToolStripMenuItem->Name = L"создатьToolStripMenuItem";
			this->создатьToolStripMenuItem->Size = System::Drawing::Size(147, 22);
			this->создатьToolStripMenuItem->Text = L"Создать";
			this->создатьToolStripMenuItem->Click += gcnew System::EventHandler(this, &MainForm::создатьToolStripMenuItem_Click);
			// 
			// сохранитьКакToolStripMenuItem
			// 
			this->сохранитьКакToolStripMenuItem->Name = L"сохранитьКакToolStripMenuItem";
			this->сохранитьКакToolStripMenuItem->Size = System::Drawing::Size(147, 22);
			this->сохранитьКакToolStripMenuItem->Text = L"Сохранить";
			this->сохранитьКакToolStripMenuItem->Click += gcnew System::EventHandler(this, &MainForm::сохранитьToolStripMenuItem_Click);
			// 
			// очиститьToolStripMenuItem
			// 
			this->очиститьToolStripMenuItem->Name = L"очиститьToolStripMenuItem";
			this->очиститьToolStripMenuItem->Size = System::Drawing::Size(147, 22);
			this->очиститьToolStripMenuItem->Text = L"Очистить";
			this->очиститьToolStripMenuItem->Click += gcnew System::EventHandler(this, &MainForm::очиститьToolStripMenuItem_Click);
			// 
			// toolStripButtonBrushSettings
			// 
			this->toolStripButtonBrushSettings->DisplayStyle = System::Windows::Forms::ToolStripItemDisplayStyle::Text;
			this->toolStripButtonBrushSettings->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"toolStripButtonBrushSettings.Image")));
			this->toolStripButtonBrushSettings->ImageTransparentColor = System::Drawing::Color::Magenta;
			this->toolStripButtonBrushSettings->Name = L"toolStripButtonBrushSettings";
			this->toolStripButtonBrushSettings->Size = System::Drawing::Size(47, 22);
			this->toolStripButtonBrushSettings->Text = L"Кисть";
			this->toolStripButtonBrushSettings->Click += gcnew System::EventHandler(this, &MainForm::toolStripButtonBrushSettings_Click);
			// 
			// toolStripButton1
			// 
			this->toolStripButton1->DisplayStyle = System::Windows::Forms::ToolStripItemDisplayStyle::Text;
			this->toolStripButton1->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"toolStripButton1.Image")));
			this->toolStripButton1->ImageTransparentColor = System::Drawing::Color::Magenta;
			this->toolStripButton1->Name = L"toolStripButton1";
			this->toolStripButton1->Size = System::Drawing::Size(71, 22);
			this->toolStripButton1->Text = L"Действия";
			// 
			// toolStripButtonInfo
			// 
			this->toolStripButtonInfo->DisplayStyle = System::Windows::Forms::ToolStripItemDisplayStyle::Text;
			this->toolStripButtonInfo->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"toolStripButtonInfo.Image")));
			this->toolStripButtonInfo->ImageTransparentColor = System::Drawing::Color::Magenta;
			this->toolStripButtonInfo->Name = L"toolStripButtonInfo";
			this->toolStripButtonInfo->Size = System::Drawing::Size(106, 22);
			this->toolStripButtonInfo->Text = L"О программе";
			this->toolStripButtonInfo->Click += gcnew System::EventHandler(this, &MainForm::toolStripButtonInfo_Click);
			// 
			// toolStripButtonExit
			// 
			this->toolStripButtonExit->DisplayStyle = System::Windows::Forms::ToolStripItemDisplayStyle::Text;
			this->toolStripButtonExit->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"toolStripButtonExit.Image")));
			this->toolStripButtonExit->ImageTransparentColor = System::Drawing::Color::Magenta;
			this->toolStripButtonExit->Name = L"toolStripButtonExit";
			this->toolStripButtonExit->Size = System::Drawing::Size(51, 22);
			this->toolStripButtonExit->Text = L"Выход";
			this->toolStripButtonExit->Click += gcnew System::EventHandler(this, &MainForm::toolStripButtonExit_Click);
			// 
			// pictureBox1
			// 
			this->pictureBox1->Dock = System::Windows::Forms::DockStyle::Fill;
			this->pictureBox1->Location = System::Drawing::Point(0, 25);
			this->pictureBox1->Name = L"pictureBox1";
			this->pictureBox1->Size = System::Drawing::Size(836, 487);
			this->pictureBox1->TabIndex = 3;
			this->pictureBox1->TabStop = false;
			this->pictureBox1->SizeChanged += gcnew System::EventHandler(this, &MainForm::pictureBox1_SizeChanged);
			this->pictureBox1->Paint += gcnew System::Windows::Forms::PaintEventHandler(this, &MainForm::pictureBox1_Paint);
			this->pictureBox1->MouseDown += gcnew System::Windows::Forms::MouseEventHandler(this, &MainForm::pictureBox1_MouseDown);
			this->pictureBox1->MouseMove += gcnew System::Windows::Forms::MouseEventHandler(this, &MainForm::pictureBox1_MouseMove);
			this->pictureBox1->MouseUp += gcnew System::Windows::Forms::MouseEventHandler(this, &MainForm::pictureBox1_MouseUp);
			// 
			// groupBoxBrush
			// 
			this->groupBoxBrush->BackColor = System::Drawing::SystemColors::MenuBar;
			this->groupBoxBrush->Controls->Add(this->numericUpDownBrushSize);
			this->groupBoxBrush->Controls->Add(this->label2);
			this->groupBoxBrush->Controls->Add(this->button7);
			this->groupBoxBrush->Controls->Add(this->buttonBrushTypeTriangle);
			this->groupBoxBrush->Controls->Add(this->buttonBrushTypeRectangle);
			this->groupBoxBrush->Controls->Add(this->buttonBrushTypeCircle);
			this->groupBoxBrush->Controls->Add(this->label1);
			this->groupBoxBrush->Controls->Add(this->buttonBrushTypePoint);
			this->groupBoxBrush->Controls->Add(this->buttonApplyBrushSize);
			this->groupBoxBrush->Controls->Add(this->buttonBrushTypeLine);
			this->groupBoxBrush->Controls->Add(this->buttonBrushColor);
			this->groupBoxBrush->Font = (gcnew System::Drawing::Font(L"Century Gothic", 11.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->groupBoxBrush->Location = System::Drawing::Point(0, 25);
			this->groupBoxBrush->Name = L"groupBoxBrush";
			this->groupBoxBrush->Size = System::Drawing::Size(493, 155);
			this->groupBoxBrush->TabIndex = 4;
			this->groupBoxBrush->TabStop = false;
			this->groupBoxBrush->Text = L"Параметры кисти";
			this->groupBoxBrush->Visible = false;
			// 
			// numericUpDownBrushSize
			// 
			this->numericUpDownBrushSize->Location = System::Drawing::Point(6, 82);
			this->numericUpDownBrushSize->Minimum = System::Decimal(gcnew cli::array< System::Int32 >(4) { 1, 0, 0, 0 });
			this->numericUpDownBrushSize->Name = L"numericUpDownBrushSize";
			this->numericUpDownBrushSize->Size = System::Drawing::Size(66, 26);
			this->numericUpDownBrushSize->TabIndex = 10;
			this->numericUpDownBrushSize->Value = System::Decimal(gcnew cli::array< System::Int32 >(4) { 10, 0, 0, 0 });
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Font = (gcnew System::Drawing::Font(L"Century Gothic", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label2->Location = System::Drawing::Point(6, 22);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(83, 22);
			this->label2->TabIndex = 9;
			this->label2->Text = L"Общее";
			// 
			// button7
			// 
			this->button7->Location = System::Drawing::Point(376, 111);
			this->button7->Name = L"button7";
			this->button7->Size = System::Drawing::Size(109, 29);
			this->button7->TabIndex = 8;
			this->button7->Text = L"Цвет";
			this->button7->UseVisualStyleBackColor = true;
			// 
			// buttonBrushTypeTriangle
			// 
			this->buttonBrushTypeTriangle->Location = System::Drawing::Point(376, 47);
			this->buttonBrushTypeTriangle->Name = L"buttonBrushTypeTriangle";
			this->buttonBrushTypeTriangle->Size = System::Drawing::Size(109, 29);
			this->buttonBrushTypeTriangle->TabIndex = 7;
			this->buttonBrushTypeTriangle->Text = L"Треугольник";
			this->buttonBrushTypeTriangle->UseVisualStyleBackColor = true;
			this->buttonBrushTypeTriangle->Click += gcnew System::EventHandler(this, &MainForm::buttonBrushTypeTriangle_Click);
			// 
			// buttonBrushTypeRectangle
			// 
			this->buttonBrushTypeRectangle->Location = System::Drawing::Point(263, 111);
			this->buttonBrushTypeRectangle->Name = L"buttonBrushTypeRectangle";
			this->buttonBrushTypeRectangle->Size = System::Drawing::Size(108, 29);
			this->buttonBrushTypeRectangle->TabIndex = 6;
			this->buttonBrushTypeRectangle->Text = L"Квадрат";
			this->buttonBrushTypeRectangle->UseVisualStyleBackColor = true;
			this->buttonBrushTypeRectangle->Click += gcnew System::EventHandler(this, &MainForm::buttonBrushTypeRectangle_Click);
			// 
			// buttonBrushTypeCircle
			// 
			this->buttonBrushTypeCircle->Location = System::Drawing::Point(263, 79);
			this->buttonBrushTypeCircle->Name = L"buttonBrushTypeCircle";
			this->buttonBrushTypeCircle->Size = System::Drawing::Size(108, 29);
			this->buttonBrushTypeCircle->TabIndex = 5;
			this->buttonBrushTypeCircle->Text = L"Круг";
			this->buttonBrushTypeCircle->UseVisualStyleBackColor = true;
			this->buttonBrushTypeCircle->Click += gcnew System::EventHandler(this, &MainForm::buttonBrushTypeCircle_Click);
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Century Gothic", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label1->Location = System::Drawing::Point(403, 22);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(83, 22);
			this->label1->TabIndex = 4;
			this->label1->Text = L"Фигура";
			// 
			// buttonBrushTypePoint
			// 
			this->buttonBrushTypePoint->Location = System::Drawing::Point(263, 47);
			this->buttonBrushTypePoint->Name = L"buttonBrushTypePoint";
			this->buttonBrushTypePoint->Size = System::Drawing::Size(108, 29);
			this->buttonBrushTypePoint->TabIndex = 3;
			this->buttonBrushTypePoint->Text = L"Точка";
			this->buttonBrushTypePoint->UseVisualStyleBackColor = true;
			this->buttonBrushTypePoint->Click += gcnew System::EventHandler(this, &MainForm::buttonBrushTypePoint_Click);
			// 
			// buttonApplyBrushSize
			// 
			this->buttonApplyBrushSize->Location = System::Drawing::Point(78, 80);
			this->buttonApplyBrushSize->Name = L"buttonApplyBrushSize";
			this->buttonApplyBrushSize->Size = System::Drawing::Size(169, 29);
			this->buttonApplyBrushSize->TabIndex = 2;
			this->buttonApplyBrushSize->Text = L"Применить размер";
			this->buttonApplyBrushSize->UseVisualStyleBackColor = true;
			this->buttonApplyBrushSize->Click += gcnew System::EventHandler(this, &MainForm::buttonApplyBrushSize_Click);
			// 
			// buttonBrushTypeLine
			// 
			this->buttonBrushTypeLine->Location = System::Drawing::Point(376, 79);
			this->buttonBrushTypeLine->Name = L"buttonBrushTypeLine";
			this->buttonBrushTypeLine->Size = System::Drawing::Size(109, 29);
			this->buttonBrushTypeLine->TabIndex = 1;
			this->buttonBrushTypeLine->Text = L"Линия";
			this->buttonBrushTypeLine->UseVisualStyleBackColor = true;
			this->buttonBrushTypeLine->Click += gcnew System::EventHandler(this, &MainForm::buttonBrushTypeLine_Click);
			// 
			// buttonBrushColor
			// 
			this->buttonBrushColor->Location = System::Drawing::Point(6, 47);
			this->buttonBrushColor->Name = L"buttonBrushColor";
			this->buttonBrushColor->Size = System::Drawing::Size(241, 29);
			this->buttonBrushColor->TabIndex = 0;
			this->buttonBrushColor->Text = L"Изменить цвет";
			this->buttonBrushColor->UseVisualStyleBackColor = true;
			this->buttonBrushColor->Click += gcnew System::EventHandler(this, &MainForm::buttonBrushColor_Click);
			// 
			// groupBoxStart
			// 
			this->groupBoxStart->BackColor = System::Drawing::SystemColors::MenuBar;
			this->groupBoxStart->Controls->Add(this->radioButtonUsersSize);
			this->groupBoxStart->Controls->Add(this->radioButtonStandartSize);
			this->groupBoxStart->Controls->Add(this->label5);
			this->groupBoxStart->Controls->Add(this->label4);
			this->groupBoxStart->Controls->Add(this->label3);
			this->groupBoxStart->Controls->Add(this->numericUpDownWidth);
			this->groupBoxStart->Controls->Add(this->numericUpDownLength);
			this->groupBoxStart->Controls->Add(this->buttonCreateNew);
			this->groupBoxStart->Font = (gcnew System::Drawing::Font(L"Century Gothic", 11.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->groupBoxStart->Location = System::Drawing::Point(179, 200);
			this->groupBoxStart->Name = L"groupBoxStart";
			this->groupBoxStart->Size = System::Drawing::Size(446, 128);
			this->groupBoxStart->TabIndex = 11;
			this->groupBoxStart->TabStop = false;
			this->groupBoxStart->Text = L"Создание проекта";
			// 
			// radioButtonUsersSize
			// 
			this->radioButtonUsersSize->AutoSize = true;
			this->radioButtonUsersSize->Location = System::Drawing::Point(334, 51);
			this->radioButtonUsersSize->Name = L"radioButtonUsersSize";
			this->radioButtonUsersSize->Size = System::Drawing::Size(102, 24);
			this->radioButtonUsersSize->TabIndex = 17;
			this->radioButtonUsersSize->Text = L"Заданный";
			this->radioButtonUsersSize->UseVisualStyleBackColor = true;
			// 
			// radioButtonStandartSize
			// 
			this->radioButtonStandartSize->AutoSize = true;
			this->radioButtonStandartSize->Checked = true;
			this->radioButtonStandartSize->Location = System::Drawing::Point(201, 51);
			this->radioButtonStandartSize->Name = L"radioButtonStandartSize";
			this->radioButtonStandartSize->Size = System::Drawing::Size(127, 24);
			this->radioButtonStandartSize->TabIndex = 16;
			this->radioButtonStandartSize->TabStop = true;
			this->radioButtonStandartSize->Text = L"Стандартный";
			this->radioButtonStandartSize->UseVisualStyleBackColor = true;
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Font = (gcnew System::Drawing::Font(L"Century Gothic", 11.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label5->Location = System::Drawing::Point(197, 22);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(122, 20);
			this->label5->TabIndex = 15;
			this->label5->Text = L"Размер холста";
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Font = (gcnew System::Drawing::Font(L"Century Gothic", 11.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label4->Location = System::Drawing::Point(6, 22);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(71, 20);
			this->label4->TabIndex = 14;
			this->label4->Text = L"Ширина";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Font = (gcnew System::Drawing::Font(L"Century Gothic", 11.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label3->Location = System::Drawing::Point(94, 22);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(64, 20);
			this->label3->TabIndex = 13;
			this->label3->Text = L"Высота";
			// 
			// numericUpDownWidth
			// 
			this->numericUpDownWidth->Location = System::Drawing::Point(10, 49);
			this->numericUpDownWidth->Maximum = System::Decimal(gcnew cli::array< System::Int32 >(4) { 1680, 0, 0, 0 });
			this->numericUpDownWidth->Minimum = System::Decimal(gcnew cli::array< System::Int32 >(4) { 800, 0, 0, 0 });
			this->numericUpDownWidth->Name = L"numericUpDownWidth";
			this->numericUpDownWidth->Size = System::Drawing::Size(79, 26);
			this->numericUpDownWidth->TabIndex = 12;
			this->numericUpDownWidth->Value = System::Decimal(gcnew cli::array< System::Int32 >(4) { 800, 0, 0, 0 });
			// 
			// numericUpDownLength
			// 
			this->numericUpDownLength->Location = System::Drawing::Point(98, 49);
			this->numericUpDownLength->Maximum = System::Decimal(gcnew cli::array< System::Int32 >(4) { 1050, 0, 0, 0 });
			this->numericUpDownLength->Minimum = System::Decimal(gcnew cli::array< System::Int32 >(4) { 600, 0, 0, 0 });
			this->numericUpDownLength->Name = L"numericUpDownLength";
			this->numericUpDownLength->Size = System::Drawing::Size(79, 26);
			this->numericUpDownLength->TabIndex = 11;
			this->numericUpDownLength->Value = System::Decimal(gcnew cli::array< System::Int32 >(4) { 600, 0, 0, 0 });
			// 
			// buttonCreateNew
			// 
			this->buttonCreateNew->Font = (gcnew System::Drawing::Font(L"Century Gothic", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->buttonCreateNew->Location = System::Drawing::Point(10, 81);
			this->buttonCreateNew->Name = L"buttonCreateNew";
			this->buttonCreateNew->Size = System::Drawing::Size(426, 41);
			this->buttonCreateNew->TabIndex = 8;
			this->buttonCreateNew->Text = L"Создать проект";
			this->buttonCreateNew->UseVisualStyleBackColor = true;
			this->buttonCreateNew->Click += gcnew System::EventHandler(this, &MainForm::buttonCreateNew_Click);
			// 
			// MainForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 17);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(836, 534);
			this->Controls->Add(this->groupBoxStart);
			this->Controls->Add(this->groupBoxBrush);
			this->Controls->Add(this->pictureBox1);
			this->Controls->Add(this->toolStrip);
			this->Controls->Add(this->statusStrip);
			this->Font = (gcnew System::Drawing::Font(L"Century Gothic", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->Margin = System::Windows::Forms::Padding(4);
			this->MaximizeBox = false;
			this->MinimizeBox = false;
			this->Name = L"MainForm";
			this->ShowIcon = false;
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"DrawMe";
			this->Load += gcnew System::EventHandler(this, &MainForm::MainForm_Load);
			this->toolStrip->ResumeLayout(false);
			this->toolStrip->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->EndInit();
			this->groupBoxBrush->ResumeLayout(false);
			this->groupBoxBrush->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numericUpDownBrushSize))->EndInit();
			this->groupBoxStart->ResumeLayout(false);
			this->groupBoxStart->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numericUpDownWidth))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numericUpDownLength))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion

	private:

		Graphics^ canvas; // Холст
		List <Point>^ points; // Точки линии
		Pen^ pen; // Перо
		bool draw; // Доступно ли рисование
		Bitmap^ background; // Фон
		Color color; // Цвет
		Bitmap^ texture;
		float size; // Размер
		bool clearAll;
		String^ filename; // Название файла
		int statePen;

	private: System::Void toolStripButtonExit_Click(System::Object^ sender, System::EventArgs^ e);

	private: System::Void toolStripButtonInfo_Click(System::Object^ sender, System::EventArgs^ e);

	private: System::Void toolStripButtonBrushSettings_Click(System::Object^ sender, System::EventArgs^ e);

	private: System::Void создатьToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e);

	private: System::Void сохранитьToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e);

	private: System::Void очиститьToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e);

	private: System::Void buttonCreateNew_Click(System::Object^ sender, System::EventArgs^ e);

	private: System::Void buttonBrushColor_Click(System::Object^ sender, System::EventArgs^ e);

	private: System::Void buttonApplyBrushSize_Click(System::Object^ sender, System::EventArgs^ e);

	private: System::Void buttonBrushTypePoint_Click(System::Object^ sender, System::EventArgs^ e);

	private: System::Void buttonBrushTypeTriangle_Click(System::Object^ sender, System::EventArgs^ e);

	private: System::Void buttonBrushTypeCircle_Click(System::Object^ sender, System::EventArgs^ e);

	private: System::Void buttonBrushTypeLine_Click(System::Object^ sender, System::EventArgs^ e);

	private: System::Void pictureBox1_Paint(System::Object^ sender, System::Windows::Forms::PaintEventArgs^ e);

	private: System::Void pictureBox1_MouseDown(System::Object^ sender, System::Windows::Forms::MouseEventArgs^ e);

	private: System::Void pictureBox1_MouseMove(System::Object^ sender, System::Windows::Forms::MouseEventArgs^ e);

	private: System::Void pictureBox1_MouseUp(System::Object^ sender, System::Windows::Forms::MouseEventArgs^ e);

	private: System::Void pictureBox1_SizeChanged(System::Object^ sender, System::EventArgs^ e);

	private: System::Void MainForm_Load(System::Object^ sender, System::EventArgs^ e);

	private: System::Void buttonBrushTypeRectangle_Click(System::Object^ sender, System::EventArgs^ e);
};
};
