#include "MyForm.h"
#include<Windows.h>
#include <msclr/marshal_cppstd.h> // Required for marshal_as
#include <string>                 // Required for std::string
#include <fstream>                // Required for file operations


using namespace Project1;
using namespace System::Windows::Forms;

[STAThreadAttribute]
void main(array<String^>^ args) {
    Application::EnableVisualStyles();
    Application::SetCompatibleTextRenderingDefault(false);

    Project1::MyForm form;
    Application::Run(% form);
} 
