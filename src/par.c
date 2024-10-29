/* Este programa obtem um numero do usuario e diz se é par, exibindo uma mensagem em tela*/

#include <stdio.h>

int main() {
    int n;
    printf ("digite um número e tecle Enter\n");
    scanf("%d" ,&n);

    if( n % 2 ==0) {
        printf("O valor %d é par\n" ,n);
    }
    return 0;
}