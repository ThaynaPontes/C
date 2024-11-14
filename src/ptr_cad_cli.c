#include <stdio.h>

void cadastro(char *nome, char *email, int *idade){
    FILE *arquivo;
    arquivo = fopen ("files/cad_cli.txt", "a");
    fprintf(arquivo,"Nome: %s\n",nome);
    fprintf(arquivo,"Email:%s\n",email);
    fprintf(arquivo,"Idade: %d\n",*idade);
    fprintf(arquivo,"-----------");
    fclose(arquivo);
}
int main(){
    char nome[30];
    char email [50];
    int idade;
    //array = grupo de dados, (nome e email) já tem o endereço de memoria, porem a (idade-variavel inteira) precisa ir buscar o end.//
    printf("Digite o seu nome e tecle Enter:\n");
    scanf("%[^\n]s", nome);

    printf("Digite o seu e-mail e tecle Enter:\n");
    scanf("%s", email);

    printf("Digite o sua idade e tecle Enter:\n");
    scanf("%d", &idade);

    cadastro(nome,email,&idade);
    printf("Cadastrou?\n");

    return 0;
}
