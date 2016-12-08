#pragma once
#include "iostream"
class VisualComponent{
public:
	VisualComponent(){}
	virtual ~VisualComponent(){ std::cout << "delete virtualComponent!" << std::endl; }
	virtual void Draw() = 0;
	virtual void Resize() = 0;
	//...
};