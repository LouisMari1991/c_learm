// stcktp1.h -- modified Stack template
#ifndef STCKTP1_H_
#define STCKTP1_H_
    
template <typename Type>
class Stack
{
private:
    enum { SIZE = 10 };   // default size
    int stacksize;
    Type * items;       // holds stack items
    int top;            // index of top stack item
public:
    explicit Stack(int ss = SIZE);
    Stack(const Stack & st);
    ~Stack() { delete [] items; }
    bool isempty() { return top == 0; }
    bool isfull() { return top == stacksize; }
    bool push(const Type & item);       // add item to stack
    bool pop(Type & item);              // pop top into item
    Stack & operator=(const Stack & st);
};

template <typename Type>
Stack<Type>::Stack(int ss): stacksize(ss), top(0)
{
    items = new Type[stacksize];
}

template <typename Type>
Stack<Type>::Stack(const Stack & st)
{
    stacksize = st.stacksize;
    items = new Type[stacksize];
    for (int i = 0; i < top; i++)
        items[i] = st.items[i];
}

template <typename Type>
bool Stack<Type>::push(const Type & item)
{
    if (top < stacksize) {
        items[top++] = item;
        return true;
    }
    else
        return false;
    
}

template <typename Type>
bool Stack<Type>::pop(Type & item)
{
    if (top > 0) {
        item = items[--top];
        return true;
    }
    else 
        return false;
    
}

template <typename Type>
Stack<Type> & Stack<Type>::operator=(const Stack & st)
{
    if (this == st)
        return *this;
    delete items;
    stacksize = st.stacksize;
    top = st.top;
    items = new Type[stacksize];

    for (int i = 0; i < stacksize; i++)
        items[i] = st.items[i];

    return *this;
}

#endif //STCKTP1_H_