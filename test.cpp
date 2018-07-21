#include<iostream>

int main()
{

    using namespace std;

    char flower[10] = "rose";
    cout << flower << endl;

    int ar[10] = {78,87};
    cout << ar << endl;
    cout << &ar << endl;

    int i = 5;
    
    int *pint = &i;

    cout << *pint << endl;
    cout << pint << endl;

    int array[] = {1, 2 ,3};
    int array1[3] = {1,2,3};

    int *pi = array;
    
    cout << *pi << endl;
    
    cout << pi[0] << endl;
    cout << pi[1] << endl;
    cout << pi[2] << endl;
        
    cout << sizeof(array) << endl;
    cout << sizeof(array1) << endl;
    cout << sizeof(pi) << endl;

    return 0;
}
