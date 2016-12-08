#include "ScrollDecorator.h"
#include "Decorator.h"

ScrollDecorator::ScrollDecorator(VisualComponent* comp) :Decorator(comp)
{
}


ScrollDecorator::~ScrollDecorator()
{
	std::cout << "delete ScrollDecorator!" << std::endl;

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
