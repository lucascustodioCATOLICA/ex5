#include <stdio.h>

int main() {
    int num;

    printf("Digite um numero: ");
    scanf("%d", &num);

    printf("\n");

    if(num == 5) {
        printf("O numero informado eh igual a 5");
    } else if(num == 200) {
        printf("O numero informado eh igual a 200");
    } else if(num == 400) {
        printf("O numero informado eh igual a 400");
    } else if(num > 500 && num < 1000) {
        printf("O numero informado esta no intervalo de 500 a 1000");
    } else {
        printf("O numero informado esta fora das validacoes programadas");
    }
    
    return 0;
}