// cingolf.cpp -- non-numberic input skipped
#include<iostream>
const int Max = 5;
int main()
{
    using namespace std;
    double fish[Max];
    int golf[Max];
    cout << "Please enter the weights of you fish.\n";
    cout << "You may enter " << Max << " rounds .\n";
    int i;
    for (i = 0; i < Max; i++)
    {
        cout << "round #" << i+1 << ": ";
        while(!(cin >> golf[i]))
        {
            cin.clear();
            while (cin.get() != '\n')
                continue;
            cout << "please enter a number: ";
        }
    }
    double total = 0.0;
    for (i = 0; i < Max; i++)
        total += golf[i];
    cout << total / Max << " = average score "
        << Max << " rounds\n";
    return 0;
}