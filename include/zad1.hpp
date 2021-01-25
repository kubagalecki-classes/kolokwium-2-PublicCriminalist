#pragma once

#include "catch.hpp"

#include <ostream>
#include <sstream>
#include <string>

using namespace std;

class Warzywo
{
public:
    Warzywo(const string& n, double c, int k) : nazwa(n), cena(c), kolor(k) { razem++; }
    static unsigned getVeg() { return razem; }
    void opis(ostream& s) const{ s << nazwa << ": " << cena << ", " << kolor<<"\n";}
    string          getname() { return nazwa; }
    ~Warzywo() { razem--; }
    private:
    string nazwa;
    double cena;
    int    kolor;
    static unsigned razem;
};
