#include "Teacher.h"



Teacher::Teacher(): Person("Unnamed Teacher") 
{	
}

Teacher::Teacher(std::string name) : Person(name)
{
}

Teacher::Teacher(std::string name, int age) : Person(name, age)
{
}


Teacher::~Teacher()
{
}
