// tmp2tmp.cpp -- template friends to a template class
#include <iostream>
using std::cout;
using std::endl;

//template prototypes
template <typename T> 
void counts();

template <typename T> 
void report(T &);

// template class
template <typename TT> 
class HasFriendT
{
private:
    TT item;
    static int ct;
public:
    HasFriendT(const TT & i): item(i) { ct++; }
    ~HasFriendT() { ct--; }
    friend void counts<TT>();
    friend void report<>(HasFriendT<TT> &);
    template<typename C, typename D> friend void show2(C &, D &);

};

template <typename T>
int HasFriendT<T>::ct = 0;

// template friend functions definitions
template <typename T>
void counts()
{
    cout << "template size: " << sizeof(HasFriendT<T>) << "; ";
    cout << "template counts(): " << HasFriendT<T>::ct <<  endl;;

}

template <typename T>
void report(T & hf)
{
    cout << hf.item << endl;
}

template <typename C, typename D> void show2(C & c, D & d)
{
    cout << c.item << ", " << d.item << endl;
}

int main()
{
    counts<int>();
    HasFriendT<int> hfi1(10);
    HasFriendT<int> hfi2(20);
    HasFriendT<double> hfdb(10.5);
    report(hfi1);
    report(hfi2);
    report(hfdb);
    cout << "counts<int>() output:\n";
    counts<int>();
    cout << "counts<double> outputs:\n";
    counts<double>();

// add from manyfnd.cpp 

    cout << "hfi1, hfi2: ";
    show2(hfi1, hfi2);
    cout << "hfdb, hfi2: ";
    show2(hfdb, hfi2);

// end add from manyfnd.cpp 

    cout << "counts<int>() output:\n";
    counts<int>();
    cout << "counts<double> outputs:\n";
    counts<double>();

    return 0;
}