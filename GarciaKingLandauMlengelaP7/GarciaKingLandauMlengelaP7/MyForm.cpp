/*************************************************************************
* Program: BlackJack Game
* Programmer: Daudi Mlengela(dmlengela@cnm.edu), Carrah King(), Garcia ()
* and Mayer Landau(mlandau@cnm.edu), 
* Date: November 7th 2022
* Purpose: To create a BlackJack Game for players
*************************************************************************/

#include "MyForm.h"


using namespace System;
using namespace System::Windows::Forms;


[STAThread]
void Main()
{
	Application::EnableVisualStyles();
	Application::SetCompatibleTextRenderingDefault(false);

	GarciaKingLandauMlengelaP7::MyForm form;
	Application::Run(% form);
}


