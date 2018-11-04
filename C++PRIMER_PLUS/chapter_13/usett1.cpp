// usett1.cpp -- using base class and derviced class
#include <iostream>
#include "tabtenn1.h"

int main(void)
{
    using std::cout;
    using std::endl;
    TableTennisPlayer play1("Tata", "Boomdea", false);
    RatedPlayer rplayer1(1140, "Mallory", "Duck", true);
    if (rplayer1.HasTable())
        cout << ": has a table.\n";
    else
        cout << ": hasn't a table.\n";
    cout << "Name: ";
    rplayer1.Name();
    cout << ": Rating: " << rplayer1.Rating() << endl;
    RatedPlayer rplayer2(1212, play1);
    cout << "Name: ";
    rplayer2.Name();
    cout << ": Rating: " << rplayer2.Rating() << endl;

    return 0;
}