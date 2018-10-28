// ifelseif.cpp -- using if else if else

#include<iostream>

const int Fave = 27;

int main()
{
    using namespace std;
    int n;

    cout << "Enter a number int the range 1-1000 to find ";
    cout << "my favorite number: ";
    do
    {
        cin >> n;
        if (n < Fave)
        {
            cout << "Too low -- guess again: ";
        } 
        else if (n > Fave)
        {
            cout << "Too high -- guess again: ";
        }
        else 
        {
            cout << Fave << " is right!\n";
        }
    } while(n != Fave);
}