// nested.cpp -- nested loops and 2-D array

#include<iostream>

const int Cityes = 5;
const int Years = 4;

int main()
{
    using namespace std;
    const char *cities[Cityes] = 
    {
        "Gribble City",
        "Gribletown",
        "new Gribble",
        "san Gribble",
        "Gribble Vista"
    };
    int maxtemps[Years][Cityes] = 
    {
        {95, 99, 86, 100, 104},
        {95, 97, 90, 106, 102},
        {86, 100, 940, 107, 105},
        {97, 102, 89, 108, 104}
    };

    cout << "Maximun temperatures for 2002 - 2005\n\n";
    for (int city = 0; city < Cityes; city++)
    {
        for (int year = 0; year < Years; year++)
        {
            cout << maxtemps[year][city] << '\t';
        }
        cout << endl;
    }

    return 0;
}