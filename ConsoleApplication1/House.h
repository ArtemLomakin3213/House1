#include "Apartment.h"
#pragma once


class House {
private:
    Apartment* apart;
    int nameng;
    int cou;
    static int a;
public:
    House();

    House(int cou);

    House(int cou) : House() { };

    void sozdat_dom();

};

