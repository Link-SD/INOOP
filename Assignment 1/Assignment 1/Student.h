#pragma once
#include "Class.h"

class Student {
private:
	std::string _name;
	Class* _class;
public:
	Student(std::string name);
};

