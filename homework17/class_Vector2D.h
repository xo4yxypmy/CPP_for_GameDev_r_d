#pragma once
#include <iostream>

class Vector2D {
public:
	float x;
	float y;
	
	Vector2D();

	Vector2D(float x, float y);

	~Vector2D();

	Vector2D& operator=(const Vector2D& other);
	
	Vector2D operator+(const Vector2D& secondVector) const;
	//Vector2D operator-(const Vector2D& secondVector) const;

	//friend Vector2D operator+(const Vector2D& leftVector, const Vector2D& rightVector) {
	//	return Vector2D(leftVector.x + rightVector.x, leftVector.y + rightVector.y);
	//}
	friend Vector2D operator-(const Vector2D& leftVector, const Vector2D& rightVector) {
		return Vector2D(leftVector.x - rightVector.x, leftVector.y - rightVector.y);
	}
	
	float operator()() const;

	float& operator[](int i);

	friend std::ostream& operator<<(std::ostream& os, const Vector2D& vector) {
		os << "{" << vector.x << "; " << vector.y << "}";  // left here because have problem with "Function definition not found"  
		return os;
	}
	friend std::istream& operator>>(std::istream& is, Vector2D& vector);

	static int getActiveInstances();

private:
	static int activeInstances;
};