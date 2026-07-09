//
//  Entidade.hpp
//  
//
//  Created by Edison Shiobara on 08/07/26.
//

#ifndef Entidade_hpp
#define Entidade_hpp

#include <stdio.h>
#include "Ente.hpp"

class Entidade:public Ente{
protected:
    CoordF pos;
    void salvarDataBuffer();
public:
    Entidade();
    virtual ~Entidade();
    
    virtual void executar()=0;
    virtual void salvar()=0;
    //como os dados sao protexted, nao vou precisar fazer um set e get posicao
    
    
    
};

#endif /* Entidade_hpp */
