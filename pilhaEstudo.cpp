#include<iostream>
using namespace std;
#define MAX 9999


typedef struct _pilha{

    int v[MAX];
    int topo;


} Pilha;

void criar_pilha(Pilha &p){

    p.topo = -1; //iniciamos a pilha definindo o valor do topo como -1 (é um padrão dentre as pilhas o -1 significar que o topo está vazio)

}

bool isFull(const Pilha &v){

    return v.topo == MAX-1; //se o topo for igual a MAX-1 significa que a pilha está cheia, pois o numero de vetores que a pilha tem é MAX e vai de 0 a MAX-1

}

bool isEmpty(const Pilha &v){

    return v.topo == -1; //se o topo for -1 a pilha esta vazia
}


void push(Pilha &pilha, int valor){

    pilha.v[++pilha.topo] = valor; //acessamos o valor do topo seguinte, ja que o valor inicial de topo é -1 e deve começar no 0. Adicionamos um valor para o novo topo da pilha.
    
}

void pop(Pilha &pilha){

    if(isEmpty(pilha))
        cout << "Erro!! A pilha já está vazia!!!" << endl;
    pilha.topo--; //remove o ultimo valor adicionado
}

void inverter(Pilha &p, int tamanho){

    int *temp = new int[tamanho];

    for(int i = 0; i < tamanho; i++){
        temp[i] = p.v[p.topo-i];
    }

    for(int i = 0; i < tamanho; i++){
        p.v[i] = temp[i];

    }

    delete[] temp;
}


int main(){



}