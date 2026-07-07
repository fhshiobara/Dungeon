//
//  Ente.cpp
//  
//
//  Created by Edison Shiobara on 07/07/26.
//

#include "Ente.hpp"
//precisarei mudar o pGG para o getInstance() assim qu estiver pronto
Ente::Ente():id(0),pGG(NULL),pFig(NULL){}

Ente::~Ente(){
    if(pFig){
        delete pFig;
        pFig = NULL;
    }
}

void Ente::setId(int i){id = i;}

virtual void Ente::executar()=0;

void Ente::desenhar(){}

void Ente::setGG(GerenciadorGrafico* pG)static{
    if(pG){
        pGG = pG;
    }
}


