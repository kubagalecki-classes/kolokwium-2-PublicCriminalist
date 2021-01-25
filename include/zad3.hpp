#pragma once

#include "zad1.hpp"

#include <functional>

template <typename T>
unsigned gotujZupe(Warzywo w, T t)
{
    return t.gotuj(w) * t.gotuj(w);
}