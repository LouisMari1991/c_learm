// write.cpp -- using cout.write()
#include<iostream>
#include<cstring>   // or else string.h

int main()
{
    using std::cout;
    using std::endl;
    const char * state1 = "Florida";
    const char * state2 = "Kansas";
    const char * state3 = "Euphoria";
    int len = std::strlen(state2);
    cout << "Increasing loop index: \n";
    int i;
    for(i = 1; i <= len; i++)
    {
        cout.write(state2, i);
        cout << endl;
    }
}