#pragma once

namespace GarciaKingLandauMlengelaP7 {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace std;

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
	private: System::Windows::Forms::MenuStrip^ menuStrip1;
	protected:
	private: System::Windows::Forms::ToolStripMenuItem^ theRulesOfTheGameToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ rulesToolStripMenuItem;

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
			this->menuStrip1 = (gcnew System::Windows::Forms::MenuStrip());
			this->theRulesOfTheGameToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->rulesToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->menuStrip1->SuspendLayout();
			this->SuspendLayout();
			// 
			// menuStrip1
			// 
			this->menuStrip1->Items->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(1) { this->theRulesOfTheGameToolStripMenuItem });
			this->menuStrip1->Location = System::Drawing::Point(0, 0);
			this->menuStrip1->Name = L"menuStrip1";
			this->menuStrip1->Size = System::Drawing::Size(529, 24);
			this->menuStrip1->TabIndex = 0;
			this->menuStrip1->Text = L"menuStrip1";
			// 
			// theRulesOfTheGameToolStripMenuItem
			// 
			this->theRulesOfTheGameToolStripMenuItem->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(1) { this->rulesToolStripMenuItem });
			this->theRulesOfTheGameToolStripMenuItem->Name = L"theRulesOfTheGameToolStripMenuItem";
			this->theRulesOfTheGameToolStripMenuItem->Size = System::Drawing::Size(137, 20);
			this->theRulesOfTheGameToolStripMenuItem->Text = L"The Rules of the Game";
			// 
			// rulesToolStripMenuItem
			// 
			this->rulesToolStripMenuItem->Name = L"rulesToolStripMenuItem";
			this->rulesToolStripMenuItem->Size = System::Drawing::Size(180, 22);
			this->rulesToolStripMenuItem->Text = L"Rules";
			this->rulesToolStripMenuItem->Click += gcnew System::EventHandler(this, &MyForm::rulesToolStripMenuItem_Click);
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(529, 261);
			this->Controls->Add(this->menuStrip1);
			this->MainMenuStrip = this->menuStrip1;
			this->Name = L"MyForm";
			this->Text = L"GarciaKingLandauMlengela - BlackJack Game";
			this->menuStrip1->ResumeLayout(false);
			this->menuStrip1->PerformLayout();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void rulesToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
	}
	};
}
