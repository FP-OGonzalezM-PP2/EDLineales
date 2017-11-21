//
//  Edge.cpp
//  EstructurasLineales
//
//  Created by Paco Alvizo on 11/15/17.
//  Copyright © 2017 Paco Alvizo. All rights reserved.
//

#include "Edge.hpp"

Edge::Edge(int dest) {
    this->weight=0.0;
    this->dest=dest;
}

Edge::Edge(int dest, double weight) {
    this->dest=dest;
    this->weight=weight;
}

int Edge::getDest() {
    return this->dest;
}

double Edge::getWeight() {
    return this->weight;
}

std::string Edge::to_string(){
    return std::to_string(this->dest) +" ("+ std::to_string(this->weight )+")";
}
