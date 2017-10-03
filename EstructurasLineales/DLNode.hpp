//
//  DLNode.hpp
//  EstructurasLineales
//
//  Created by Paco Alvizo on 10/1/17.
//  Copyright © 2017 Paco Alvizo. All rights reserved.
//

#ifndef DLNode_hpp
#define DLNode_hpp

#include <stdio.h>
#include <iostream>
template <class T> class DLNode{
public:
    DLNode *next;
    DLNode *back;
    T data;
    
    DLNode(T d);
    ~DLNode();
    void print();
};
#endif /* DLNode_hpp */
