#pragma once
#include "Person.h"
#include <string>

class Student : public Person {
public:

	int studentNumber;

	Student();
	Student(std::string name);
	Student(std::string name, int age);
	~Student();
};
