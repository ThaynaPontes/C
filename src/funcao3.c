#include <stdio.h>
#include "calculos.h"

int main(){
    int valores[] = {5,23,5,7,10,4,12};
    printf("O resultado da soma é %d\n" ,somaArray(valores,7));
    printf("O resultado da média é %d\n",mediaArray(valores,7));
    printf("O maior valor é %d\n", maiorvalor(valores, 7));

    return 0;
}