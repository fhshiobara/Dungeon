//
//  Obstaculo.hpp
//  
//
//  Created by Edison Shiobara on 08/07/26.
//

#ifndef Obstaculo_hpp
#define Obstaculo_hpp

#include <stdio.h>
#include "Entidade.hpp"
class Jogador;
class Obstaculo:public Entidade{
protected:
    bool danoso;
public:
    Obstaculo();
    ~Obstaculo();
    void salvarDataBuffer();
    virtual void executar()=0;
    virtual void salvar()=0;
    virtual void obstaculizat(Jogador* pJog)=0;
};

#endif /* Obstaculo_hpp */
