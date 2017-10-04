//
//  Stack.cpp
//  EstructurasLineales
//
//  Created by Paco Alvizo on 10/3/17.
//  Copyright © 2017 Paco Alvizo. All rights reserved.
//

#include "Stack.hpp"


template <typename T>
Stack<T>::Stack(){
    top=NULL;
    size=0;
}

template <typename T>
Stack<T>::Stack(T d){
    Node<T> *node = new Node<T>(d);
    top=node;
    size++;
}

template <typename T>
Stack<T>::~Stack(){}

template <typename T>
int Stack<T>:: getSize(){
    return size;
}

template <typename T>
void Stack<T>::push(T d){
    Node<T> *node = new Node<T>(d);
    node->next=top;
    top=node;
    size++;
}

template <typename T>
T Stack<T>::pop(){
    T d = top->data;
    top=top->next;
    size--;
    return d;
}

template <typename T>
T Stack<T>::getTop(){
    return top->data;
}

template <typename T>
void Stack<T>::showStack(){
    Node<T> *t = top;
    while (t){
        t->printS();
        t=t->next;
    }
    std::cout<<"NULL"<<endl;
    
}
