#include "Stack.h"



template<typename T>
Stack<T>::Stack(int n)
{
    this->n = n;
    top = 0;
    array = new T[n];
}

template<typename T>
Stack<T>::Stack(const Stack& obj)
{
    this->n = obj.n;
    array = new T[n];
    top = 0;
    for (int i = 0; i < n; i++)
    {
        array[i] = obj.array[i];
    }
}

template<typename T>
Stack<T>::~Stack()
{
    delete array;
}

template<typename T>
void Stack<T>::Push(T element)
{
    array[top++] = element;
}

template<typename T>
T Stack<T>::Remove()
{
    return array[--top];
}

template<typename T>
T* Stack<T>::get_array()
{
    return array;
}

template<typename T>
int Stack<T>::get_top()
{
    return top;
}

template<typename T>
ostream& operator<<(ostream& out, const Stack<T>& obj)
{
    for (int i = obj.top - 1; i >= 0; i--)
    {
        out << obj.array[i] << " ";
    }
    out << endl;
    return out;
}
