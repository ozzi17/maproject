#include <iostream> 
#include "paleta.h"
int main(){
   Paleta paletas; 

    //paletas.Leitura("cores.txt");
    //Cor cor1 = paletas.ConsultaCor(0.518519);
    //std::cout << cor1.R << " " << cor1.G << " " << cor1.B;
    int larguraa, alturaa;
    

    std::cout << "digite a largura e altura da imagem: " << std::endl;
    std::cin >> larguraa >> alturaa;
    Imagem img(larguraa, alturaa);

    int consultaa, consultab;

    std::cout << "digite as coordenadas do pixel: ";
    std::cin >> consultaa >> consultab;
    std::cout << img.consultaPixel(consultaa, consultab).R << " ";
    std::cout << img.consultaPixel(consultaa, consultab).G << " ";
    std::cout << img.consultaPixel(consultaa, consultab).B << " ";

} 

