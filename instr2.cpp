// instr1.cpp -- reading more than one string

#include<iostream>

int main()
{
    using namespace std;
    const int ArSize = 20;
    char name[ArSize];
    char dessert[ArSize];
    
    cout << "Enter you name: \n";
    cin.getline(name, ArSize);
    cout << "Enter you favorite dessert: \n";
    cin.getline(dessert,ArSize);
    cout << "I have some delicious " << dessert;
    cout << " for you, " << name << ".\n";
    return 0;
}
