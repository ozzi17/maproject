#include <iostream> 
#include "paleta.h"
#include "imagem.h"
#include "terreno.h"
int main(){
   /*
   Paleta paletas; 

    //paletas.Leitura("cores.txt");
    //Cor cor1 = paletas.ConsultaCor(0.518519);
    //std::cout << cor1.R << " " << cor1.G << " " << cor1.B;
    //int larguraa, alturaa;
    

    //std::cout << "digite a largura e altura da imagem: " << std::endl;
    //std::cin >> larguraa >> alturaa;
    Imagem img(100, 100);

    //int consultaa, consultab;

    //std::cout << "digite as coordenadas do pixel: ";
    //std::cin >> consultaa >> consultab;
    std::cout << img.consultaPixel(consultaa, consultab).R << " ";
    std::cout << img.consultaPixel(consultaa, consultab).G << " ";
    std::cout << img.consultaPixel(consultaa, consultab).B << " ";
    

    for (int i = 0; i < 33; i++)
    {
        for (int j = 0; j < 100; j++)
        {
            img.defineCor(i, j, 255, 0, 0);
        }
        
    }

    for (int i = 33; i < 66; i++)
    {
        for (int j = 0; j < 100; j++)
        {
            img.defineCor(i, j, 255, 255, 255);
        }
        
    }

    for (int i = 66; i < 100; i++)
    {
        for (int j = 0; j < 100; j++)
        {
            img.defineCor(i, j, 0, 0, 255);
        }
        
    }


    img.salvaPPM();

    //img.defineCor(consultaa, consultab, 255, 255, 255);
    */

    Paleta paletas;
    paletas.Leitura("cores.txt");

    

    std::cout << "digite o N e a rugosidade: ";
    int N; std::cin >> N;
    int rugosidade; std::cin >> rugosidade;
    MapaAltitudes baubau(N, rugosidade);

    baubau.matrizSsalva();


} 

