#include <iostream>
#include "terreno.h"
#include <fstream>

void MapaAltitudes::gerarMapa() {
        // Inicializar os 4 cantos com valores aleatórios
        matriz[0][0] = rand() % 255;
        matriz[0][tamanho - 1] = rand() % 255;
        matriz[tamanho - 1][0] = rand() % 255;
        matriz[tamanho - 1][tamanho - 1] = rand() % 255;



        // Algoritmo Diamond-Square
        int passo = tamanho - 1;
        float amplitude = rugosidade * tamanho;

        while (passo > 1) 
        {
            // Etapa Diamond
            for (int y = 0; y < tamanho - 1; y += passo) 
            {
                for (int x = 0; x < tamanho - 1; x += passo) 
                {
                    float meio = (matriz[y][x] + matriz[y + passo][x] + matriz[y][x + passo] + matriz[y + passo][x + passo]) / 4.0;
                    matriz[y + passo / 2][x + passo / 2] = meio + (rand() % 1000) / 1000.0 * amplitude - amplitude / 2;
                }
            }

            // Etapa Square
            for (int y = 0; y < tamanho; y += passo / 2) 
            {
                for (int x = (y + passo / 2) % passo; x < tamanho; x += passo) 
                {
                    float soma = 0.0;
                    int count = 0;

                    if (x - passo / 2 >= 0) { soma += matriz[y][x - passo / 2]; count++; }
                    if (x + passo / 2 < tamanho) { soma += matriz[y][x + passo / 2]; count++; }
                    if (y - passo / 2 >= 0) { soma += matriz[y - passo / 2][x]; count++; }
                    if (y + passo / 2 < tamanho) { soma += matriz[y + passo / 2][x]; count++; }

                    matriz[y][x] = soma / count + (rand() % 1000) / 1000.0 * amplitude - amplitude / 2;
                }
            }

            // Reduzir a amplitude
            amplitude *= log(rugosidade);
            passo /= 2;
        }
    }

Imagem MapaAltitudes::retornaImg(Paleta paletas)
{
    Imagem relevo(tamanho, tamanho);
    for (int i = 0; i < tamanho; i++)
    {
        for (int j = 0; j < tamanho; j++)
        {
            if(i > 0 && j > 0 && matriz[i][j] < matriz[i-1][j-1])
            {

                relevo.defineCor(i, j, paletas.ConsultaCor(matriz[i][j]).R*0.5, paletas.ConsultaCor(matriz[i][j]).G*0.5, 
                paletas.ConsultaCor(matriz[i][j]).B*0.5);
            } 
            else 
            {
            relevo.defineCor(i, j, paletas.ConsultaCor(matriz[i][j]).R, paletas.ConsultaCor(matriz[i][j]).G, 
            paletas.ConsultaCor(matriz[i][j]).B);
            }
        }
        
    }
    
    return relevo;
}
