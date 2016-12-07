#include "BorderDecorator.h"
#include "Decorator.h"

BorderDecorator::BorderDecorator(VisualComponent* comp, int borderWidth) :Decorator(comp), _width(borderWidth)
{
}


BorderDecorator::~BorderDecorator()
{
}

void BorderDecorator::Draw()
{
	Decorator::Draw();
	DrawBorder(_width);
}

void BorderDecorator::DrawBorder(int width)
{
	std::cout << "draw Border!" << std::endl;

}

void BorderDecorator::Resize()
{

}