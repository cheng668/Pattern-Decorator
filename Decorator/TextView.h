#pragma once
#include "VisualComponent.h"
class TextView : public VisualComponent
{
public:
	TextView();
	~TextView();
	virtual void Draw() override;
	virtual void Resize() override;
};

