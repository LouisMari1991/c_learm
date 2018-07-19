// pointer.cpp -- our first pointer variable

#include<iostream>

int main()
{
    using namespace std;
    int updates = 6;
    int *p_updates;
    
    p_updates = &updates;

    cout << "Values: updates = " << updates << endl;
    cout << "*p_updates = " << *p_updates << endl;
    cout << "&updates = " << &updates << endl;
    cout << "p_updates = " << p_updates << endl;

    *p_updates = *p_updates + 1;
    cout << "Noew updates = " << updates << endl;
    
    return 0;
}
