#ifndef HEADERS_DEFINED
#define HEADERS_DEFINED
#include <iostream>
#include "deque.hpp"
#endif
template <typename Q>
struct Queue
{
    Deque<Q> deque;
    void enqueue(Q elem_data)
    {
        deque.addBack(elem_data);
    }
    void peek()
    {
        deque.peekFront();
    }
    void dequeue()
    {
        deque.removeFront();
    }
};