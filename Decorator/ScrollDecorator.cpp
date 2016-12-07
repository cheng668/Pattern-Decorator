#include "ScrollDecorator.h"
#include "Decorator.h"

ScrollDecorator::ScrollDecorator(VisualComponent* comp) :Decorator(comp)
{
}


ScrollDecorator::~ScrollDecorator()
{
}

void ScrollDecorator::Draw()
{
	Decorator::Draw();
	DrawScroll();
}

void ScrollDecorator::DrawScroll()
{
	std::cout << "draw scroll!" << std::endl;
}

void ScrollDecorator::Resize()
{

}