#include "Decorator.h"


Decorator::Decorator(VisualComponent* comp) :VisualComponent() , _component(comp)
{
}


Decorator::~Decorator()
{
	if (_component)
	{
		std::cout << "delete Decorator!" << std::endl;

		delete _component;
	}
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