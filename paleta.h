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

class Imagem{
  
  Cor** pixels;

public:
  int larg, alt;
  Imagem() : larg(0), alt(0), pixels(nullptr) {}
  Imagem(int largura, int altura) : larg(largura), alt(altura) {
    pixels = new Cor*[larg];
    for (int i = 0; i < larg; ++i) {
      pixels[i] = new Cor[alt];
      pixels[i]->R = 0;
      pixels[i]->B = 0;
      pixels[i]->G = 0;
    }
  }

  ~Imagem() {
    for (int i = 0; i < larg; ++i) {
      delete[] pixels[i];
    }
    delete[] pixels;
  }

  Cor consultaPixel(int larg, int alt);

  void defineCor(int larg, int alt);
};

#endif