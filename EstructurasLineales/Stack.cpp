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
Stack<T>::~Stack(){}

template <typename T>
void Stack<T>::push(T e){
    Node<T> *node = new Node<T>();
    node->next=top;
    top=node;
    size++;
}

template <typename T>
Node<T>  Stack<T>::pop(){
    Node<T> *t = top;
    top=top->next;
    size--;
    return t;
}

template <typename T>
bool Stack<T>::isEmpty(){
    return size==0;
}

template <typename T>
void Stack<T>::emptyStack(){
    top=NULL;
    size=0;
}

template <typename T>
Node<T> Stack<T>::getTop(){
    return top;
}

template <typename T>
int Stack<T>::getSize(){
    return size;
}
