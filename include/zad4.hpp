#include "zad1.hpp"

#include <exception>
#include <iostream>
#include <vector>

void jedzOstatnieWarzywa(vector<Warzywo> v, unsigned n, ostream& o)
{
    if (n >= v.size())
        throw logic_error{"blad"};
    for (auto e = v.rbegin()+1; e != v.rbegin()+n+1; ++e) {
        e->opis(o);
        }
}
