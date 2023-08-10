#include "House.h"

House::House()
{
    a++;
    nameng = a;
    cou = 1;
    apart = new Apartment[cou];
}

House::House(int cou)
{
    this->cou = cou;
    apart = new Apartment[cou];
}


void House::sozdat_dom()
{
    apart[0].bol(60, 2);
}
