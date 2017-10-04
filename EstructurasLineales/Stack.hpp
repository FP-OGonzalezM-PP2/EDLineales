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
#include "Node.cpp"

template <class T> class Stack{
private:
    Node<T> *top;
    int size;
    
public:
    Stack<T>();
    Stack<T>(T d);
    ~Stack<T>();
    
    int getSize();
    void push(T d);
    T pop();
    T getTop();
    void showStack();
};

#endif /* Stack_hpp */
