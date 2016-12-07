#include "Decorator.h"


Decorator::Decorator(VisualComponent* comp) :VisualComponent() , _component(comp)
{
}


Decorator::~Decorator()
{
}

void Decorator::Draw()
{
	_component->Draw();
	std::cout << "draw Decorator!"<<std::endl;

}

void Decorator::Resize()
{
	_component->Resize();
}