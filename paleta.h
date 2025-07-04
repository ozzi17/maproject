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

     void Leitura(std::string nomeArquivo)
     {
        
     std:: ifstream arquivo(nomeArquivo);
  
     if(!arquivo.is_open())
     {
       std::cout << "Erro ao abrir o arquivo!" << std::endl;
     }

     arquivo >> quantidade;

     for(int i = 0; i < quantidade; ++i)
     {
      arquivo >> valor[i]>> cores[i].R >> cores[i].G >> cores[i].B;
     }

      arquivo.close();
     }

     Cor ConsultaCor(double value)
     {
      if (quantidade == 0)
      {
        return {0, 0, 0};
      }
      
      for (int i = 0; i < quantidade - 1; i++)
      {
        if (value >= valor[i] && value < valor[i+1])
        {
          return cores[i];
        }
      }
      return cores[quantidade - 1];
     }
};

#endif