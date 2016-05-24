#include "stdafx.h"
#include "DrawSymbolRealization.h"


DrawSymbolRealization::DrawSymbolRealization(COORD aWhere) :CGamePrimitive(aWhere)
{
}


DrawSymbolRealization::~DrawSymbolRealization()
{
}

void DrawSymbolRealization::Draw(HANDLE aHWhere)
{
	CHAR_INFO v_toDraw; // что рисуем
	v_toDraw.Char.UnicodeChar = 0;
	v_toDraw.Char.AsciiChar = '*';
	v_toDraw.Attributes = FOREGROUND_BLUE | BACKGROUND_RED;
	COORD dwBufferSize;
	dwBufferSize.X = 1;
	dwBufferSize.Y = 1;
	COORD dwBufferCoord;
	dwBufferCoord.X = 0;
	dwBufferCoord.Y = 0;
	SMALL_RECT v_WriteRegion;
	v_WriteRegion.Left = m_where.X;
	v_WriteRegion.Top = m_where.Y;
	v_WriteRegion.Right = m_where.X + 1;
	v_WriteRegion.Bottom = m_where.Y + 1;


	WriteConsoleOutput(aHWhere,
		&v_toDraw,
		dwBufferSize,
		dwBufferCoord,
		&v_WriteRegion
		);
}
void DrawSymbolRealization::OnTime(double a_dt)
{
}

