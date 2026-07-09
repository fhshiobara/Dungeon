//
//  Personagem.hpp
//  
//
//  Created by Edison Shiobara on 09/07/26.
//

#ifndef Personagem_hpp
#define Personagem_hpp

#include <stdio.h>
#include "Entidade.hpp"

class Personagem:public Entidade{
protected:
    int num_vidas;
public:
    Personagem();
    ~Personagem();
    void salvarDataBuffer()=0;
    virtual void executar()=0;
    virtual void salvar()=0;
    virtual void mover()=0;
};

#endif /* Personagem_hpp */
