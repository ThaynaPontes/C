#include <stdio.h>

int main(){
    int placa;
    printf ("Digite o numero final da placa do seu veiculo e tecle Enter\n");
    scanf ("%d" , &placa);

if (placa==1 || placa == 2){
    printf("Estes veiculo não de circular na Segunda-Feira");
}

else if (placa==3 || placa==4) {
    printf ("Este veiculo não pode circular na Terça-feira");
}

else if (placa==5 || placa==6){
    printf ("Este veiculo não pode circular na Terça-feira");
}

else {
    printf("Numero de placa invalido");
}

return 0;

}

