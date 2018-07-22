// more_and.cpp -- using logical AND operator
#include<iostream>

const char *qualify[4] = 
{
    "10, 100-meter tace.\n",
    "mud tug-of-war.\n",
    "masters canoe jousting.\n",
    "pie-throwing festival.\n"
};

int main()
{
    using namespace std;
    int age;
    cout << "Enter you age in years: ";
    cin >> age;
    int index;
    if (age > 17 && age < 35)
        index = 0;
    else if (age >= 35 && age < 65)
        index = 1;
    else if (age >= 50 && age < 65)
        index = 2;
    else 
        index =3;
    cout << "You qualify for the " << qualify[index];
    return 0;
}