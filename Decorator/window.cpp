#include "window.h"
#include "VisualComponent.h"

window::window()
{
}


window::~window()
{
}

void window::SetContents(VisualComponent* comp)
{
	comp->Draw();
}
