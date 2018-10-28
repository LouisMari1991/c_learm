#include<iostream>
using namespace std;
struct box 
{
    char maker[40];
    float height;
    float width;
    float length;
    float volume;
};

void show_box(const box & container);
void set_volume(box & crate);

template<typename T>
T max(T t1, T t2);

template<> box max(box b1, box b2);


int main()
{

}

void show_box(const box & container)
{
    cout << "Made by " << container.maker << endl;
    cout << "Height " << container.height << endl;
    cout << "Width " << container.width << endl;
    cout << "Length " << container.length << endl;
    cout << "Volume " << container.volume << endl;
}
void set_volume(box & crate)
{
    crate.volume = crate.height * crate.width * crate.length;
}

template<typename T>
T max(T t1, T t2)
{
    return t1 > t2 ? t1 : t2;
}

template<> box max(box b1, box b2)
{
    return b1.volume > b2.volume ? b1 : b2;
}

