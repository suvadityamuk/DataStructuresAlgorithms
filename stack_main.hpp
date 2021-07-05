#ifndef HEADERS_DEFINED
#define HEADERS_DEFINED
#include <iostream>
#include "deque.hpp"
#endif
template <typename P>
struct Stack
{
    Deque<P> deque;
    void push(P elem_data)
    {
        deque.addFront(elem_data);
    }
    void top()
    {
        deque.peekFront();
    }
    void pop()
    {
        deque.removeFront();
    }
};