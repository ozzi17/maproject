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
      std::ofstream outputFile("figura.ppm");
      if (outputFile.is_open())
      {
        outputFile << "P3" << std::endl;
        outputFile << larg << " " << alt << std::endl;
        outputFile << "255" << std::endl;
        for (int i = 0; i < larg; i++)
        {
          for (int j = 0; j < alt; j++)
          {
            outputFile << pixels[i][j].R << " " << pixels[i][j].G << " " << pixels[i][j].B << std::endl;
          }
          
        }
        
      }
    }
