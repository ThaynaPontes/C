#include <stdio.h>

int main(){
    FILE *arquivo;
    arquivo = fopen("files/texto.txt", "w"); 
    //"r"=(white) lê, "a" =(append) acrescenta, "w"(white) escrever// 
    //"fopen" retorna o ponteiro, retorna o "end. do aquivo".//
    //"modes" modelos de como vai abrir o arquivo.//
    fprintf(arquivo, "2025 chegando, Socorroo!");
    fclose(arquivo);
    printf("Criamos o arquivo\n");

    return 0;
}