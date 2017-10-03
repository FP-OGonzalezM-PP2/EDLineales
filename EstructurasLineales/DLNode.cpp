//
//  DLNode.cpp
//  EstructurasLineales
//
//  Created by Paco Alvizo on 10/1/17.
//  Copyright © 2017 Paco Alvizo. All rights reserved.
//

#include "DLNode.hpp"

template <typename T>
DLNode<T>::DLNode(T d){
    next=back=NULL;
    data=d;
}

template <typename T>
DLNode<T>::~DLNode(){}

template <typename T>
void DLNode<T>::print(){
    std::cout << data <<"<=>";
}
