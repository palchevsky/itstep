#include "stdafx.h"
#include "MrBlack.h"



MrBlack::MrBlack()
{
}


MrBlack::~MrBlack()
{
}

using std::endl;
using std::cout;
void MrBlack::SayMyName()
{
	cout << "Mr. Black!" << endl;
	Allignment::SayMyName();
}


