#include<iostream>
using namespace std;

typedef struct _no{

    struct _no *proximo_no;
    int valor;

} No;

void imprimir(No *inicio){

    No *atual = inicio;

    while(atual != nullptr){
        cout << atual->valor << " ";
        atual = atual->proximo_no;
    }

    cout << endl;
}


void novoElemento(No *inicio, int num){

    No *novoNo = new No();
    novoNo->valor = num;
    novoNo->proximo_no = inicio;
    inicio = novoNo;

}


int main(){


}