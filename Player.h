#pragma once
//encapsulenation
class Player
{
private:
	int HP;
	int MP;
	int Gold;

public:
	//const 함수 젤 앞 반환형
	//const Player* GetPlayer(); // 반환값을 수정하지 마세요.

	//함수 인자에 const가 붙으면 인자값을 함수 안에서 변경하지 않습니다.
	//void strcpy(char* Dest, const char* Source)

	//함수 젤뒤에 const
	//int GetHP() const //이 함수는 멤버변수를 변경하지 않습니다.

	//접근자, accessor
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

