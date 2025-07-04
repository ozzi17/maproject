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
    int valor[100]; 
   
     public: 

     void Leitura(std::string nomeArquivo){
        
     std:: ifstream arquivo(nomeArquivo);
  
     if(!arquivo.is_open()){
       std::cout << "Erro ao abrir o arquivo!" << std::endl;
     }
  
     int N;

     arquivo >> N;

     for(int i = 0; i < N; ++i){
      arquivo >> valor[i]>> cores[i].R >> cores[i].G >> cores[i].B;
     }

      arquivo.close();
     }

     Cor ConsultaCor(int value){
      for (int i = 0; i < 100; i++)
      {
        if (value >= valor[i] && value < valor[i+1])
        {
          return cores[i];
        }
        
      }
      
     }
};  


