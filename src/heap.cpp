#include "heap.hpp"
#include <iostream>

Heap::Heap(int maxsize){
    /*
    vetor heap[maxsize];
    */
}

Heap::~Heap(){
/*
    troca primeiro e último valor
    remove o último
    heapify
    troca o primeiro e último...
*/
}

void Heap::Inserir(int x){
    /*
    insere elemento no final
    heapify
    */
}
int Heap::Remover(){
/*
troca elemento a ser removido com o último
heapify
*/
}

//Retorna true caso o heap esteja vazio, false caso contrário.
bool Heap::Vazio(){
    /*
    verifica se raiz existe
    */
}

int Heap::GetAncestral(int posicao){
    /*
    return vetor[(posicao - 1) / 2];
    */
}
int Heap::GetSucessorEsq(int posicao){
    /*
    return vetor[posicao*2+1];
    */
}
int Heap::GetSucessorDir(int posicao){
    /*
    return vetor[posicao*2+2];
    */
}


void Heap::HeapifyPorBaixo(int posicao){
/*
    if(GetAncestral(posicao) > vetor[posicao]){
        swap ancestral e vetor[posicao];
        HeapifyPorBaixo((posicao - 1) / 2);
    }
*/
}
void Heap::HeapifyPorCima(int posicao){
    /*
    GetSucessorEsq(posicao) = e;
    GetSucessorDir(posicao) = d;
    vetor[posicao] = c;

    if(e < c || d < c){
        e < d? swap(e,c) : swap(d,c);
    }
    */
}