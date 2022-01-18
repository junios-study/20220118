#pragma once
class Image
{
public:
	Image() {}
	~Image() {}
	Image(int NewX, int NewY, int NewR, int NewG, int NewB)
	{
		X = NewX;
		Y = NewY;
		R = NewR;
		G = NewG;
		B = NewB;
	}

	int X;
	int Y;
	int R;
	int G;
	int B;
};

