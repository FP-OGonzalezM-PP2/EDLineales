//
//  myStack.cpp
//  EstructurasLineales
//
//  Created by Paco Alvizo on 10/3/17.
//  Copyright © 2017 Paco Alvizo. All rights reserved.
//

#include "myStack.hpp"

template <typename T>
myStack<T>::myStack(){
    top=NULL;
    size=0;
}

template <typename T>
myStack<T>::~myStack(){}

template <typename T>
void myStack<T>::push(T e){
    Node<T> *node = new Node<T>();
    node->next=top;
    top=node;
    size++;
}

template <typename T>
Node<T>  myStack<T>::pop(){
    Node<T> *t = top;
    top=top->next;
    size--;
    return t;
}

template <typename T>
bool myStack<T>::isEmpty(){
    return size==0;
}

template <typename T>
void myStack<T>::emptymyStack(){
    top=NULL;
    size=0;
}

template <typename T>
Node<T> myStack<T>::getTop(){
    return top;
}

template <typename T>
int myStack<T>::getSize(){
    return size;
}
