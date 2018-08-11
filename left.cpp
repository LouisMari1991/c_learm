// left.cpp -- string function with a default argument
#include<iostream>
const int ArSize = 80;
char* left(const char *str, int n = 1);

int main()
{

}

char* left (const char *str, int n)
{
    if (n < 0)
        n = 0;
    char *p = new char[n + 1];
    int i;
    for (i = 0; i < n && str[i]; i ++)
        p[i] = str[i];  // copy characters
    while (i <= n)
        p[i++] = '\0';  // set rest of string to '\0'
    return p;
}