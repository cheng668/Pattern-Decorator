#pragma once
class VisualComponent;
class window
{
public:
	window();
	~window();
	void SetContents(VisualComponent* comp);
};

