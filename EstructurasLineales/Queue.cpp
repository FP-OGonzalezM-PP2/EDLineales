//
//  Queue.cpp
//  EstructurasLineales
//
//  Created by Paco Alvizo on 10/7/17.
//  Copyright © 2017 Paco Alvizo. All rights reserved.
//

#include "Queue.hpp"

template <typename T>
Queue<T>::Queue(){
    front=rear=NULL;
    size=0;
}

template <typename T>
Queue<T>::Queue(T d){
    Node<T> *node = new Node<T>(d);
    front=rear=node;
    size =  1;
}

template <typename T>
Queue<T>::~Queue(){}

template <typename T>
void Queue<T>::enqueue(T d){
    Node<T> *node = new Node<T>(d);
    if(isEmpty()){
        front=rear=node;
        size=1;
    }else{
        rear->next=node;
        rear=node;
        size++;
    }
}

template <typename T>
T Queue<T>::dequeue(){
    if (isEmpty()){
        return NULL;
    }else{
        Node<T> *fd=front;
        front=front->next;
        size--;
        return fd->data;
    }
}

template <typename T>
T Queue<T>::getFront(){
    if (isEmpty()){
        return NULL;
    }else{
        return front->data;
    }
}

template <typename T>
int Queue<T>::getSize(){
    return size;
}

template <typename T>
bool Queue<T>::isEmpty(){
    return size==0;
}

template <typename T>
void Queue<T>::clearQueue(){
    front=rear=NULL;
    size=0;
}

template <typename T>
void Queue<T>::showQueue(){
    std::cout<<"front->";
    Node<T>* p = front;
    if (!p) std::cout<<"NULL";
    while(p){
        p->print();
        p=p->next;
    }
    std::cout<<"<-rear"<<endl;
}



