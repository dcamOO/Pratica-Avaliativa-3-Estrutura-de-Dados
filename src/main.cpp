#include "../include/heap.hpp"
#include <iostream>
#include <string>
#include <sstream>
#include <vector>

int main(){

    int tamanho;

    std::cout << "Insira o tamanho do Heap: ";
    std::cin >> tamanho;
    Heap heap = Heap(tamanho);
    std::cout << "tamanho escolhido: " << tamanho << std::endl;

    std::cout << "Insira os " << tamanho << " elementos: " << std::endl;
    
    std::cin.ignore();
    std::string linha;
    std::getline(std::cin, linha);

    std::stringstream streamEntradas(linha);

    int e;
    while(streamEntradas >> e){
        heap.Inserir(e);
    }

    while(!heap.Vazio()){
        heap.Remover();
    }
    std::cout << std::endl;

    return 0;
}
