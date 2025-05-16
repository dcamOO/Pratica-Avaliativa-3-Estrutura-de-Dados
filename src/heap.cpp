#include "../include/heap.hpp"
#include <iostream>

Heap::Heap(int maxsize){
    this->tamanho = 0;
    this->data = new int[maxsize];
}

Heap::~Heap(){
    delete[] data; 
}

void Heap::Inserir(int x){
    //insere elemento no final
    this->tamanho++;
    data[tamanho-1] = x;
    
    
    //reorganiza heap
    HeapifyPorBaixo(tamanho-1);
}
int Heap::Remover(){
    //troca elemento a ser removido com o último
    if(tamanho == 0){
        return 1;
    }

    int aux = data[tamanho-1];
    data[tamanho-1] = data[0];
    data[0] = aux;
    this->tamanho--;

    if(tamanho == 0){
        return 1;
    }

    //reorganiza heap
    HeapifyPorCima(tamanho-1);

    return 0;
}

//Retorna true caso o heap esteja vazio, false caso contrário.
bool Heap::Vazio(){
    //verifica se a raiz existe
    return this->tamanho == 0? true : false;
}

int Heap::GetAncestral(int posicao){
    return data[(posicao - 1) / 2];
}
int Heap::GetSucessorEsq(int posicao){
    return data[posicao*2+1];
}
int Heap::GetSucessorDir(int posicao){
    return data[posicao*2+2];
}

void Heap::HeapifyPorBaixo(int posicao){
    if(GetAncestral(posicao) > data[posicao]){
        //troca pai e filho de lugar
        int aux = data[posicao];
        data[posicao] = GetAncestral(posicao);
        data[(posicao - 1) / 2] = aux;

        //chama heapify denovo recursivamente
        HeapifyPorBaixo((posicao - 1) / 2);
    }
}
void Heap::HeapifyPorCima(int posicao){
    int e = GetSucessorEsq(posicao);
    int d = GetSucessorDir(posicao);
    int c = data[posicao];

    if(e < c || d < c){ //sucessores são menores?
        if(e <= d){ //qual sucessor é menor?
            int aux = e;
            e = c;
            c = aux;
            HeapifyPorCima(posicao*2+2);
        }else if(d < e){
            int aux = d;
            d = c;
            c = aux;
            HeapifyPorCima(posicao*2+1);
        }
    }
}