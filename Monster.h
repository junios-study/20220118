#pragma once
class Monster
{
public: //캡슐화, 외부 노출
	//상속 : 상속 해주겠다.
	int MP;

private:
	//캡슐화 : 외부 노출 X
	//상속 : 상속 안 해주겠다.
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
	//캡슐화 : 외부 노출 X
	//상속 : 상속 해주겠다.
	int HP;
};

