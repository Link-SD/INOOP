#include "Student.h"

Student::Student() : Person("Unnamed Student")
{
}

Student::Student(std::string name) : Person(name)
{
}

Student::Student(std::string name, int age) : Person(name, age)
{
}

Student::~Student() {}
