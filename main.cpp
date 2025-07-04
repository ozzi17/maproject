#include <iostream> 
#include "paleta.h"
int main(){
   Paleta paletas; 

    paletas.Leitura("cores.txt");
    int teste;
    Cor cor1 = paletas.ConsultaCor(0.518519);
    std::cout << cor1.R << " " << cor1.G << " " << cor1.B;
} 

