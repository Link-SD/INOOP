#pragma once
#include "Group.h"

class Student {
private:
	std::string _name;
	Group* _class;
public:
	Student(std::string name);
};

