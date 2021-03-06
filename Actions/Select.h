#pragma once
#include <vector>
#include "Action.h"
#include "..\GUI\Input.h"
#include "..\GUI\Output.h"
#include "..\Figures\CFigure.h"
#include "..\ApplicationManager.h"


class Select :public Action
{

	Point P;
	ActionType actType;
	Output* pOut ;
	Input* pIn;
	vector<CFigure*>SelectedFigures;
public:
	Select(ApplicationManager *pApp);

	virtual void ReadActionParameters();
	
	//Execute action (code depends on action type)
	virtual void Execute();

	~Select(void);
};



