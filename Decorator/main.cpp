#include "window.h"
#include "BorderDecorator.h"
#include "ScrollDecorator.h"
#include "TextView.h"
#include "Decorator.h"
int main()
{
	window* win = new window;
	BorderDecorator* bor = new BorderDecorator(new ScrollDecorator(new TextView()), 1);
	win->SetContents(bor);
	delete bor;
	delete win;
	system("pause");
	return 0;
}