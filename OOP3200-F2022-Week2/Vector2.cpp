#include "Vector2.h"

#include <sstream>
#include <iomanip>

Vector2::Vector2()
{
	Set(0.0f, 0.0f);
}

Vector2::Vector2(const float value)
{
	Set(value, value);
}

Vector2::Vector2(float x, float y)
{
	Set(x, y);
}

Vector2::~Vector2()
= default;

Vector2& Vector2::operator=(const Vector2& rhs)
{
	Set(rhs.GetX(), rhs.GetY());
	return *this;
}

Vector2 Vector2::operator+(const Vector2& rhs) const
{
	Vector2 temp;
	temp.Set(GetX() + rhs.GetX(), GetY() + rhs.GetY());
	return temp;
}

Vector2 Vector2::operator-(const Vector2& rhs) const
{
	Vector2 temp;
	temp.Set(GetX() - rhs.GetX(), GetY() - rhs.GetY());
	return temp;
}

Vector2 Vector2::operator*(const Vector2& rhs) const
{
	Vector2 temp;
	temp.Set(GetX() * rhs.GetX(), GetY() * rhs.GetY());
	return temp;
}

std::string Vector2::to_string() const
{
	std::stringstream stream;
	stream << std::fixed << std::setprecision(2) << "(" << GetX() << ", " << GetY() << ")" << std::endl;
	return stream.str();
}

float Vector2::GetX() const
{
	return m_x;
}

float Vector2::GetY() const
{
	return m_y;
}

void Vector2::SetX(const float x)
{
	m_x = x;
}

void Vector2::SetY(const float y)
{
	m_y = y;
}

void Vector2::Set(const float x, const float y)
{
	SetX(x);
	SetY(y);
}
