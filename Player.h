#pragma once
#include <iostream>

using namespace std;
//encapsulation
class Player
{
private:
	int HP;
	int MP;
	int Gold;

public:
	Player() //�⺻ ������(constructor)
	{
		cout << "�÷��̾� ����" << endl;
	}

	~Player() //�Ҹ���, �ı���(destructor)
	{
		cout << "�÷��̾� �����" << endl;
	}

	//const �Լ� �� �� ��ȯ��
	//const Player* GetPlayer(); // ��ȯ���� �������� ������.

	//�Լ� ���ڿ� const�� ������ ���ڰ��� �Լ� �ȿ��� �������� �ʽ��ϴ�.
	//void strcpy(char* Dest, const char* Source)

	//�Լ� ���ڿ� const
	//int GetHP() const //�� �Լ��� ��������� �������� �ʽ��ϴ�.

	//������, accessor
	void SetHP(int NewHP)
	{
		if (NewHP >= 0)
		{
			HP = NewHP;
		}
	}

	int GetHP() const
	{
		return HP;
	}

	void Collect();
	void Move();
	void Attack();
	void Run();
};

