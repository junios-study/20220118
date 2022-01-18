#include <iostream>
#include "Transition.h"
#include "State.h"
#include <vector>

using namespace std;

int main()
{
	vector<State*> StateList;
	StateList.push_back(new State(1, "��ȸ"));
	StateList.push_back(new State(2, "�߰�"));
	StateList.push_back(new State(3, "����"));
	StateList.push_back(new State(4, "����"));

	vector<Transition*> TransitionList;
	TransitionList.push_back(new Transition(1, "���߰�", 2));
	TransitionList.push_back(new Transition(2, "����ħ", 1));
	TransitionList.push_back(new Transition(2, "�����Ÿ�����", 3));
	TransitionList.push_back(new Transition(3, "�����Ÿ���Ż", 2));
	TransitionList.push_back(new Transition(3, "HP����", 4));

	int MonsterCurrentState = 2; //�߰�
	string MonsterCondition = "����ħ";
	int MonsterNextState = 0;

	for (size_t i = 0; i < TransitionList.size(); ++i)
	{
		if (TransitionList[i]->Condition == MonsterCondition &&
			TransitionList[i]->CurrentState == MonsterCurrentState)
		{
			MonsterNextState = TransitionList[i]->NextState;
		}
	}

	for (size_t i = 0; i < StateList.size(); ++i)
	{
		if (StateList[i]->ID == MonsterNextState)
		{
			cout << StateList[i]->StateName << endl;
		}
	}



	return 0;
}