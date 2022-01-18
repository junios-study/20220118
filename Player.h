#pragma once
//encapsulenation
class Player
{
private:
	int HP;
public:
	int MP;
	int Gold;

public:
	//Á¢±ÙÀÚ, accessor
	void SetHP(int NewHP)
	{
		if (NewHP >= 0)
		{
			HP = NewHP;
		}
	}

	const int GetHP() const
	{
		return HP;
	}

	void Collect();
	void Move();
	void Attack();
	void Run();
};

