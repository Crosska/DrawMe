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

        saveFileDialog->Filter = "����� ����������� (*.bmp, *.jpg, *.png)|*.bmp;*.jpg;*.png";
}

System::Void DrawMe::MainForm::toolStripButtonExit_Click(System::Object^ sender, System::EventArgs^ e)
{
    Application::Exit();
}

System::Void DrawMe::MainForm::toolStripButtonInfo_Click(System::Object^ sender, System::EventArgs^ e)
{
    MessageBox::Show("���������� � ���������","...");
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

System::Void DrawMe::MainForm::�������ToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e)
{
    if (groupBoxStart->Visible) {
        groupBoxStart->Visible = false;
    }
    else {
        groupBoxStart->Visible = true;
        groupBoxStart->Location = Point(12,28);
    }
}

System::Void DrawMe::MainForm::���������ToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e)
{
    String^ fname;
    saveFileDialog->ShowDialog(); // �������� ������ ���������� �����
    fname = saveFileDialog->FileName; // ������ ���������� ������������

    if (fname == "") // �������� �� ������������
        return;

    Bitmap^ img = gcnew Bitmap(pictureBox1->Image); // ������ �����������
    img->Save(fname); // ����������

    MessageBox::Show("����������� ��������� �� ������ \"" + fname + "\".", "��������");
}

System::Void DrawMe::MainForm::��������ToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e)
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
    Point point1 = Point(mousePosition.X - Convert::ToInt32(size), mousePosition.Y + Convert::ToInt32(size)); // ������������� ���������� ��� ������������
    Point point2 = Point(mousePosition.X + Convert::ToInt32(size), mousePosition.Y + Convert::ToInt32(size)); // -�-
    Point point3 = Point(mousePosition.X, mousePosition.Y - Convert::ToInt32(size));                          // -�-
    array<Point>^ curvePointsTriangle = { point1,point2,point3 }; // ���������� 

    Point point11 = Point(mousePosition.X - Convert::ToInt32(size), mousePosition.Y - Convert::ToInt32(size));
    Point point22 = Point(mousePosition.X - Convert::ToInt32(size), mousePosition.Y + Convert::ToInt32(size));
    Point point33 = Point(mousePosition.X + Convert::ToInt32(size), mousePosition.Y + Convert::ToInt32(size));
    Point point44 = Point(mousePosition.X + Convert::ToInt32(size), mousePosition.Y - Convert::ToInt32(size));
    array<Point>^ curvePointsPoint = { point11,point22,point33,point44}; // ����������

    switch (statePen) {
    case 1: // ����� �����
        if (points->Count > 1) {
            canvas->DrawLines(pen, points->ToArray());
        }
        break;
    case 2: // ����� �����������
        canvas->DrawPolygon(pen, curvePointsTriangle);
        break;
    case 3: // ����� ����
        canvas->DrawEllipse(pen, mousePosition.X, mousePosition.Y, Convert::ToInt32(size), Convert::ToInt32(size));
        break;
    case 4: // ����� �����
        canvas->DrawPolygon(pen, curvePointsPoint);
        //canvas->DrawEllipse(pen, mousePosition.X, mousePosition.Y, Convert::ToInt32(size), Convert::ToInt32(size));
        break;
    case 5: // ����� �������
        canvas->DrawRectangle(pen, mousePosition.X, mousePosition.Y, Convert::ToInt32(size), Convert::ToInt32(size));
        break;
    case 6: // ����� ������
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
    points->Clear(); // ����� �����, ������ ����� ������ �����
    points->Add(e->Location); // ���������� �����
    draw = true; // ���������� ��������
    /*}
    else {
        mousePosition.X = e->Location.X; // ����������� ������� ����� �� X
        mousePosition.Y = e->Location.Y; // �� Y
    }*/
    pictureBox1->Invalidate(); // �����������
    points->Clear();


}

System::Void DrawMe::MainForm::pictureBox1_MouseMove(System::Object^ sender, System::Windows::Forms::MouseEventArgs^ e)
{
    if (draw && points->Contains(Point(e->X, e->Y)) == false) { // �������� �� ���������� ��������
        if (e->Button == System::Windows::Forms::MouseButtons::Left) { // �������� ������� ����� ������
            points->Add(e->Location); // ���������� �����
        }
        pictureBox1->Invalidate(); // �����������
    }
    mousePosition.X = e->X;
    mousePosition.Y = e->Y;
}

System::Void DrawMe::MainForm::pictureBox1_MouseUp(System::Object^ sender, System::Windows::Forms::MouseEventArgs^ e)
{
    draw = false; // ������ ���������
    pictureBox1->Invalidate(); // �����������
    mousePosition.X = -1; // �������� �������� X
    mousePosition.Y = -1; // �������� �������� Y
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
    color = Color::Black; // ����������� ���� �����
    size = 10; // ����������� ������ �����
    pen = gcnew Pen(color, size); // �������� �����
    points = gcnew List <Point>(); // �������� ������ �����
    draw = false; // ������ �� ���������
    statePen = 1; // ��� �����

    Bitmap^ Img = gcnew Bitmap(pictureBox1->Width, pictureBox1->Height); // �������� Bitmap � ��������� ������
    canvas = Graphics::FromImage(Img); // �������� ������
    pictureBox1->Image = Img;
    pictureBox1->BackColor = Color::White; // ���������� ����� ���

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

