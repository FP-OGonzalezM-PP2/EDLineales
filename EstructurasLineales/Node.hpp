//
//  Node.hpp
//  EstructurasLineales
//
//  Created by Paco Alvizo on 9/18/17.
//  Copyright © 2017 Paco Alvizo. All rights reserved.
//

#ifndef Node_hpp
#define Node_hpp
#include <stdio.h>
#include <iostream>
using namespace std;

//Declaración de la clase

template <class T> class Node{
public:
    //Atributos
    Node *next; //Apuntador a siguiente nodo.
    T data; //Dato genérico.
    
    //Declaración de constructores.
    Node();
    Node(T d);
    //Declaración de desctructor.
    ~Node();
    
    //Declaración Método mostrar
    void print();
    void printS();
};

#endif /* Node_hpp */
