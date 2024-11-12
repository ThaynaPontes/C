#include <stdio.h>

int main(){
    //Declaração da variável idade
    int idade = 18;
    //declaração de variável de ponteiro
    int *pidade = &idade;
    printf("A idade é %d e está em %p e %p com o valor %d\n",idade, &idade,pidade, *pidade);
    //%d é o número (idade) e o %p é o endereço de memória

    return 0;
}
