#pragma once
#include <string>
#include "Teacher.h"
class Subject {
private:
	std::string _name;
	Teacher* teacher;
public:
	Subject(std::string name);
};

