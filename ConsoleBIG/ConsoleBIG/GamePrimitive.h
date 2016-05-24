#ifndef  GAME_SETTINGS_W9434897
#define  GAME_SETTINGS_W9434897

class CGamePrimitive
{
protected:
	CGamePrimitive();

public:
	CGamePrimitive(COORD aWhere) :m_where(aWhere){}
	~CGamePrimitive();

	virtual void Draw(HANDLE aHWhere) = 0;
	virtual void OnTime( double a_dt ) = 0;

protected:
	COORD m_where; // √де я нахожусь
	int m_color = 0;
	char m_Symbol = ' ';
};

#endif // GAME_SETTINGS_W9434897
