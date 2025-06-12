#pragma once
#include <string>
#include <fstream>
#include <sstream>
#include <iostream>
#include <msclr/marshal_cppstd.h> // Required for marshal_as

// Required for std::string
namespace Project1 {

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
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::TextBox^ textBox1;
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::TextBox^ textBox2;
	private: System::Windows::Forms::TextBox^ textBox3;
	private: System::Windows::Forms::TextBox^ textBox4;
	private: System::Windows::Forms::Label^ label5;
	private: System::Windows::Forms::TextBox^ textBox5;


	private: System::Windows::Forms::Button^ button3;
	private: System::Windows::Forms::Button^ button1;

	private: System::Windows::Forms::Button^ button2;
	private: System::Windows::Forms::Button^ button4;
	private: System::Windows::Forms::Button^ button5;



	protected:

	private:
		/// <summary>
		/// Required designer variable.
		/// </summary>
		System::ComponentModel::Container^ components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Required method for Designer support - do not modify
		/// the contents of this method with the code editor.
		/// </summary>
		void InitializeComponent(void)
		{
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->textBox2 = (gcnew System::Windows::Forms::TextBox());
			this->textBox3 = (gcnew System::Windows::Forms::TextBox());
			this->textBox4 = (gcnew System::Windows::Forms::TextBox());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->textBox5 = (gcnew System::Windows::Forms::TextBox());
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->button4 = (gcnew System::Windows::Forms::Button());
			this->button5 = (gcnew System::Windows::Forms::Button());
			this->SuspendLayout();
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Font = (gcnew System::Drawing::Font(L"Modern No. 20", 18, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label2->Location = System::Drawing::Point(76, 65);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(220, 37);
			this->label2->TabIndex = 1;
			this->label2->Text = L"Student Name";
			this->label2->Click += gcnew System::EventHandler(this, &MyForm::label2_Click);
			// 
			// textBox1
			// 
			this->textBox1->Location = System::Drawing::Point(373, 72);
			this->textBox1->Multiline = true;
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(256, 30);
			this->textBox1->TabIndex = 2;
			this->textBox1->TextChanged += gcnew System::EventHandler(this, &MyForm::textBox1_TextChanged);
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Modern No. 20", 18, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->Location = System::Drawing::Point(76, 201);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(207, 37);
			this->label1->TabIndex = 3;
			this->label1->Text = L"Father Name";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Font = (gcnew System::Drawing::Font(L"Modern No. 20", 18, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label3->Location = System::Drawing::Point(76, 265);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(147, 37);
			this->label3->TabIndex = 4;
			this->label3->Text = L"Roll No :";
			this->label3->Click += gcnew System::EventHandler(this, &MyForm::label3_Click);
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Font = (gcnew System::Drawing::Font(L"Modern No. 20", 18, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label4->Location = System::Drawing::Point(76, 138);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(212, 37);
			this->label4->TabIndex = 5;
			this->label4->Text = L"Student Caste";
			// 
			// textBox2
			// 
			this->textBox2->Location = System::Drawing::Point(373, 138);
			this->textBox2->Multiline = true;
			this->textBox2->Name = L"textBox2";
			this->textBox2->Size = System::Drawing::Size(256, 30);
			this->textBox2->TabIndex = 6;
			// 
			// textBox3
			// 
			this->textBox3->Location = System::Drawing::Point(373, 201);
			this->textBox3->Multiline = true;
			this->textBox3->Name = L"textBox3";
			this->textBox3->Size = System::Drawing::Size(256, 30);
			this->textBox3->TabIndex = 7;
			this->textBox3->TextChanged += gcnew System::EventHandler(this, &MyForm::textBox3_TextChanged);
			// 
			// textBox4
			// 
			this->textBox4->Location = System::Drawing::Point(373, 265);
			this->textBox4->Multiline = true;
			this->textBox4->Name = L"textBox4";
			this->textBox4->Size = System::Drawing::Size(256, 30);
			this->textBox4->TabIndex = 8;
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Font = (gcnew System::Drawing::Font(L"Modern No. 20", 18, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label5->Location = System::Drawing::Point(76, 330);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(209, 37);
			this->label5->TabIndex = 9;
			this->label5->Text = L"Student GPA";
			this->label5->Click += gcnew System::EventHandler(this, &MyForm::label5_Click);
			// 
			// textBox5
			// 
			this->textBox5->Location = System::Drawing::Point(373, 337);
			this->textBox5->Multiline = true;
			this->textBox5->Name = L"textBox5";
			this->textBox5->Size = System::Drawing::Size(256, 30);
			this->textBox5->TabIndex = 10;
			this->textBox5->TextChanged += gcnew System::EventHandler(this, &MyForm::textBox5_TextChanged);
			// 
			// button3
			// 
			this->button3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button3->Location = System::Drawing::Point(265, 424);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(100, 45);
			this->button3->TabIndex = 13;
			this->button3->Text = L"Update";
			this->button3->UseVisualStyleBackColor = true;
			this->button3->Click += gcnew System::EventHandler(this, &MyForm::button3_Click);
			// 
			// button1
			// 
			this->button1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button1->Location = System::Drawing::Point(83, 424);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(100, 45);
			this->button1->TabIndex = 14;
			this->button1->Text = L"Add";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &MyForm::button1_Click_1);
			// 
			// button2
			// 
			this->button2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 16, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button2->Location = System::Drawing::Point(808, 57);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(174, 45);
			this->button2->TabIndex = 16;
			this->button2->Text = L"Next";
			this->button2->UseVisualStyleBackColor = true;
			this->button2->Click += gcnew System::EventHandler(this, &MyForm::button2_Click);
			this->button2->MouseClick += gcnew System::Windows::Forms::MouseEventHandler(this, &MyForm::button2_MouseClick);
			// 
			// button4
			// 
			this->button4->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button4->Location = System::Drawing::Point(443, 424);
			this->button4->Name = L"button4";
			this->button4->Size = System::Drawing::Size(100, 45);
			this->button4->TabIndex = 15;
			this->button4->Text = L"Delete";
			this->button4->UseVisualStyleBackColor = true;
			this->button4->Click += gcnew System::EventHandler(this, &MyForm::button4_Click);
			// 
			// button5
			// 
			this->button5->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 16, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button5->Location = System::Drawing::Point(635, 57);
			this->button5->Name = L"button5";
			this->button5->Size = System::Drawing::Size(167, 45);
			this->button5->TabIndex = 17;
			this->button5->Text = L"Previous";
			this->button5->UseVisualStyleBackColor = true;
			this->button5->Click += gcnew System::EventHandler(this, &MyForm::button5_Click);
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(9, 20);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::SystemColors::ScrollBar;
			this->ClientSize = System::Drawing::Size(997, 525);
			this->Controls->Add(this->button5);
			this->Controls->Add(this->button4);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->button3);
			this->Controls->Add(this->textBox5);
			this->Controls->Add(this->label5);
			this->Controls->Add(this->textBox4);
			this->Controls->Add(this->textBox3);
			this->Controls->Add(this->textBox2);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->textBox1);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->button2);
			this->Name = L"MyForm";
			this->Text = L" Student Record";
			this->Load += gcnew System::EventHandler(this, &MyForm::MyForm_Load);
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void MyForm_Load(System::Object^ sender, System::EventArgs^ e) {
		// Initially enable only the Add button
		button1->Enabled = true;  // Add button
		button2->Enabled = false; // Next button
		button3->Enabled = false; // Update button
		button4->Enabled = false; // Delete button
		button5->Enabled = false; // previous button
	}
	private: System::Void label2_Click(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void textBox1_TextChanged(System::Object^ sender, System::EventArgs^ e) {

	}
	private: System::Void textBox3_TextChanged(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void label3_Click(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void label5_Click(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {

	}
	private: System::Void button1_Click_1(System::Object^ sender, System::EventArgs^ e) {
		// Collect data from text fields
		std::string studentName = msclr::interop::marshal_as<std::string>(textBox1->Text);
		std::string rollNo = msclr::interop::marshal_as<std::string>(textBox4->Text);
		std::string fatherName = msclr::interop::marshal_as<std::string>(textBox3->Text);
		std::string caste = msclr::interop::marshal_as<std::string>(textBox2->Text);
		std::string gpa = msclr::interop::marshal_as<std::string>(textBox5->Text);

		// Find the next available ID by reading the last line of the file
		int nextID = 1; // Default to 1 if the file is empty
		std::ifstream inputFile("students.txt");
		std::string lastLine;

		while (std::getline(inputFile, lastLine)) {
			// Read through the file to find the last line
		}
		inputFile.close();

		if (!lastLine.empty()) {
			// Extract the ID from the last line
			std::istringstream ss(lastLine);
			std::string id;
			std::getline(ss, id, ','); // Extract the first field (ID)
			nextID = std::stoi(id) + 1; // Increment the ID
		}

		// Open the file to append the new record
		std::ofstream file("students.txt", std::ios::app);
		if (file.is_open()) {
			file << nextID << "," << studentName << "," << rollNo << "," << fatherName << "," << caste << "," << gpa << std::endl;
			file.close();
		}

		// Disable the Add button and enable Next button
		button1->Enabled = false;  // Add button
		button2->Enabled = true;   // Next button
		button3->Enabled = false;  // Update button
		button4->Enabled = false;  // Delete button
		button5->Enabled = false;  // Add button

		MessageBox::Show("Record added successfully!");
	}

	private: System::Void button3_Click(System::Object^ sender, System::EventArgs^ e) {
		// Retrieve data from text fields
		std::string updatedName = msclr::interop::marshal_as<std::string>(textBox1->Text);
		std::string updatedRollNo = msclr::interop::marshal_as<std::string>(textBox4->Text);
		std::string updatedFatherName = msclr::interop::marshal_as<std::string>(textBox3->Text);
		std::string updatedCaste = msclr::interop::marshal_as<std::string>(textBox2->Text);
		std::string updatedGPA = msclr::interop::marshal_as<std::string>(textBox5->Text);

		std::ifstream inputFile("students.txt");
		std::ofstream tempFile("temp.txt"); // Temporary file to hold updated data

		bool recordFound = false;
		std::string line;

		// Read each line from the original file
		while (std::getline(inputFile, line)) {
			std::stringstream ss(line);
			std::string id, name, rollNo, fatherName, caste, gpa;

			// Parse the current line
			std::getline(ss, id, ',');
			std::getline(ss, name, ',');
			std::getline(ss, rollNo, ',');
			std::getline(ss, fatherName, ',');
			std::getline(ss, caste, ',');
			std::getline(ss, gpa, ',');

			// Check if this is the record to update based on Roll Number
			if (rollNo == updatedRollNo) {
				// Write updated data to temp file (replace old record)
				tempFile << id << "," << updatedName << "," << updatedRollNo << ","
					<< updatedFatherName << "," << updatedCaste << "," << updatedGPA << std::endl;
				recordFound = true;
			}
			else {
				// Write the original line to the temp file
				tempFile << line << std::endl;
			}
		}

		inputFile.close();
		tempFile.close();

		// Replace the original file with the temp file
		remove("students.txt");
		rename("temp.txt", "students.txt");

		// Show a message indicating the result
		if (recordFound) {
			MessageBox::Show("Record updated successfully!");
		}
		else {
			MessageBox::Show("Record not found.");
		}

		// Reset buttons state
		button1->Enabled = false;   // Add button disabled
		button2->Enabled = true;    // Next button enabled
		button3->Enabled = false;   // Update button disabled
		button4->Enabled = false;   // Delete button disabled
		button5->Enabled = true;    // Next button enabled
	}



	private: System::Void button4_Click(System::Object^ sender, System::EventArgs^ e) {
		// Delete button clicked
		std::string rollNo = msclr::interop::marshal_as<std::string>(textBox4->Text);
		bool recordFound = false;

		// Temporary storage for updated records
		std::ifstream file("students.txt");
		std::ofstream tempFile("temp.txt");
		std::string line;

		if (file.is_open() && tempFile.is_open()) {
			while (std::getline(file, line)) {
				std::stringstream ss(line);
				std::string id, name, fileRollNo, fatherName, caste, gpa;

				// Parse the current line
				std::getline(ss, id, ',');
				std::getline(ss, name, ',');
				std::getline(ss, fileRollNo, ',');
				std::getline(ss, fatherName, ',');
				std::getline(ss, caste, ',');
				std::getline(ss, gpa, ',');

				// If the roll number matches, we skip writing this record to the temp file
				if (fileRollNo != rollNo) {
					tempFile << line << std::endl;
				}
				else {
					recordFound = true; // Flag to indicate that we found the record to delete
				}
			}

			file.close();
			tempFile.close();

			if (recordFound) {
				// Replace original file with the temp file
				remove("students.txt");
				rename("temp.txt", "students.txt");
				MessageBox::Show("Record deleted successfully!");
			}
			else {
				MessageBox::Show("Record not found.");
			}

			// Reset the UI buttons
			button1->Enabled = false;  // Add button disabled
			button2->Enabled = true;   // Next button enabled
			button3->Enabled = false;  // Update button disabled
			button4->Enabled = false;  // Delete button disabled
			button5->Enabled = true;   // Previous button enabled
		}
	}
	private: System::Void button2_Click(System::Object^ sender, System::EventArgs^ e) {
		static int currentRecordIndex = 0; // Track the current record index
		std::ifstream file("students.txt");
		std::string line;
		int index = 0;

		// Search for the next record
		while (std::getline(file, line)) {
			if (index++ == currentRecordIndex) {
				std::stringstream ss(line);
				std::string id, name, rollNo, fatherName, caste, gpa;

				// Read data from the line
				std::getline(ss, id, ',');
				std::getline(ss, name, ',');
				std::getline(ss, rollNo, ',');
				std::getline(ss, fatherName, ',');
				std::getline(ss, caste, ',');
				std::getline(ss, gpa, ',');

				// Set text fields with student data
				textBox1->Text = gcnew String(name.c_str());
				textBox4->Text = gcnew String(rollNo.c_str());
				textBox3->Text = gcnew String(fatherName.c_str());
				textBox2->Text = gcnew String(caste.c_str());
				textBox5->Text = gcnew String(gpa.c_str());

				// Enable/Disable buttons as required
				button1->Enabled = false;  // Add button disabled
				button2->Enabled = true;   // Next button enabled
				button3->Enabled = true;   // Update button enabled
				button4->Enabled = true;   // Delete button enabled
				button5->Enabled = true;   // Next button enabled

				currentRecordIndex++;
				break;
			}
		}

		// Check if end of file is reached
		if (file.eof()) {
			MessageBox::Show("No more records found.");
			file.clear(); // Reset the file state for future reads
		}
		file.close();
	}

	private: System::Void textBox5_TextChanged(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void label6_Click(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void button2_MouseClick(System::Object^ sender, System::Windows::Forms::MouseEventArgs^ e) {



	}

	private: System::Void button5_Click(System::Object^ sender, System::EventArgs^ e) {
		static int currentRecordIndex = 0; // Track the current record index
		std::ifstream file("students.txt");
		std::string line;
		int index = 0;

		// Search for the next record
		while (std::getline(file, line)) {
			if (index-- == currentRecordIndex) {
				std::stringstream ss(line);
				std::string id, name, rollNo, fatherName, caste, gpa;

				// Read data from the line
				std::getline(ss, id, ',');
				std::getline(ss, name, ',');
				std::getline(ss, rollNo, ',');
				std::getline(ss, fatherName, ',');
				std::getline(ss, caste, ',');
				std::getline(ss, gpa, ',');

				// Set text fields with student data
				textBox1->Text = gcnew String(name.c_str());
				textBox4->Text = gcnew String(rollNo.c_str());
				textBox3->Text = gcnew String(fatherName.c_str());
				textBox2->Text = gcnew String(caste.c_str());
				textBox5->Text = gcnew String(gpa.c_str());

				// Enable/Disable buttons as required
				button1->Enabled = false;  // Add button disabled
				button2->Enabled = true;   // Next button enabled
				button3->Enabled = true;   // Update button enabled
				button4->Enabled = true;   // Delete button enable
				button5->Enabled = true;   // previous button enable


				currentRecordIndex--;
				break;
			}

		}
		file.close();
	}


	};
}
