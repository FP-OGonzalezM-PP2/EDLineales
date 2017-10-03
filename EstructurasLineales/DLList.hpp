//
//  DLList.hpp
//  EstructurasLineales
//
//  Created by Paco Alvizo on 9/21/17.
//  Copyright © 2017 Paco Alvizo. All rights reserved.
//

#ifndef DLList_hpp
#define DLList_hpp

#include <stdio.h>
#include "DLNode.cpp"
template <class T> class DLList{
public:
    DLNode<T> *first;
    DLNode<T> *last;
    DLNode<T> *pointer;
    int length;
    
    DLList();
    ~DLList();
    
    bool isEmpty();
    void insertFirst(T d);
    void insertLast(T d);
    void deleteFirst();
    void deleteLast();
    void deleteNode(T d);
    void deleteList();
    void showList();
    void showListBackward();
    void showListbyAddress();
};


#endif /* DLList_hpp */
