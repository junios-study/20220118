#pragma once
#include <string>

class Transition
{
public:
	Transition() {}
	Transition(int NewCurrentState, std::string NewCondition, int NewNextState)
	{
		CurrentState = NewCurrentState;
		Condition = NewCondition;
		NextState = NewNextState;
	}
	~Transition() {}

	int CurrentState;
	std::string Condition;
	int NextState;
};

