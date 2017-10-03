//
//  CList.cpp
//  EstructurasLineales
//
//  Created by Paco Alvizo on 10/1/17.
//  Copyright © 2017 Paco Alvizo. All rights reserved.
//

#include "CList.hpp"
//Constructor
template <typename T>
CList<T>::CList(){
    pivot=pointer=NULL;
    length=0;
}
template <typename T>
CList<T>::CList(T d){
    Node<T> *node = new Node<T>(d);
    pivot=node->next=node;
    length++;
}
//Destructor
template <typename T>
CList<T>::~CList(){}
//Está vacía?
template <typename T>
bool CList<T>::isEmpty(){
    return length==0;
}
//Insertar
template <typename T>
void CList<T>::insert(T d){
    Node<T> *node = new Node<T>(d);
    if (isEmpty()){
        pivot=node->next=node;
    }else{
        node->next=pivot->next;
        pivot->next=node;
    }
    length++;
}
//Eliminar nodo
template <typename T>
void CList<T>::deleteNode(T d){
    if(!isEmpty()){
        pointer=pivot;
        for(int i=1;i<=length;i++){
            if(pointer->next->data==d){
                pointer->next=pointer->next->next;
                if(pivot->data==d){
                    pivot=pointer;
                }
                length--;
                pointer=NULL;
                i=length+1;
            }
            pointer=pointer->next;
        }
    }
}
//Vaciar lista
template <typename T>
void CList<T>::deleteList(){
    pivot=pointer=NULL;
    length=0;
}

//Mostrar lista
template <typename T>
void CList<T>::showList(){
    if(!isEmpty()){
        pointer=pivot;
        for (int i=1; i<=length;i++){
            pointer->print();
            pointer=pointer->next;
        }
    }
}

template <typename T>
void CList<T>::showListbyAddress(){
    if(!isEmpty()){
        pointer=pivot;
        for (int i=1; i<=length;i++){
            std::cout<<pointer<<"->";
            pointer=pointer->next;
        }
    }
}


