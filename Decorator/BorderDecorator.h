#pragma once
#include "Decorator.h"
class BorderDecorator :public Decorator
{
public:
	BorderDecorator(VisualComponent*,int borderWidth);
	virtual ~BorderDecorator();
	virtual void Draw() override;
private:
	void DrawBorder(int);
private:
	int _width;
};

