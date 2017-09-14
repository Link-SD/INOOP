#pragma once
#include <string>

class Person {

	protected:
		std::string name;
		int age;


public:
	Person();
	Person(std::string name);
	Person(std::string name, int age);
	std::string getName() const;
	int getAge() const;
};