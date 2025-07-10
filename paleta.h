#ifndef PALETA_H
#define PALETA_H

#include <fstream>
#include <iostream>

class Cor{
    
  public:   
  int R;
  int G; 
  int B;

};    

 class Paleta{

    int quantidade;
    Cor cores[100]; 
    double valor[100]; 
   
     public: 

     void Leitura(std::string nomeArquivo);

     Cor ConsultaCor(double value);
};



#endif
