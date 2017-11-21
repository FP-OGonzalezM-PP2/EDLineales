//
//  main.cpp
//  EstructurasLineales
//
//  Created by Paco Alvizo on 9/18/17.
//  Copyright © 2017 Paco Alvizo. All rights reserved.
//

#include <iostream>
#include "Graph.hpp"

using namespace std;



int main(int argc, const char * argv[]) {
    Graph grafo = *new Graph(6);
    
    grafo.insertE(1, 2, 10.3);
    grafo.insertE(2, 3, 3.5);
    grafo.insertE(3, 1, 7.33);
    grafo.insertE(1, 4, 4.89);
    grafo.insertE(4, 3, 1.9);
    grafo.insertE(4, 4, 0.0);
    grafo.insertE(2, 1, 3.0);
    grafo.insertE(3, 5, 7.0);
    grafo.insertE(5, 2, 8.0);
    grafo.insertE(3, 6, 1.0);
    grafo.insertE(6, 4, 0.9);
    
    std::cout << grafo.to_string();
    std::cout << grafo.DFS(1);
    std::cout << grafo.BFS(1);
    
    return 0;
}
