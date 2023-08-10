#include "Human.h"

#pragma once

class Apartment {
private:
    int square;
    Human* count_person;
    int count_person_c;
public:
    Apartment();

    Apartment(int square);

    Apartment(int square, int count_person) : Apartment(square) { };

    void bol(int ploshad, int count_person);

    ~Apartment();

};



