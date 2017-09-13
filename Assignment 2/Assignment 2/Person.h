#pragma once
#include <string>

class Person {

	private:

public:
	Person();
	Person(std::string name);
	virtual void getPersonName();
};