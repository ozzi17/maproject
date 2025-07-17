#include <iostream> 
#include "paleta.h"
#include "imagem.h"
#include "terreno.h"
int main(){
   
    std::string nomeArquivo;
    std::cout << "digite o nome do arquivo a ser lido: " << std::endl;
    getline(std::cin, nomeArquivo);

    std::cout << "digite o N e a rugosidade: ";
    int N; std::cin >> N;
    double rugosidade; std::cin >> rugosidade;

    MapaAltitudes picture(N, rugosidade);
   
    Paleta paletas;
    paletas.Leitura(nomeArquivo);

    
    Imagem img = picture.retornaImg(paletas);
    img.salvaPPM();

    return 0;
} 

