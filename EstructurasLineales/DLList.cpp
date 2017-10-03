//
//  DLList.cpp
//  EstructurasLineales
//
//  Created by Paco Alvizo on 9/21/17.
//  Copyright © 2017 Paco Alvizo. All rights reserved.
//
#include "DLList.hpp"

//Constructor por defecto
template <typename T>
DLList<T>::DLList(){
    first=last=pointer=NULL;
    length=0;
}
//Destructor
template <typename T>
DLList<T>::~DLList(){}
//Está vacía?
template <typename T>
bool DLList<T>::isEmpty(){
    return length==0;
}
//Insertar al inicio
template <typename T>
void DLList<T>::insertFirst(T d){
    DLNode<T> *node = new DLNode<T>(d); //Instanciamos un nodo
    if (isEmpty()){ //Si está vacía la lista
        first=last=node; //El primer nodo es apuntado por first y last
    }else{ //Si hay mas elementos en la lista
        first->back=node; //el apuntador back del primer nodo de la lista apunta al nuevo nodo
        node->next=first; //el apuntador next del nuevo nodo apunta al primer nodo de la lista
        first=node; //El apuntador first ahora apunta al nuevo nodo
    }
    length++; //Se incrementa el contador de nodos
}
//Insertar al final
template <typename T>
void DLList<T>::insertLast(T d){
    DLNode<T> *node = new DLNode<T>(d); //Instanciamos un nodo
    if (isEmpty()){
        first=last=node;
    }else{
        last->next=node; //el apuntador next del último nodo apunta al nuevo nodo
        node->back=last;//el apuntador back del nuevo nodo apunta al último nodo
        last=node;// el apuntador last apunta al nuevo nodo
    }
    length++;
}
//Eliminar el nodo al inicio
template <typename T>
void DLList<T>::deleteFirst(){
    if(!isEmpty()){ //Si no está vacía
        if (first==last){ //Si solo hay un nodo
            deleteList(); //Eliminamos el elemento de la lista
        }else{
            first=first->next; //El apuntador first apunta al siguente nodo
            first->back=NULL;//El apuntador back del ahora primer nodo apunta a nulo.
            length--; //Decrementamos el contador del nodo.
        }
    }
}
//Eliminar el nodo al final
template <typename T>
void DLList<T>::deleteLast(){
    if(!isEmpty()){
        if(first==last){
            deleteList();
        }else{
            last=last->back;
            last->next=NULL;
            length--;
        }
    }
}
//Eliminar un nodo
template <typename T>
void DLList<T>::deleteNode(T d){
    if(!isEmpty()){
        if (first->data==d){
            deleteFirst();
        }else if(last->data==d){
            deleteLast();
        }
        pointer=first->next;
        do{
            if (pointer->data==d){
                pointer->back->next = pointer->next;
                pointer->next->back = pointer->back;
                length--;
                pointer=last;
            }
            pointer=pointer->next;
        }while(pointer);
    }
}
//Eliminar la lista completa
template <typename T>
void DLList<T>::deleteList(){
    first=last=NULL;
    length=0;
}
//Mostrar la lista
template <typename T>
void DLList<T>:: showList(){
    if(!isEmpty()){
        pointer=first;
        do{
            pointer->print();
            pointer=pointer->next;
        }while(pointer);
        std::cout<<"NULL\n";
    }else{
        std::cout<<"Lista vacía\n";
    }
}
//Mostrar lista alrevés
template <typename T>
void DLList<T>:: showListBackward(){
    if(!isEmpty()){
        pointer=last;
        do{
            pointer->print();
            pointer=pointer->back;
        }while(pointer);
        std::cout<<"NULL\n";
    }else{
        std::cout<<"Lista vacía\n";
    }
}

template <typename T>
void DLList<T>:: showListbyAddress(){
    if(!isEmpty()){
        pointer=first;
        do{
            std::cout << pointer <<"<=>";
            pointer=pointer->next;
        }while(pointer);
        std::cout<<"NULL\n";
    }else{
        std::cout<<"Lista vacía\n";
    }
}
