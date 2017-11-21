//
//  Graph.cpp
//  EstructurasLineales
//
//  Created by Paco Alvizo on 11/15/17.
//  Copyright © 2017 Paco Alvizo. All rights reserved.
//

#include "Graph.hpp"
#include <iostream>

//Constructor
Graph::Graph(int v){
    this->v=v;
    this->e=0;
    g = new List<Edge>*[v+1];

    for(int i=1; i<v+1; i++){
        g[i]= new List<Edge>(); //Instancía una lista en cada elemento del arreglo
    }
}

int Graph::getEdges(){
    return this->e;
}

int Graph::getVertices(){
    return this->v;
}

bool Graph::isEdge(int s, int d){
    List<Edge> l = *this->g[s];
    Node<Edge> *p = l.first;
    for(int i=0;i<l.length;i++){
        if (d == p -> data.getDest()){
            return true;
        }
        p = p -> next;
    }
    return false;

}

double Graph::getEWeight(int s, int d){
    List<Edge> l = *this->g[s];
    Node<Edge> *p = l.first;
    for(int i=0;i<l.length;i++){
        if (d == p -> data.getDest()){
            return p -> data.getWeight();
        }
        p = p -> next;
    }
    return -1.0;
}

void Graph::insertE(int s, int d, double w){
    if(!isEdge(s,d)){
        this->g[s]->insertLast(*new Edge(d,w));
        this->e++;
    }else{
        std::cout<<"No es posible insertar el elemento, ("<< s <<","<< d<< ") ya se encuentra en el grafo"<<endl;
    }
}

void Graph::insertE(int s, int d){
    insertE(s,d,0.0);
}

List<Edge> Graph::adjacentTo(int s){
    return *this->g[s];
}

std::string Graph::to_string(){
    std::string r="";
    for (int i=1; i < this->v+1; i++){
        r += "\nVértice "+ std::to_string(i)+" ";
        List<Edge> lp = adjacentTo(i);
        if (lp.isEmpty()){
            r += "sin Adyacentes.\n\n";
        }else{
            r += "con Adyacentes:\n";
            lp.pointer=lp.first;
            for (int j=1; j<=lp.length; j++){
                r += lp.pointer->data.to_string()+"\n";
                lp.pointer=lp.pointer->next;
            }
        }
    }
    return r;
}

std::string Graph::BFS(int origin){
    bool visited [v+1]; //Matriz que indica los nodos visitados
    std::string path="\nRecorrido BFS\n";
    Queue<int> q = *new Queue<int>();//Cola donde iremos guardando las visitas
    path += std::to_string(origin) + "->";
    q.enqueue(origin); //Insertamos el primer nodo enviado
    visited[origin]=true; //Indicamos que ya fue visitado
    while (!q.isEmpty()){ //Mientras que la cola no esté vaía
        List<Edge> l = adjacentTo(q.dequeue()); //obtenemos los adyacentes del nodo visitado y lo sacamos de la cola;
        l.pointer=l.first; //inicializamos el puntero de la lista en la primer posición.
        while(l.pointer!=NULL){ //Recorremos la lista de adyacencia
            if(!visited[l.pointer->data.getDest()]){ //Preguntamos si ya fue visitado
                //Si no fue visitado, obtenemos el nodo adyacente
                int a=l.pointer->data.getDest();
                visited[a]=true;
                q.enqueue(a);
                path += std::to_string(a) +"->";
            }
            l.pointer=l.pointer->next;
        }
    }
    return path += "\n";
}

std::string Graph::DFS(int origin){
    //Inicializamos las variables globales
    visited =new bool[v+1];
    return path="\nRecorrido DFS\n" + recursiveDFS(origin) +"\n";
}

std::string Graph::recursiveDFS(int origin){
    //Si nodo no ha sido visitado
    if (!visited[origin]){
        path += std::to_string(origin)+"->"; //Agregamos el nodo visitado a la trayectoria
        visited[origin]=true; //lo marcamos como visitado
        List<Edge> l = adjacentTo(origin); //Obtenemos su lista de adyacencia
        l.pointer=l.first; //Iniciamos el recorrido de la lista
        while(l.pointer!=NULL){ //mientras no lleguemos al final de la lista
            int a=l.pointer->data.getDest(); //obtenemos el adyacente
            recursiveDFS(a); //llamamos al método nuevamente con el adyacente
            l.pointer=l.pointer->next; //nos movemos al siguiente nodo
        }
    }
    return path; //devolvemos la trayectoria
}


