//
//  main.cpp
//  EstructurasLineales
//
//  Created by Paco Alvizo on 9/18/17.
//  Copyright © 2017 Paco Alvizo. All rights reserved.
//

#include <iostream>
#include <string>
#include "DLList.cpp"
using namespace std;



int main(int argc, const char * argv[]) {
    
    DLList<string> Lista = *new DLList<string>();
    
    Lista.showList();
    Lista.insertFirst("A");
    Lista.showList();
    Lista.insertFirst("B");
    Lista.showList();
    Lista.insertLast("C");
    Lista.insertLast("C");
    Lista.showList();
    Lista.insertLast("D");
    Lista.showList();
    Lista.showListbyAddress();
    Lista.deleteNode("C");
    Lista.showList();
    Lista.insertFirst("E");
    Lista.showList();
    Lista.deleteLast();
    Lista.showList();
    Lista.deleteFirst();
    Lista.showList();
    Lista.deleteList();
    Lista.showList();
    
    /*
    
    Stack<string> pila = *new Stack<string>();
    
    std::cout<<pila.getSize()<<"\n";
    pila.push(1);
    pila.push(10);
    //std::cout<<pila.getSize()<<"\n";
    //std::cout<<pila.getTop().print()<<"\n";
    
    */
    return 0;
}
