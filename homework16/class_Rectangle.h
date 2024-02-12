#pragma once
class Rectangle {
private:
	float length = 0.0f;
	float height = 0.0f;

public:
	float getArea();
	float getPerimeter();

	Rectangle() : length(0.0f), height(0.0f){}

	Rectangle(float l, float h) : length(l), height(h){}
};