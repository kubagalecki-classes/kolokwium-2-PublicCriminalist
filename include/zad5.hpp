#include "zad1.hpp"

#include <algorithm>
#include <deque>
#include <vector>

template<typename T>
bool liczKolejneWarzywa(T a1, T a2, unsigned n, string& s)
{
    int num = count(a1, a2, [](Warzywo w) { return w.getname() == s; });
    if (num == n)
        return 1;
    else return 0;
}