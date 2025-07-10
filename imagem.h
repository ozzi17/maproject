#ifndef IMAGEM_H
#define IMAGEM_H

#include <iostream>
#include <fstream>
#include "paleta.h"


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

  void defineCor(int larg, int alt, int r, int g, int b);

  void salvaPPM();
};



#endif
