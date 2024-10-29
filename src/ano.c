#include <stdio.h>

int main() {

    int ano;
    printf("Digite o ano e saiba se é bissexto ou não e tecle Enter\n");
    scanf ("%d" , &ano);

    if (ano % 4 ==0) {
        printf("O ano %d é bissexto\n" ,ano);
    }
    else {
        printf ("O ano %d não é\n ,ano");
    }

    return 0;

}