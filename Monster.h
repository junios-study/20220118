#pragma once
class Monster
{
public: //ĸ��ȭ, �ܺ� ����
	//��� : ��� ���ְڴ�.
	int MP;

private:
	//ĸ��ȭ : �ܺ� ���� X
	//��� : ��� �� ���ְڴ�.
	int Gold;

public:
	void Move();
	void Attack();
	void Run();
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

protected:
	//ĸ��ȭ : �ܺ� ���� X
	//��� : ��� ���ְڴ�.
	int HP;
};

