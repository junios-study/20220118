#pragma once
class Player
{
public:
	int HP;
	int MP;
	int Gold;

	void Collect();
	void Move();
	void Attack();
	void Run();
};

