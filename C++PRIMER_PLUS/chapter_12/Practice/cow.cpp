// 12.1 根据以下类声明，完成类，并编写小程序
#include <iostream>
#include <cstring>
using namespace std;

class Cow 
{
        char name[20];
        char * hobby;
        double weight;
    public:
        Cow();
        Cow(const char * nm, const char * ho, double wt);
        Cow(const Cow & c);
        ~Cow();
        Cow & operator= (const Cow & c);
        void ShowCow() const;   // display all cow data
}; 

// Answer
Cow::Cow(){}



Cow::Cow(const char * nm, const char * ho, double wt)
{
    strcpy(name, nm);
    hobby = new char[strlen(ho) + 1];
    strcpy(hobby, ho);
    weight = wt;
}

Cow & Cow::operator= (const Cow & c)
{
    strcpy(name, c.name);
    hobby = new char[strlen(c.hobby) + 1];
    strcpy(hobby, c.hobby);
    weight = c.weight;
}

Cow::~Cow()
{
    delete [] hobby;
}

void Cow::ShowCow() const
{
    cout << name << endl;
    cout << hobby << endl;
    cout << weight << weight << endl;
}

int main()
{
    Cow cow;
    Cow ccc("adads", "dsdasad", 34);
    cow = ccc;
    cow.ShowCow();
    ccc.ShowCow();

    cout << &cow << endl;
    cout << &ccc << endl;

    return 0;
}



