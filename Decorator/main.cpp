#include "window.h"
#include "BorderDecorator.h"
#include "ScrollDecorator.h"
#include "TextView.h"
#include "Decorator.h"
int main()
{
	window* win = new window;
	win->SetContents(new BorderDecorator(new ScrollDecorator(new TextView()),1));
	system("pause");
	return 0;
}