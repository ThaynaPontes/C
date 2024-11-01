#include <stdio.h>

int main() {
 int valores[] = {13,8,23,95,47,14,10,45,165};
    int soma =0 ; 
    int p;
    for (p = 0 ; p <= 8 ; p++){
         soma+=valores[p];
    }
       

printf ("%d\n" ,soma);
return 0;
}