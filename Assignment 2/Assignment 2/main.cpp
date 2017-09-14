#include <iostream>
#include "Person.h"
#include "Student.h";
#include "Teacher.h";
int main() {


	Student* student = new Student("Sandor", 22);
	Teacher* teacher = new Teacher("Edwin", 38);
	Student* student1 = new Student();
	Teacher* teacher2 = new Teacher();

	Person* person = new Person();

	std::cout << student->getName() << " " << student->getAge() << std::endl;
	std::cout << teacher->getName() << " " << teacher->getAge() << std::endl;
	
	std::cout << student1->getName() << " " << student1->getAge() << std::endl;
	std::cout << teacher2->getName() << " " << teacher2->getAge() << std::endl;

	std::cout << person->getName() << " " << person->getAge() << std::endl;


	std::cin.get();

	delete student, teacher, student1, teacher2, person;
	return 0;
}