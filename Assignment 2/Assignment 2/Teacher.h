#pragma once
#include "Person.h"

class Teacher : public Person
{
public:

	int teacherId;

	Teacher();
	Teacher(std::string name);
	Teacher(std::string name, int age);

	~Teacher();
};

