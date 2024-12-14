#include "derived.h"


int main()
{
	  Circle circle("Circle", 5.0);
    Rectangle rectangle("Rectangle", 6.0, 4.0);
    Triangle triangle("Triangle", 4.0, 3.0);
    Square square("Square", 5.0);

    Shape* shapes[] = { &circle, &rectangle, &triangle, &square };

    for (int i = 0; i < 4; i++) {
        shapes[i]->draw();
    }

	return 0;
}