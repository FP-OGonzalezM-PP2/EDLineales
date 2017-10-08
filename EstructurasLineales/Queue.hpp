//
//  Queue.hpp
//  EstructurasLineales
//
//  Created by Paco Alvizo on 10/7/17.
//  Copyright © 2017 Paco Alvizo. All rights reserved.
//

#ifndef Queue_hpp
#define Queue_hpp

#include <stdio.h>
#include "Node.cpp"

template <class T> class Queue{
private:
    Node<T> *front;
    Node<T> *rear;
    int size;
public:
    //Constructor
    Queue();
    Queue(T d);
    ~Queue();
    
    void enqueue(T d);
    T dequeue();
    T getFront();
    int getSize();
    bool isEmpty();
    void clearQueue();
    void showQueue();
    
};
#endif /* Queue_hpp */
