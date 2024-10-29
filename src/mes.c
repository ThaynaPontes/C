#include <stdio.h>

int main() {

    int mes;
    printf ("Digite o numero esaiba qual mês do ano está e tecle Enter\n");
    scanf ("%d" , &mes);

if (mes == 1 || mes==2 || mes==3)
{
    printf("Este mes é verão");
}

else if (mes==4 || mes==5 || mes==6) {
    
    printf ("Este mes é outono");
}

else if (mes==7 || mes==8 || mes==9){
    
    printf ("Este mes é inverno");
 }

 else if (mes==10 || mes==11 || mes==12){
    printf ("Este mes é primavera");
 }
printf ("\n");

return 0;

}
