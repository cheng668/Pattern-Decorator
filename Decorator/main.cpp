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
	_CrtDumpMemoryLeaks();
	return 0;
}

/*
output:
	draw textview!
	draw Decorator!
	draw scroll!
	draw Decorator!
	draw Border!
	delete BorderDecorator!
	delete Decorator!
	delete ScrollDecorator!
	delete Decorator!
	delete textview!
	delete virtualComponent!
	delete virtualComponent!
	delete virtualComponent!
*/