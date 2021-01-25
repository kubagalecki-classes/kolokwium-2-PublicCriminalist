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

class Zielony: public Ogorek
{
public:
    string chrup() override { return chrupZielony();};

class Kiszony : public Ogorek
{
public:
    string chrup() override { return chrupKiszony(); };
};

string jedzOgorek(Ogorek* o)
{
    if (o==dynamic_cast<Zielony*>(o))
        return "Zielony: " + o->chrup();
    else
        return "Kiszony: " + o->chrup();
}