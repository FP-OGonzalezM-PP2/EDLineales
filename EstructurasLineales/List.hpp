//
//  List.hpp
//  EstructurasLineales
//
//  Created by Paco Alvizo on 9/18/17.
//  Copyright © 2017 Paco Alvizo. All rights reserved.
//

#ifndef List_hpp
#define List_hpp

#include <stdio.h>
#include "Node.hpp"
#include "node.cpp"

template <class T> class List{
public:
    Node<T> *first;
    Node<T> *last;
    Node<T> *pointer;
    int length;
    
    List();
    ~List();
    
    bool isEmpty();
    void insertFirst(T d);
    void insertLast(T d);
    void deleteList();
    void deleteFirst();
    void deleteLast();
    void deleteNode(T d);
    void showList();
    void showListbyAddress();
};

#endif /* List_hpp */
