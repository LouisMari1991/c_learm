// strrtref.cpp -- using structure references
#include<iostream>
using namespace std;
struct sysop
{
    char name[26];
    char quote[64];
    int used;
};

const sysop& use(sysop &sysopref);  // function with a reference return type

int main()
{
    sysop looper = 
    {
        "Rick \"Fortran\" Looper",
        "I'm a goto kink of guy.",
        0
    };

    use(looper);
    cout << "Lopper: " << looper.used << " use(s)\n";
    sysop copycat;
    copycat = use(looper);
    cout << "Lopper: " << looper.used << " use(s)\n";   // 2
    cout << "Copycat: " << copycat.used << " use(s)\n"; // 2
    cout << "use(looper): " << use(looper).used << " use(s)\n";  // 3
    cout << looper.used << endl; // 3
    cout << copycat.used << endl;  // 2

    return 0;
}

// use() returns the reference passed to it
const sysop& use(sysop & sysopref)
{
    cout << sysopref.name << " says:\n";
    cout << sysopref.quote << endl;
    sysopref.used++;
    return sysopref;
}