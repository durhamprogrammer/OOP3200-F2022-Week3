#include <iostream>

#include "Vector2.h"

int main()
{
    Vector2 A = Vector2(10.0f, 20.0f);
    Vector2 B = Vector2(20.0f, 30.0f);
    Vector2 C = Vector2(30.0f, 40.0f);

    std::cout << (A + B).to_string() << std::endl;
    std::cout << (C - A).to_string() << std::endl;
    std::cout << (C * A).to_string() << std::endl;
}
