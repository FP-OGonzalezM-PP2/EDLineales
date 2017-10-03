//
//  List.cpp
//  EstructurasLineales
//
//  Created by Paco Alvizo on 9/18/17.
//  Copyright © 2017 Paco Alvizo. All rights reserved.
//
#include "List.hpp"
#include "Node.hpp"
#include <iostream>
//Constructor
template <typename T>
List<T>::List(){
    first=NULL;
    last=NULL;
    pointer=NULL;
    length=0;
}
//Destructor
template <typename T>
List<T>::~List(){}

template <typename T>
bool List<T>::isEmpty(){
    return length==0;
}
//Insertar al inicio
template <typename T>
void List<T>::insertFirst(T d){
    Node<T> *node = new Node<T>(d);
    if (isEmpty()){ //Si la lista está vacía
        last=first=node; //Apuntadores last y first apuntan a Nodo
    }else{ //Si la lista tiene elementos
        node->next=first; //Apuntador next del nuevo nodo apunta al primer nodo
        first=node; //Apuntador first apunta al nuevo nodo
    }
    length++; //Incrementamos el contador de nodos
}
//Insertar al final
template <typename T>
void List<T>::insertLast(T d){
    Node<T> *node = new Node<T>(d);
    if (isEmpty()){ //Si la lista está vacía
        insertFirst(d);
    }else{ //Si la lista no está vacía
        last->next = node; //El apuntador next del último nodo apunta al nuevo nodo
        last=node; // El apuntador last apunta al nuevo nodo
    }
    length++; //Incrementamos el contador de nodos;
}
//Eliminar la lista
template <typename T>
void List<T>::deleteList(){
    first=last=pointer=NULL;
    length=0;
}
//Eliminar el primer nado
template <typename T>
void List<T>::deleteFirst(){
    if(!isEmpty()){ //Si la lista NO está vacía
        if (first==last){ //Si la lista tiene solo un elemento
            deleteList();
        }else{ //La lista tiene mas de 1 elemento
            first=first->next;
            length--; //Decrementamos el contador de nodos;
        }
    }
}
//Eliminar al último nodo
template <typename T>
void List<T>::deleteLast(){
    if(!isEmpty()){//Si la liasta NO está vacía
        if (first==last){ //Si la lista tiene solo un elemento
            deleteList();
        }else{ //L lista tiene mas de un elemento
            pointer=first; //pointer apunta al primer nodo
            while(pointer->next!=last){ //Mientras que el nodo siugiente de pointer sea diferente al último
                pointer=pointer->next; //avanzamos pointer a la siguiente posición
            }
            //En este punto llegamos a la penúltimo nodo de la lista
            last=pointer; //Apuntampos last al penúltimo nodo
            last->next=pointer=NULL; // el apuntador next del "nuevo" último nodo apunta a nulo, al igual que pointer;
            length--; //Decrementamos el contador de nodos;
        }
    }
}
//Eliminar un nodo
template <typename T>
void List<T>::deleteNode(T d){
    if(!isEmpty()){
        pointer=first;
        if (pointer->data==d){//Si el elemento buscado es el primero
            deleteFirst();
        }else{
            do{
                if(pointer->next->data==d){//Si el dato del nodo siguiente es el elemento buscado
                    pointer->next=pointer->next->next;
                    length--;
                    pointer=last;
                }else{
                    pointer=pointer->next;
                }
            }while(pointer!=last);
        }
    }
}

template <typename T>
void List<T>::showList(){
    if (!isEmpty()){//Si la lista no está vacía
        pointer=first; //Colocamos pointer en el primer nodo
        do{
            pointer->print(); //Imprime el contenido del nodo
            pointer=pointer->next; //Avanza al siguiente nodo
        }while(pointer); //Mientras que pointer no sea NULL
        std::cout<<"NULL\n";
    }else{
        std::cout<<"Lista vacía\n";
    }
}
template <typename T>
void List<T>::showListbyAddress(){
    if (!isEmpty()){//Si la lista no está vacía
        pointer=first; //Colocamos pointer en el primer nodo
        do{
            std::cout<< pointer <<"->"; //Imprime la dirección del nodo
            pointer=pointer->next; //Avanza al siguiente nodo
        }while(pointer); //Mientras que pointer no sea NULL
        std::cout<<"NULL\n";
    }else{
        std::cout<<"Lista vacía\n";
    }
}


