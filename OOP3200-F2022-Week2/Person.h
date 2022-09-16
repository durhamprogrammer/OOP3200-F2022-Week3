#pragma once
#ifndef __PERSON__
#define __PERSON__

#include <string>

// Person Interface 
class Person
{
public:
	// empty constructor - default constructor
	Person();

	// parameterized constructor
	Person(std::string name, int age);

	// destructor
	~Person();

	// Getters (Accessors) & Setters (Mutators)
	std::string GetName();
	void SetName(const std::string& name);

	int GetAge() const;
	void SetAge(int age);

	// public methods
	void SaysHello() const;

private:
	// private data members (fields) / instance variables
	std::string m_name;
	int m_age;
};

#endif /* defined (__PERSON__) */

