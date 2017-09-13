#pragma once
#include <vector>
#include "Student.h"
class Student;

class Group {
private:
	std::string _name;
	std::vector<Student*> _students;
public:
	Group(std::string name);
};

