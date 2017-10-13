//
//  Deque.cpp
//  EstructurasLineales
//
//  Created by Paco Alvizo on 10/11/17.
//  Copyright © 2017 Paco Alvizo. All rights reserved.
//

#include "Deque.hpp"
//Constructor por defecto
template <typename T>
Deque<T>::Deque(){
    front=NULL;
    rear=NULL;
    size=0;
}
//Constructor con un dato
template <typename T>
Deque<T>::Deque(T d){
    DLNode<T> node = *new DLNode<T>(d);
    front=rear=node;
    size=1;
}
//Destructor
template <typename T>
Deque<T>::~Deque(){}

//Inserta un elemento al inicio
template <typename T>
void Deque<T>::enqueueFront(T d){
    DLNode<T> node = *new DLNode <T>(d);
    if (isEmpty()){
        front=rear=node;
    }else{
        node.next=front;
        front->back=node;
        front=node;
    }
    size++;
}
//Inserta un elemento al final
template <typename T>
void Deque<T>::enqueueRear(T d){
    if (isEmpty()){
        enqueueFront(d);
    }else{
        DLNode<T> *node = new DLNode<T>(d);
        rear->next=node;
        node->back=rear;
        rear=node;
        size++;
    }
}
//Elimina un elemento al frente
template <typename T>
T Deque<T>::dequeueFront(){
    if(!isEmpty()){
        DLNode<T> *fd=front;
        if(size==1){
            clearDeque();
        }else{
            front=front->next;
            front->back=NULL;
            fd->next=NULL;
            size--;
        }
        return fd->data;
    }else{
        return NULL;
    }
}
//Elimina un elemento al final
template <typename T>
T Deque<T>::dequeueRear(){
    if(!isEmpty()){
        DLNode<T> *rd=rear;
        if(size==1){
            clearDeque();
        }else{
            rear=rear->back;
            rear->next=NULL;
            rd->back=NULL;
            size--;
        }
        return rd->data;
    }else{
        return NULL;
    }
}
//Devuelve el valor del elemnto apuntado por front
template <typename T>
T Deque<T>::getFront(){
    return front->data;
}

//Devuelve el valor del elemento apuntado por rear
template <typename T>
T Deque<T>::getRear(){
    return rear->data;
}
//Devuelve el tamaño del Deque
template <typename T>
int Deque<T>::getSize(){
    return size;
}
//Está vacio el Deque?
template <typename T>
bool Deque<T>::isEmpty(){
    return size==0;
}
//Elimina todos los elementos del Deque
template <typename T>
void Deque<T>::clearDeque(){
    front=rear=NULL;
    size=0;
}
//Muestra todos los elementos del Deque
template<typename T>
void Deque<T>::showDeque(){
    DLNode<T> *p=front;
    while(p){
        p->print();
        p=p->next;
    }
}




