//
//  Stack.cpp
//  EstructurasLineales
//
//  Created by Paco Alvizo on 10/3/17.
//  Copyright © 2017 Paco Alvizo. All rights reserved.
//

#include "Stack.hpp"

//Constructor por defecto
template <typename T>
Stack<T>::Stack(){
    top=NULL;
    size=0;
}
//Constructor con primer elemento
template <typename T>
Stack<T>::Stack(T d){
    Node<T> *node = new Node<T>(d);
    top=node;
    size=1;
}
//Destructor
template <typename T>
Stack<T>::~Stack(){}

//Devuelve el tamaño de la pila
template <typename T>
int Stack<T>:: getSize(){
    return size;
}
//Inserta un nuevo nodo en la cima de la pila
template <typename T>
void Stack<T>::push(T d){
    Node<T> *node = new Node<T>(d);
    node->next=top;
    top=node;
    size++;
}
//Elimina un valor de la cima de la pila y lo devuelve.
template <typename T>
T Stack<T>::pop(){
    T d;
    if (!isEmpty()){
        d = top->data;
        top=top->next;
        size--;
    }else{
        d=NULL;
    }
    return d;
}
//Devuelve el valor de la cima
template <typename T>
T Stack<T>::getTop(){
    if (!isEmpty()){
        return top->data;}
    else{
        return NULL;
        }
}
//Muestra el contenido de la pila
template <typename T>
void Stack<T>::showStack(){
    Node<T> *t = top;
    while (t){
        t->printS();
        t=t->next;
    }
    std::cout<<"NULL"<<endl;
}
//Está vacía?
template <typename T>
bool Stack<T>::isEmpty(){
    return size==0;
}
