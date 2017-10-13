//
//  Deque.hpp
//  EstructurasLineales
//
//  Created by Paco Alvizo on 10/11/17.
//  Copyright © 2017 Paco Alvizo. All rights reserved.
//

#ifndef Deque_hpp
#define Deque_hpp

#include <stdio.h>
#include "DLNode.cpp"

template <class T> class Deque{
private:
    //Apuntadores a delante y atrás de tipo Nodo con doble enlace
    DLNode<T> *front;
    DLNode<T> *rear;
    //Tamaño del Deque
    int size;
public:
    //Constructores
    //por defecto
    Deque();
    //con un dato
    Deque(T d);
    //Destructor
    ~Deque();
    
    void enqueueFront(T d);//Inserta un elemento al inicio
    void enqueueRear(T d);//Inserta un elemento al final
    T dequeueFront(); //Elimina un elemento al inicio y devuelve su valor
    T dequeueRear(); //Elimina un elmento al final y devuelve su valor
    T getFront(); //Devuelve el valor del elemnto apuntado por front
    T getRear();//Devuelve el valor del elemnto apuntado por rear
    int getSize();//Devuelve el tamaño del Deque
    bool isEmpty(); // Evalua si Deque está vacía y devuelve un booleano
    void clearDeque(); //Elimina todos los elementos del Deque
    void showDeque(); //Muestra todos los elementos del Deque 
};

#endif /* Deque_hpp */
