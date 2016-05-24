#pragma once
#include "GamePrimitive.h"
class DrawSymbolRealization : public CGamePrimitive
{
public:
	DrawSymbolRealization(COORD aWhere);
	~DrawSymbolRealization();

	virtual void Draw(HANDLE aHWhere)override;
	virtual void OnTime(double a_dt)override;
};

