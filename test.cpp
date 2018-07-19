#include<iostream>

int main()
{

    using namespace std;

    int array[] = {1, 2 ,3};
    int array1[3] = {1,2,3};

    int *pi = array;
    
//    cout << *pi[0] << endl;
//    cout << *pi[1] << endl;
    cout << *pi << endl;
    
    cout << pi[0] << endl;
    cout << pi[1] << endl;
    cout << pi[2] << endl;
        
    cout << sizeof(array) << endl;
    cout << sizeof(array1) << endl;
    cout << sizeof(pi) << endl;

    return 0;
}
