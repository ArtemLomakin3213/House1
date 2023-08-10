#include "Apartment.h"

Apartment::Apartment() {
	this->square = 30;
	this->count_person = new Human[1];
}

Apartment::Apartment(int square) : Apartment() {
	this->square = square;
}

Apartment::Apartment(int square, int count_person) {
	bol(square, count_person);
}

void Apartment::bol(int square, int count_person)
{
	this->count_person = new Human[count_person];
	for (int i = 0; i < count_person; i++) {
		this->count_person[i].fill_name("Миша", 35, "Антон");
	}
}

Apartment::~Apartment()
{
	for (int i = 0; i < this->count_person_c; i++) {
		this->count_person[i].~Human();
	}
}

