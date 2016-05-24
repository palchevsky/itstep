#include "stdafx.h"
//#include <iostream>
#include "Alignment.h"
using std::cout;
using std::endl;

Alignment::Alignment()
{
	cout << "Hello, world!"<<endl;
}


Alignment::~Alignment()
{
	cout << "Goodbye, world!" << endl;
}

void Alignment::SayMyName()
{
	this->m_a=8;
	cout << "Mr. White!" << endl;
}