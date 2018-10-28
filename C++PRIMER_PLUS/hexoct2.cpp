// hexoct2.cpp -- display values in hex and octal

#include<iostream>

using namespace std;

int main()
{
    int chest = 42;
    int waist = 42;
    int inseam = 42;
    
    cout << "Monsieur cuts a strking figure!" << endl;
    cout << "chest = " << chest << " (decial) " << endl;
    cout << hex;
    cout << "waist = " << waist << " hexadecimal " << endl;
    cout << oct;
    cout << "inseam = " << inseam << " (octal) " << endl;
    return 0;
}
