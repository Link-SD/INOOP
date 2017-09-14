#include "Person.h"

Person::Person() : name("Unnamed Person"), age(-1)
{
}

Person::Person(std::string name) : name(name), age(-1)
{
}

Person::Person(std::string name, int age) : name(name), age(age)
{
}

std::string Person::getName() const
{
	return name;
}

int Person::getAge() const
{
	return age;
}
