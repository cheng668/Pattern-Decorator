#pragma once
#include "iostream"
class VisualComponent{
public:
	VisualComponent(){};
	virtual void Draw() = 0;
	virtual void Resize() = 0;
	//...
};