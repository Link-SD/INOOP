#pragma once
#include <vector>
#include "Student.h"
class Class {
private:
	std::string _name;
	std::vector<Student*> _students;
public:
	Class(std::string name);
};

