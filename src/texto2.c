#include <stdio.h>

int main() {

    char nome [20];
    printf ("Digite seu nome e tecle Enter\n");
    //Foi necessario utilizar o colchetes para que o comando receba scanf receba toda a cadeia de caracteres. 
    //O elementos ^(circunflexo) foi usado para indicar onde começa o primeiro caracter. E comando \n, neste caso, 
    //está sendo usado para ler o espaço aplicado ao final é utilizado o caracter s(string).
    scanf ("%[^\n]s" ,&nome);
    printf ("Olá, %s,  Seja bem vindo\n" ,nome);





    return 0;
}
