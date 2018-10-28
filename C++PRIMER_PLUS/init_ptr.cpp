// init_ptr.cpp -- initialize a pointer

#include<iostream>

int main()
{
    using namespace std;
    int higgens = 5;
    int *pt = &higgens;
    
    cout << "Value of higgens = " << higgens
        << "; Address of higgens = " << &higgens << endl;

    cout << "Value if *pt = " << *pt
        << "; value of pt = " << pt << endl;

    return 0;
}
