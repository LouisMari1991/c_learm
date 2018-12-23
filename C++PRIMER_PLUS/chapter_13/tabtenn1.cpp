// tabtenn1.cpp -- base class methods and dervied - class methods 
#include <iostream>
#include <cstring>
#include "tabtenn1.h"

// TableTennisPlayer methods
TableTennisPlayer::TableTennisPlayer(const char * fn, const char * ln, bool ht)
{
    std::strncpy(firstname, fn, LIM -1);
    firstname[LIM -1] = '\0';
    std::strncpy(lastname, ln, LIM - 1);
    lastname[LIM -1] = '\0';
    hasTable = ht;
}

void TableTennisPlayer::Name() const 
{
    std::cout << lastname << ", " << firstname;
}

void Show(const TableTennisPlayer &rt)
{
    std::cout << "Name: ";
    rt.Name();
    std::cout << "\nTable: ";
    if (rt.HasTable())
        std::cout << "yes\n";
    else 
        std::cout << "no\n";
}

// RatedPlayer methods
RatedPlayer::RatedPlayer(unsigned int r, const char * fn, 
    const char * ln, bool ht): TableTennisPlayer(fn, ln, ht)
{
    rating = r;
}

RatedPlayer::RatedPlayer(unsigned int r, const TableTennisPlayer & tp)
    : TableTennisPlayer(tp), rating(r)
{

}