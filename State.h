#pragma once
#include <string>

class State
{
public:
	State()
	{

	}

	State(int NewID, std::string NewStateName)
	{
		ID = NewID;
		StateName = NewStateName;
	}

	~State()
	{

	}

	int ID;
	std::string StateName;
};

