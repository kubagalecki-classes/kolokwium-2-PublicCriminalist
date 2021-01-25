#pragma once

#include "catch.hpp"
#include "chrup.hpp"

#include <typeinfo>

using namespace std;

class Ogorek
{
public:
    virtual string chrup() = 0;
};

class Zielony : public Ogorek
{
public:
    string chrup() override { return chrupZielony(); };
};

class Kiszony : public Ogorek
{
public:
    string chrup() override { return chrupKiszony(); };
};

string jedzOgorek(Ogorek* o)
{
    const type_info& type_info = typeid(*o);
    if (type_info==typeid(Zielony)) return "Zielony: " + o->chrup();
    else return "Kiszony: " + o->chrup();
}