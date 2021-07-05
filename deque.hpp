#include<iostream>
template <typename B>
struct Node
{
    B data;
    Node<B>* next_node;
    Node<B>* back_node;
};
template <typename T>
struct Deque
{
    Node<T>* head;
    Node<T>* tail;
    Deque()
    {
        Node<T>* firstNodeCreated = new Node<T>;
        Node<T>* lastNodeCreated = new Node<T>;
        head = firstNodeCreated;
        tail = lastNodeCreated;
        head->data = 0.0;
        tail->data = 0.0;
        head->next_node = tail;
        head->back_node = nullptr;
        tail->next_node = nullptr;
        tail->back_node = head;
    }
    Deque(T head_data, T tail_data)
    {
        Node<T>* firstNodeCreated = new Node<T>;
        Node<T>* lastNodeCreated = new Node<T>;
        head = firstNodeCreated;
        tail = lastNodeCreated;
        head->data = head_data;
        tail->data = tail_data;
        head->next_node = tail;
        head->back_node = nullptr;
        tail->next_node = nullptr;
        tail->back_node = head;
    }
    void addFront(T elem_data)
    {
        Node<T>* front = new Node<T>;
        front->data = elem_data;
        head->back_node = front;
        front->back_node = nullptr;
        front->next_node = head;
        head = front;
    }
    void addBack(T elem_data)
    {
        Node<T>* back = new Node<T>;
        back->data = elem_data;
        back->next_node = nullptr;
        back->back_node = tail;
        tail->next_node = back;
        tail = back;
    }
    void peekFront()
    {
        std::cout<<"Front node contains the following data"<<std::endl;
        printf("Datatype : %s\n", typeid(head->data).name());
        std::cout<<head->data<<std::endl;
    }
    void peekBack()
    {
        std::cout<<"Last node contains the following data"<<std::endl;
        printf("Datatype : %s\n", typeid(tail->data).name());
        std::cout<<tail->data<<std::endl;
    }
    void removeFront()
    {
        Node<T>* temp_head_holder = head;
        head = head->next_node;
        delete temp_head_holder;
    }
    void removeBack()
    {
        Node<T>* temp_tail_holder = tail;
        tail = tail->back_node;
        delete temp_tail_holder;
    }
};