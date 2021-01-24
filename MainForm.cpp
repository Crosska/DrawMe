#include "MainForm.h"

#include <thread>
#include <Windows.h>
#include <stdio.h>
#include <conio.h>

#pragma comment(lib, "user32.lib")

using namespace System;
using namespace System::Windows::Forms;
using namespace System::Threading;

[STAThreadAttribute]
void main(array<String^>^ args) {
    Application::EnableVisualStyles();
    Application::SetCompatibleTextRenderingDefault(false);

    DrawMe::MainForm form;
    Application::Run(% form);
}

struct Vector2D {
    int X,
        Y;
};
Vector2D mousePosition;

DrawMe::MainForm::MainForm(void)
{
        InitializeComponent();

        saveFileDialog->Filter = "Файлы изображения (*.bmp, *.jpg, *.png)|*.bmp;*.jpg;*.png";
}

System::Void DrawMe::MainForm::toolStripButtonExit_Click(System::Object^ sender, System::EventArgs^ e)
{
    Application::Exit();
}

System::Void DrawMe::MainForm::toolStripButtonInfo_Click(System::Object^ sender, System::EventArgs^ e)
{
    MessageBox::Show("Информация о программе","...");
}

System::Void DrawMe::MainForm::toolStripButtonBrushSettings_Click(System::Object^ sender, System::EventArgs^ e)
{
    if (groupBoxBrush->Visible) {
        groupBoxBrush->Visible = false;
    }
    else {
        groupBoxBrush->Visible = true;
        groupBoxBrush->Location = Point(12,28);
    }
}

System::Void DrawMe::MainForm::создатьToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e)
{
    if (groupBoxStart->Visible) {
        groupBoxStart->Visible = false;
    }
    else {
        groupBoxStart->Visible = true;
        groupBoxStart->Location = Point(12,28);
    }
}

System::Void DrawMe::MainForm::сохранитьToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e)
{
    String^ fname;
    saveFileDialog->ShowDialog(); // Показать диалог сохранения файла
    fname = saveFileDialog->FileName; // Запись выбранного расположения

    if (fname == "") // Проверка на расположение
        return;

    Bitmap^ img = gcnew Bitmap(pictureBox1->Image); // Запись изображения
    img->Save(fname); // Сохранение

    MessageBox::Show("Изображение сохранено по адресу \"" + fname + "\".", "Внимание");
}

System::Void DrawMe::MainForm::очиститьToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e)
{
    clearAll = true;
    pictureBox1->Invalidate();
}

System::Void DrawMe::MainForm::buttonCreateNew_Click(System::Object^ sender, System::EventArgs^ e)
{
    this->Width = Convert::ToInt32(numericUpDownWidth->Value);
    this->Height = Convert::ToInt32(numericUpDownLength->Value);

    if (groupBoxStart->Visible) {
        groupBoxStart->Visible = false;
    }
}

System::Void DrawMe::MainForm::buttonBrushColor_Click(System::Object^ sender, System::EventArgs^ e)
{
    colorDialog->ShowDialog();
    color = colorDialog->Color;
    pen = gcnew Pen(color, size);
}

System::Void DrawMe::MainForm::buttonApplyBrushSize_Click(System::Object^ sender, System::EventArgs^ e)
{
    size = Convert::ToSingle(numericUpDownBrushSize->Value);
    pen = gcnew Pen(color, size);
}

System::Void DrawMe::MainForm::buttonBrushTypeLine_Click(System::Object^ sender, System::EventArgs^ e)
{
    groupBoxBrush->Visible = false;
    statePen = 1;
}

System::Void DrawMe::MainForm::buttonBrushTypeTriangle_Click(System::Object^ sender, System::EventArgs^ e)
{
    groupBoxBrush->Visible = false;
    statePen = 2;
}

System::Void DrawMe::MainForm::buttonBrushTypeCircle_Click(System::Object^ sender, System::EventArgs^ e)
{
    groupBoxBrush->Visible = false;
    statePen = 3;
}

System::Void DrawMe::MainForm::buttonBrushTypePoint_Click(System::Object^ sender, System::EventArgs^ e)
{
    groupBoxBrush->Visible = false;
    statePen = 4;
}

System::Void DrawMe::MainForm::pictureBox1_Paint(System::Object^ sender, System::Windows::Forms::PaintEventArgs^ e)
{
    Point point1 = Point(mousePosition.X - Convert::ToInt32(size), mousePosition.Y + Convert::ToInt32(size)); // Инициализация переменных для треугольника
    Point point2 = Point(mousePosition.X + Convert::ToInt32(size), mousePosition.Y + Convert::ToInt32(size)); // -и-
    Point point3 = Point(mousePosition.X, mousePosition.Y - Convert::ToInt32(size));                          // -и-
    array<Point>^ curvePointsTriangle = { point1,point2,point3 }; // Переменная 

    Point point11 = Point(mousePosition.X - Convert::ToInt32(size), mousePosition.Y - Convert::ToInt32(size));
    Point point22 = Point(mousePosition.X - Convert::ToInt32(size), mousePosition.Y + Convert::ToInt32(size));
    Point point33 = Point(mousePosition.X + Convert::ToInt32(size), mousePosition.Y + Convert::ToInt32(size));
    Point point44 = Point(mousePosition.X + Convert::ToInt32(size), mousePosition.Y - Convert::ToInt32(size));
    array<Point>^ curvePointsPoint = { point11,point22,point33,point44}; // Переменная

    switch (statePen) {
    case 1: // Кисть линия
        if (points->Count > 1) {
            canvas->DrawLines(pen, points->ToArray());
        }
        break;
    case 2: // Кисть треугольник
        canvas->DrawPolygon(pen, curvePointsTriangle);
        break;
    case 3: // Кисть круг
        canvas->DrawEllipse(pen, mousePosition.X, mousePosition.Y, Convert::ToInt32(size), Convert::ToInt32(size));
        break;
    case 4: // Кисть точка
        canvas->DrawPolygon(pen, curvePointsPoint);
        //canvas->DrawEllipse(pen, mousePosition.X, mousePosition.Y, Convert::ToInt32(size), Convert::ToInt32(size));
        break;
    case 5: // Кисть квадрат
        canvas->DrawRectangle(pen, mousePosition.X, mousePosition.Y, Convert::ToInt32(size), Convert::ToInt32(size));
        break;
    case 6: // Кисть кольцо
        canvas->DrawEllipse(pen, mousePosition.X, mousePosition.Y, Convert::ToInt32(size/3), Convert::ToInt32(size/3));
        break;
    default:
        break;
    }

    if (clearAll) {
        points->Clear();
        canvas->Clear(Color::White);
        clearAll = false;
    }

}

System::Void DrawMe::MainForm::pictureBox1_MouseDown(System::Object^ sender, System::Windows::Forms::MouseEventArgs^ e)
{
    //if (statePen == 1) {
    points->Clear(); // Новая линия, значит новый список точек
    points->Add(e->Location); // Запоминаем точку
    draw = true; // Разрешение рисовать
    /*}
    else {
        mousePosition.X = e->Location.X; // Запоминание позиции мышки по X
        mousePosition.Y = e->Location.Y; // По Y
    }*/
    pictureBox1->Invalidate(); // Перерисовка
    points->Clear();


}

System::Void DrawMe::MainForm::pictureBox1_MouseMove(System::Object^ sender, System::Windows::Forms::MouseEventArgs^ e)
{
    if (draw && points->Contains(Point(e->X, e->Y)) == false) { // Проверка на разрешение рисовать
        if (e->Button == System::Windows::Forms::MouseButtons::Left) { // Проверка нажатия левой кнопки
            points->Add(e->Location); // Добавление точки
        }
        pictureBox1->Invalidate(); // Перерисовка
    }
    mousePosition.X = e->X;
    mousePosition.Y = e->Y;
}

System::Void DrawMe::MainForm::pictureBox1_MouseUp(System::Object^ sender, System::Windows::Forms::MouseEventArgs^ e)
{
    draw = false; // Запрет рисования
    pictureBox1->Invalidate(); // Перерисовка
    mousePosition.X = -1; // Стандарт значения X
    mousePosition.Y = -1; // Стандарт значения Y
}

System::Void DrawMe::MainForm::pictureBox1_SizeChanged(System::Object^ sender, System::EventArgs^ e)
{
    if (pictureBox1->Image) {
        Bitmap^ img = gcnew Bitmap(pictureBox1->Width, pictureBox1->Height, Graphics::FromImage(pictureBox1->Image));
        delete canvas;
        canvas = Graphics::FromImage(img);
        pictureBox1->Image = img;
        pictureBox1->Refresh();
        pictureBox1->Invalidate();
    }
}

System::Void DrawMe::MainForm::MainForm_Load(System::Object^ sender, System::EventArgs^ e)
{
    color = Color::Black; // Стандартный цвет кисти
    size = 10; // Стандартный размер кисти
    pen = gcnew Pen(color, size); // Создание кисти
    points = gcnew List <Point>(); // Создание списка точек
    draw = false; // Зппрет на рисование
    statePen = 1; // Тип кисти

    Bitmap^ Img = gcnew Bitmap(pictureBox1->Width, pictureBox1->Height); // Создание Bitmap с размерами холста
    canvas = Graphics::FromImage(Img); // Создание холста
    pictureBox1->Image = Img;
    pictureBox1->BackColor = Color::White; // Заполнение белым фон

    numericUpDownWidth->Minimum = 300;
    numericUpDownLength->Minimum = 300;
    numericUpDownWidth->Maximum = GetSystemMetrics(SM_CXSCREEN);
    numericUpDownLength->Maximum = GetSystemMetrics(SM_CXSCREEN);

    clearAll = false;
}

System::Void DrawMe::MainForm::buttonBrushTypeRectangle_Click(System::Object^ sender, System::EventArgs^ e)
{
    groupBoxBrush->Visible = false;
    statePen = 5;
}

