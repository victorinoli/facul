#include "stdio.h"

int main(){

    int numero;
    int contador = 0;

    scanf("%d", &numero);

    if(numero<1000){
        printf("o numero precisa ser maior que 1000");
        scanf("%d", &numero);
    }

    for(numero ;numero>=10; numero = numero/10){

        int i = numero % 10;
        if( i == 0 ){
            contador++;
        }

    }
    printf("%d", contador);

    return 0;
}