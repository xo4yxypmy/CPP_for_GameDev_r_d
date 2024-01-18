#include "class_Rectangle.h"

float Rectangle::getArea() {
	return length * height;
}

float Rectangle::getPerimeter() {
	return 2 * (length + height);
}