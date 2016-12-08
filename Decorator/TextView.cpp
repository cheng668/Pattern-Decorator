#include "TextView.h"


TextView::TextView() :VisualComponent()
{

}


TextView::~TextView()
{
	std::cout << "delete textview!" << std::endl;

}

void TextView::Draw()
{
	std::cout << "draw textview!" << std::endl;
}

void TextView::Resize()
{

}