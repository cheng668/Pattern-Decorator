#pragma once
#include "Decorator.h"
class BorderDecorator :public Decorator
{
public:
	BorderDecorator(VisualComponent*,int borderWidth);
	~BorderDecorator();
	virtual void Draw() override;
	virtual void Resize() override;

private:
	void DrawBorder(int);
private:
	int _width;
};

