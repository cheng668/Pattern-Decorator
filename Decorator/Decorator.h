#pragma once
#include "VisualComponent.h"
class Decorator :public VisualComponent
{
public:
	Decorator(VisualComponent*);
	virtual ~Decorator();
	virtual void Draw();
	virtual void Resize();
	//...
private:
	VisualComponent* _component;
};

