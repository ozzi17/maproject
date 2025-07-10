#include <iostream>
#include <fstream>
#include "paleta.h"
#include "imagem.h"

  
    Cor Imagem::consultaPixel(int largura, int altura)
    {
      return pixels[largura][altura];
    }

    void Imagem::defineCor(int largura, int altura, int r, int g, int b)
    {
      pixels[largura][altura].R = r;
      pixels[largura][altura].G = g;
      pixels[largura][altura].B = b;
    }

    void Imagem::salvaPPM()
    {
      std::ofstream outputFile("teste.ppm");
      if (outputFile.is_open())
      {
        outputFile << "P3" << std::endl;
        outputFile << "100 100" << std::endl;
        outputFile << "255" << std::endl;
        for (int i = 0; i < 100; i++)
        {
          for (int j = 0; j < 100; j++)
          {
            outputFile << pixels[i][j].R << " " << pixels[i][j].G << " " << pixels[i][j].B << std::endl;
          }
          
        }
        
      }
    }
