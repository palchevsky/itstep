// 2016-05-17.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include "Alignment.h"
#include "MrBlack.h"

int _tmain(int argc, _TCHAR* argv[])
{
	//Alignment* arr[500];
	//{
	//Alignment v_myAlignment;

	//v_myAlignment.SayMyName();
	//};

	//{
	//	MrBlack v_myAlignment1;

	//	v_myAlignment1.SayMyName();
	//};


	{
		Alignment v_White;
		MrBlack v_Black;

		Alignment* pAlignment1 = &v_White;
		Alignment* pAlignment2 = &v_Black;

		pAlignment1->SayMyName();
		pAlignment2->SayMyName();

	}



	system("pause");
	return 0;
}

