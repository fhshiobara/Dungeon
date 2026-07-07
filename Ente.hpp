//
//  Ente.hpp
//  
//
//  Created by Edison Shiobara on 07/07/26.
//

#ifndef Ente_hpp
#define Ente_hpp

#include <stdio.h>
class Ente{
protected:
    int id;
    static Gerenciador_Grafico* pGG;
    Figura* pFig;
public:
    Ente(){}
    
    virtual ~Ente();
    
    virtual void executar()=0;
    
    void desenhar();
    
    void setGG(Gerenciador_Grafico* pG)static;
    
    void setId(int i);
};

#endif /* Ente_hpp */
