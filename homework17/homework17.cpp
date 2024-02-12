#include <iostream>
#include "class_Vector2D.h"

int main()
{
    Vector2D v1(2.0f, 4.0f);
    Vector2D v2(1.0f, 2.0f);
    Vector2D testVec(1.2f, 5.6f);

    Vector2D sum = v1 + v2;
    Vector2D diff = v1 - v2;

    std::cout << "v1 + v2 = (" << sum() << ")" << std::endl;
    std::cout << "v1 - v2 = (" << diff() << ")" << std::endl;

    std::cout << testVec << std::endl;
    std::cin >> testVec;
    std::cout << testVec << std::endl;

    std::cout << "Instance count: " << Vector2D::getActiveInstances() << std::endl;

    return 0;
}