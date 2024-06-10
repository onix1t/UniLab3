#pragma once

namespace UniLab3 {
    using namespace System;
    using namespace System::ComponentModel;
    using namespace System::Collections;
    using namespace System::Collections::Generic;
    using namespace System::Windows::Forms;
    using namespace System::Data;
    using namespace System::Drawing;
    using namespace System::IO;
    using namespace System::Text::RegularExpressions;

    public ref class MainForm : public System::Windows::Forms::Form {
    public:
        MainForm(void) {
            InitializeComponent();
        }

    protected:
        ~MainForm() {
            if (components) {
                delete components;
            }
        }
    private: System::Windows::Forms::MenuStrip^ menuStrip1;
    private: System::Windows::Forms::ToolStripMenuItem^ fileToolStripMenuItem;
    private: System::Windows::Forms::ToolStripMenuItem^ openToolStripMenuItem;
    private: System::Windows::Forms::ToolStripMenuItem^ saveToolStripMenuItem;
    private: System::Windows::Forms::ToolStripMenuItem^ saveAsToolStripMenuItem;
    private: System::Windows::Forms::ToolStripMenuItem^ editToolStripMenuItem;
    private: System::Windows::Forms::ToolStripMenuItem^ replaceLettersWithPercentsToolStripMenuItem;
    private: System::Windows::Forms::ToolStripMenuItem^ checkColorsToolStripMenuItem;
    private: System::Windows::Forms::TextBox^ textBox1;
    private: System::Windows::Forms::OpenFileDialog^ openFileDialog1;
    private: System::Windows::Forms::SaveFileDialog^ saveFileDialog1;
    private: System::ComponentModel::IContainer^ components;

    protected:
        void InitializeComponent(void) {
            this->menuStrip1 = (gcnew System::Windows::Forms::MenuStrip());
            this->fileToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
            this->openToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
            this->saveToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
            this->saveAsToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
            this->editToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
            this->replaceLettersWithPercentsToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
            this->checkColorsToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
            this->textBox1 = (gcnew System::Windows::Forms::TextBox());
            this->openFileDialog1 = (gcnew System::Windows::Forms::OpenFileDialog());
            this->saveFileDialog1 = (gcnew System::Windows::Forms::SaveFileDialog());
            this->menuStrip1->SuspendLayout();
            this->SuspendLayout();
            // 
            // menuStrip1
            // 
            this->menuStrip1->Items->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(2) {
                this->fileToolStripMenuItem,
                    this->editToolStripMenuItem
            });
            this->menuStrip1->Location = System::Drawing::Point(0, 0);
            this->menuStrip1->Name = L"menuStrip1";
            this->menuStrip1->Size = System::Drawing::Size(800, 24);
            this->menuStrip1->TabIndex = 0;
            this->menuStrip1->Text = L"menuStrip1";
            // 
            // fileToolStripMenuItem
            // 
            this->fileToolStripMenuItem->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(3) {
                this->openToolStripMenuItem,
                    this->saveToolStripMenuItem, this->saveAsToolStripMenuItem
            });
            this->fileToolStripMenuItem->Name = L"fileToolStripMenuItem";
            this->fileToolStripMenuItem->Size = System::Drawing::Size(48, 20);
            this->fileToolStripMenuItem->Text = L"Файл";
            // 
            // openToolStripMenuItem
            // 
            this->openToolStripMenuItem->Name = L"openToolStripMenuItem";
            this->openToolStripMenuItem->Size = System::Drawing::Size(180, 22);
            this->openToolStripMenuItem->Text = L"Открыть";
            this->openToolStripMenuItem->Click += gcnew System::EventHandler(this, &MainForm::openToolStripMenuItem_Click);
            // 
            // saveToolStripMenuItem
            // 
            this->saveToolStripMenuItem->Name = L"saveToolStripMenuItem";
            this->saveToolStripMenuItem->Size = System::Drawing::Size(180, 22);
            this->saveToolStripMenuItem->Text = L"Сохранить";
            this->saveToolStripMenuItem->Click += gcnew System::EventHandler(this, &MainForm::saveToolStripMenuItem_Click);
            // 
            // saveAsToolStripMenuItem
            // 
            this->saveAsToolStripMenuItem->Name = L"saveAsToolStripMenuItem";
            this->saveAsToolStripMenuItem->Size = System::Drawing::Size(180, 22);
            this->saveAsToolStripMenuItem->Text = L"Сохранить как";
            this->saveAsToolStripMenuItem->Click += gcnew System::EventHandler(this, &MainForm::saveAsToolStripMenuItem_Click);
            // 
            // editToolStripMenuItem
            // 
            this->editToolStripMenuItem->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(2) {
                this->replaceLettersWithPercentsToolStripMenuItem,
                    this->checkColorsToolStripMenuItem
            });
            this->editToolStripMenuItem->Name = L"editToolStripMenuItem";
            this->editToolStripMenuItem->Size = System::Drawing::Size(73, 20);
            this->editToolStripMenuItem->Text = L"Изменить";
            // 
            // replaceLettersWithPercentsToolStripMenuItem
            // 
            this->replaceLettersWithPercentsToolStripMenuItem->Name = L"replaceLettersWithPercentsToolStripMenuItem";
            this->replaceLettersWithPercentsToolStripMenuItem->Size = System::Drawing::Size(234, 22);
            this->replaceLettersWithPercentsToolStripMenuItem->Text = L"Замена букв на \"%\"";
            this->replaceLettersWithPercentsToolStripMenuItem->Click += gcnew System::EventHandler(this, &MainForm::replaceLettersWithPercentsToolStripMenuItem_Click);
            // 
            // checkColorsToolStripMenuItem
            // 
            this->checkColorsToolStripMenuItem->Name = L"checkColorsToolStripMenuItem";
            this->checkColorsToolStripMenuItem->Size = System::Drawing::Size(234, 22);
            this->checkColorsToolStripMenuItem->Text = L"Проверка на наличие цветов";
            this->checkColorsToolStripMenuItem->Click += gcnew System::EventHandler(this, &MainForm::checkColorsToolStripMenuItem_Click);
            // 
            // textBox1
            // 
            this->textBox1->Location = System::Drawing::Point(12, 27);
            this->textBox1->Multiline = true;
            this->textBox1->Name = L"textBox1";
            this->textBox1->Size = System::Drawing::Size(776, 411);
            this->textBox1->TabIndex = 1;
            // 
            // MainForm
            // 
            this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
            this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
            this->ClientSize = System::Drawing::Size(800, 450);
            this->Controls->Add(this->textBox1);
            this->Controls->Add(this->menuStrip1);
            this->MainMenuStrip = this->menuStrip1;
            this->Name = L"MainForm";
            this->Text = L"Лабораторная работа №3 - Текстовый редактор";
            this->Resize += gcnew System::EventHandler(this, &MainForm::MainForm_Resize);
            this->menuStrip1->ResumeLayout(false);
            this->menuStrip1->PerformLayout();
            this->ResumeLayout(false);
            this->PerformLayout();

        }
#pragma endregion

        // -- [ Функции ] --
        
        // Функция изменения интерфеса при изменении размеров окна
        void MainForm_Resize(System::Object^ sender, System::EventArgs^ e) {
            textBox1->Width = this->ClientSize.Width - 24;
            textBox1->Height = this->ClientSize.Height - 51;
        }
        
        // -- [ Кнопки ] --

        // Кнопка открытия существующего файла
        void openToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
            if (openFileDialog1->ShowDialog() == System::Windows::Forms::DialogResult::OK) {
                String^ filePath = openFileDialog1->FileName;
                textBox1->Text = File::ReadAllText(filePath);
            }
        }

        // Кнопка сохранения изменений файла
        void saveToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
            if (!String::IsNullOrEmpty(openFileDialog1->FileName)) {
                File::WriteAllText(openFileDialog1->FileName, textBox1->Text);
            }
            else {
                saveAsToolStripMenuItem_Click(sender, e);
            }
        }

        // Функция сохранения новго файла
        void saveAsToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
            if (saveFileDialog1->ShowDialog() == System::Windows::Forms::DialogResult::OK) {
                String^ filePath = saveFileDialog1->FileName;
                File::WriteAllText(filePath, textBox1->Text);
            }
        }

        // Кнопка замены букв на %
        void replaceLettersWithPercentsToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
            String^ originalText = textBox1->Text;
            String^ modifiedText = Regex::Replace(originalText, L"[a-zA-Zа-яА-Я]", L"%");
            textBox1->Text = modifiedText;
        }

        // Кнопка поиска слов - основных цветов
        void checkColorsToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
            String^ text = textBox1->Text->ToLower();
            array<String^>^ colors = gcnew array<String^> { L"желтый", L"синий", L"красный" };
            Dictionary<String^, int>^ colorCounts = gcnew Dictionary<String^, int>();

            for each (String ^ color in colors) {
                int count = Regex::Matches(text, color)->Count;
                colorCounts[color] = count;
            }

            String^ message = "";
            for each (String^ color in colorCounts->Keys) {
                message += color + L": " + colorCounts[color] + L"\n";
            }

            MessageBox::Show(message, L"Наличие цветов в тексте");
        }
    };
}
