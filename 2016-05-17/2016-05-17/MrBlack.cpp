#include "stdafx.h"
#include "Alignment.h"
#include "MrBlack.h"

using std::cout;
using std::endl;

MrBlack::MrBlack()
{
}


MrBlack::~MrBlack()
{
}

void MrBlack::SayMyName()
{
	cout << "Mr. Black!" << endl;
	Alignment::SayMyName();
}

