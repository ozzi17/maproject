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
     /*
     lê um arquivo
     @param nomeArquivo nome do arquivo txt a ser lido
     @return nada, pois é um void*/
     void Leitura(std::string nomeArquivo);

     /*
     recebe um valor, no caso um altura, e retorna a cor correspondente
     @param value é o valor a ser buscado no arquivo
     @return a cor rgb correspondente ao valor inserido*/
     Cor ConsultaCor(double value);
};



#endif
