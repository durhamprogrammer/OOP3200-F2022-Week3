#include "Person.h"

#include <iostream>

Person::Person()
{
	// initialization
	m_name = "";
	m_age = 0;
}

Person::Person(std::string name, const int age): m_name(std::move(name)), m_age(age)
{
}

Person::~Person()
= default;

std::string Person::GetName()
{
	return m_name;
}

void Person::SetName(const std::string& name)
{
	m_name = name;
}

int Person::GetAge() const
{
	return m_age;
}

void Person::SetAge(const int age)
{
	m_age = age;
}

void Person::SaysHello() const
{
	std::cout << m_name << " says Hello!" << std::endl;
}
