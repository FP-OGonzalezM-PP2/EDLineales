//
//  Stack.hpp
//  EstructurasLineales
//
//  Created by Paco Alvizo on 10/3/17.
//  Copyright © 2017 Paco Alvizo. All rights reserved.
//

#ifndef Stack_hpp
#define Stack_hpp

#include <stdio.h>
#include "Node.hpp"

template <class T> class myStack {
private:
    Node<T> *top;
    int size;
    
public:
    myStack();
    ~myStack();
    void push (T e);
    Node<T>  pop ();
    bool isEmpty();
    void emptyStack();
    Node<T> getTop();
    int getSize();
};

#endif /* Stack_hpp */ 
