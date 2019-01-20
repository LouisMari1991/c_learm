// usedma.cpp -- inheritance, friend, and DMA
// compile with dma.cpp
#include <iostream>
#include "dma.h"
int main()
{
    using std::cout;
    using std::endl;

    baseDMA shirt("Portabelly", 0);
    lacksDMA balloon("red", "Bilmpo", 4);
    hasDMA map("Mercator", "buffalo Keys", 5);
    cout << shirt << endl;
    cout << balloon << endl;
    cout << map << endl;
    lacksDMA balloon2(balloon);
    lacksDMA ballon3;
    // ballon3 = balloon;
    hasDMA map2;
    map2 = map;
    cout << balloon2 << endl;
    cout << map2 << endl;
    cout << ballon3 << endl;
    return 0;
}