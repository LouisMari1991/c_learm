// textin4.cpp -- reading chars with cin.get()

#include<iostream>

int main()
{
    using namespace std;
    int ch;
    int count = 0;

    while ((ch = cin.get()) != -1) 
    {
        cout.put(char(ch));
        ++count;
    }
    cout << endl << " characters read\n";
    return 0;
}