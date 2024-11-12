#include <stdio.h>

// * é o ponteiro.//
void dados (int *x, int *y){
     int soma = *x + *y;
     printf("x está em %p e y está em %p\n ", x,y); //"%p" está mostrando o end.//
     printf("O resultado é %d\n" ,soma);
     //"Ponteiro" guarda o endereço de memória, já o "&" apenas mostra o end.//
}

int main(){
    int a = 10;
    int b = 5;
    dados(&a , &b); //colocando "&" passa a transferir o end para o "*x/*y".//
    printf("a está em %p e b está em %p\n" ,&a,&b);
    return 0;
}