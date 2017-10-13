//
//  Contacto.hpp
//  EstructurasLineales
//
//  Created by Paco Alvizo on 10/9/17.
//  Copyright © 2017 Paco Alvizo. All rights reserved.
//

#ifndef Contacto_hpp
#define Contacto_hpp

#include <stdio.h>
#include <string>

class Contacto {
private:
    std::string nombre;
    std::string apellido;
    std::string correo;
    std::string tel;
public:
    Contacto();
    Contacto(std::string n, std::string a, std::string c, std::string t);
    ~Contacto();
    
    //std::string toStringDatos ();
};

#endif /* Contacto_hpp */
