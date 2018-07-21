#include<iostream>

int main()
{
    using namespace std;

    double arr[5] = {21.1, 32.8, 23.4, 45.2, 37.4};
    
    double *pt = arr;

    cout << "arr = " << arr << endl;
    cout << "pt = " << pt << endl;
    cout << "*pt = " << *pt << endl << endl;     
    
    cout << "*++pt = " << *++pt <<  ", *pt = " << *pt << endl;
    cout << "++*pt = " << ++*pt << ", *pt = " << *pt << endl;
    cout << "(*pt)++ = " << (*pt)++ << ", *pt = " << *pt << endl;
    cout << "++(*pt) = " << ++(*pt) <<  ", *pt = " << *pt << endl;
    cout << "*pt++ = " << *pt++ << ", *pt = " << *pt << endl;
    
    return 0; 
}
