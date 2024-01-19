#include "class_Vector2D.h"
#include <cmath>

int Vector2D::activeInstances = 0;

Vector2D::Vector2D() : x(0.0f), y(0.0f) {
	activeInstances++;
}

Vector2D::Vector2D(float x, float y) : x(x), y(y) {
	activeInstances++;
}

Vector2D::~Vector2D() {
	activeInstances--;
}

Vector2D& Vector2D::operator=(const Vector2D& other) {
	if (this != &other) {
		x = other.x;
		y = other.y;
	}
	return *this;
}

Vector2D Vector2D::operator+(const Vector2D& secondVector) const {
	return Vector2D(x + secondVector.x, y + secondVector.y);
}

//Vector2D Vector2D::operator-(const Vector2D& secondVector) const {
//	return Vector2D(x - secondVector.x, y - secondVector.y);
//}

float Vector2D::operator()() const {
	return std::sqrt(x * x + y * y);
}

float& Vector2D::operator[](int i) {
	return (i == 0) ? x : y;
}

std::istream& operator>>(std::istream& is, Vector2D& vector) {
	is >> vector.x >> vector.y;
	return is;
}

int Vector2D::getActiveInstances() {
	return activeInstances;
}