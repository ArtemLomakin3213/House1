#include "Human.h"

Human::Human() {
	this->fio = "";
	this->age = 0;
	this->documents = "";
}

Human::Human(std::string fio, int age, std::string documents) {
	this->fio = fio;
	this->age = age;
	this->documents = documents;
}

Human::Human(Human& other) {
	copy_info(other);
}

void Human::fill_name(std::string fio, int age, std::string documents) {
	this->fio = fio;
	this->age = age;
	this->documents = documents;
}

void Human::copy_info(const Human& other) {
	this->fio = other.fio;
	this->age = other.age;
	this->documents = other.documents;
}

void Human::print() {
	std::cout << "ФИО: " << fio << std::endl;
	std::cout << "Возраст: " << age << std::endl;
	std::cout << "Документ: " << documents << std::endl;
}

Human Human::operator=(const Human& other)
{
	copy_info(other);
}


