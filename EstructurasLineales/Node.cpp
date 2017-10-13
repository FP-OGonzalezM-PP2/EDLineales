//
//  Node.cpp
//  EstructurasLineales
//
//  Created by Paco Alvizo on 9/18/17.
//  Copyright © 2017 Paco Alvizo. All rights reserved.
//

#include "Node.hpp"

//Constructor por defecto
template <typename T>
Node<T>::Node(){
    next=NULL;
}

//Consturctor con un elemento
template <typename T>
Node<T>::Node(T d){
    data=d;
    next=NULL;
}

//Imprimir Nodo
template <typename T> void
Node <T>::print(){
    std::cout << data << "->";
}

/*template <typename T> void
Node <T>::print(){
    data->
}*/

//Imprimir Nodo para pila
template <typename T> void
Node <T>::printS(){
    std::cout << data << endl <<"↓"<< endl;
}

//Destructor
template <typename T>
Node<T>::~Node(){}
