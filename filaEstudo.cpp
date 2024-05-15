#include<iostream>
using namespace std;
#define MAX 99999

typedef struct _fila{

    int v[MAX];
    int begin = 0;
    int fim = 0;

} Fila;


void enqueue(Fila *fila, int valor){ //função para enfileirar

    fila->v[fila->fim] = valor; //aqui pegamos o fim do vetor/fila e colocamos o valor, pois na fila qualquer valor que entra vai para o "Ultimo lugar" (fim da fila)
    fila->fim++; //depois incrementamos fim porque o fim da fila tem que se manter sendo sempre um a mais do que o vetor do ultimo valor adicionado

}

int dequeue(Fila *fila){ //função para desenfileirar do tipo int para ter um retorno e fazer o valor sair da fila

    int x = fila->v[fila->begin]; //declaramos uma variavel para receber o valor que vai ser desenfileirado (o valor é sair é sempre o primeiro da fila, ou seja, sempre o begin)
    
    fila->begin++; //incrementamos begin para que o proximo valor da fila seja o começo da fila
    return x;
}

bool isEmpty(Fila *fila){
    return fila->begin == fila->fim; //verificamos se o begin e o fim são iguais, pois se forem iguais significa que a fila está vazia
}

float media_fila(Fila *fila){
    float soma = 0;
    int i = 0;
    for (i = 0; i <= fila->fim-1; i++){
        soma += fila->v[fila->begin + i];
    }

    float media = 0;
    media = soma / i;

    return media;
}

int main(){



}