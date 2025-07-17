#ifndef TERRENO_H
#define TERRENO_H

#include <iostream> 
#include <cstdlib>
#include <ctime>
#include <cmath>
#include "paleta.h"
#include "imagem.h"


class MapaAltitudes 
{
private:
    int N;
    float rugosidade;
    int tamanho;
    int** matriz;
  
public:
    // Função de inicialização do mapa
    void gerarMapa();

    // Construtor da classe
    MapaAltitudes(int N, float rugosidade)
        : N(N), rugosidade(rugosidade) 
        {
        tamanho = (1 << N) + 1;  // 2^N + 1
        matriz = new int*[tamanho];
        for (int i = 0; i < tamanho; ++i) 
        {
            matriz[i] = new int[tamanho]();
        }

        srand(time(0));  // Inicializar o gerador de números aleatórios
        gerarMapa();
    }

    // Destruidor da classe
    ~MapaAltitudes() 
    {
        for (int i = 0; i < tamanho; ++i) 
        {
            delete[] matriz[i];
        }
        delete[] matriz;
    }

    /*
    salva a matriz de alturas em um arquivo ppm em tons de cinza
    @param */



    Imagem retornaImg(Paleta paletas);
};

#endif
