// textin3.cpp -- reading to end of file

#include<iostream>

int main()
{
    using namespace std;
    char ch;
    int count = 0;
    cout << "Enter charcters.\n";
    cin.get(ch);
    while (cin.fail() == false)
    {
        count << ch;
        ++count;
        cin.get(ch);
    }
    cout << endl << "characters read\n";
    return 0;
}