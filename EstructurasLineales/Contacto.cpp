//
//  Contacto.cpp
//  EstructurasLineales
//
//  Created by Paco Alvizo on 10/9/17.
//  Copyright © 2017 Paco Alvizo. All rights reserved.
//

#include "Contacto.hpp"

Contacto::Contacto(){
    nombre= "";
    apellido = "";
    correo = "";
    tel = "";
}


Contacto::Contacto(std::string n, std::string a, std::string c, std::string t){
    nombre= n;
    apellido = a;
    correo = c;
    tel = t;
}

Contacto::~Contacto(){}

/*
std::string Contacto::toStringDatos(){
    std::string d = nombre + " " + apellido + " " + correo + " " + tel;
    return d;
}
*/
