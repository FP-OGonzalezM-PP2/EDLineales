//
//  Edge.hpp
//  EstructurasLineales
//
//  Created by Paco Alvizo on 11/15/17.
//  Copyright © 2017 Paco Alvizo. All rights reserved.
//

#ifndef Edge_hpp
#define Edge_hpp

#include <string>

class Edge{
private:
    int dest;
    double weight;
    
public:
    //Constructores
    Edge(int dest);
    Edge(int dest, double weight);
    
    int getDest();
    double getWeight();
    std::string to_string();
    
};

#endif /* Edge_hpp */
