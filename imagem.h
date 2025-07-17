#ifndef IMAGEM_H
#define IMAGEM_H

#include <iostream>
#include <fstream>
#include "paleta.h"


class Imagem{
  
  Cor** pixels;

public:
  int larg, alt;
  
  //construtor padrão da classe
  Imagem() : larg(0), alt(0), pixels(nullptr) {} 

  //construtor paramétrico da classe
  Imagem(int largura, int altura) : larg(largura), alt(altura) 
  {
    pixels = new Cor*[larg];
    for (int i = 0; i < larg; ++i) 
    {
        pixels[i] = new Cor[alt];
        for (int j = 0; j < alt; ++j) 
        {
            pixels[i][j].R = 0;
            pixels[i][j].G = 0;
            pixels[i][j].B = 0;
        }
    }
  }
  
  //destrutor da classe
  ~Imagem() {
    for (int i = 0; i < larg; ++i)
    {
      delete[] pixels[i];
    }
    delete[] pixels;
  }

  /*
  busca os valores rgb de uma determinada coordenada, serve para informar a outras funções
  os valores rgb necessitados
  @param larg, alt são as coordenadas da matriz de pixels
  @return o tipo Cor, ou seja, os valores rgb solicitados*/
  Cor consultaPixel(int larg, int alt);

  /*
  define ou altera os valores rgb de determinada coordenada da matriz de alturas ou pixels
  @param larg, alt são as coordenadas da matriz, r, g e b são os valores a serem colocados no pixel
  da coordenada
  @return nada, pois é uma void */
  void defineCor(int larg, int alt, int r, int g, int b);

  /*
  cria um arquivo ppm e adiciona as informações da matriz de pixels criada
  @param a função não recebe parâmetros específicos
  @return nada, pois é uma void*/
  void salvaPPM();
};



#endif
