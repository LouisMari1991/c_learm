// twoswap.cpp -- specialization overrides a template
#include<iostream>
template<typename Any>
void Swap(Any &a, Any &b);

struct job
{
    char name[40];
    double salary;
    int floor;
};

template <> void Swap<job>(job &j1, job &j2);
void show(job &j);

int main()
{

}