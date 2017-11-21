//
//  Graph.hpp
//  EstructurasLineales
//
//  Created by Paco Alvizo on 11/15/17.
//  Copyright © 2017 Paco Alvizo. All rights reserved.
//

#ifndef Graph_hpp
#define Graph_hpp


#include "Edge.hpp"
#include "List.cpp"
#include "Stack.cpp"
#include "Queue.cpp"
#include <string>


class Graph{
private:
    //Atributos
    int v,e; //Vertices y aristas
    List <Edge> **g; //apuntador a un arreglo de objetos (listas)
    //Para uso de DFS
    bool *visited;
    std::string path;
    
    std::string recursiveDFS(int origin);
    
public:
    //Métodos
    Graph(int v);                    //Constructor
    int getEdges();               //Número de aristas
    int getVertices();
    bool isEdge(int s, int d);  //Valida si existe la arista
    double getEWeight(int s, int d); //Devuelve el peso de la arista
    void insertE(int s, int d); //Inserta una arista sin peso
    void insertE(int s, int d, double w); //Inserta una arista con peso
    List<Edge> adjacentTo(int s); //Devuelve el vértice adjacente
    std::string to_string(); //Devuelve el grafo en una cadena
    std::string BFS(int origin);
    std::string DFS(int origin);
    
    
};

#endif /* Graph_hpp */
