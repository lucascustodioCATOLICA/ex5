#include <stdio.h>
#include <math.h>

int main() {
    int num;

    printf("Digite um numero: ");
    scanf("%d", &num);
    printf("\n");

    if(num >= 0) {
        printf("RAIZ QUADRADA: %.2f",  sqrt(num));
    } else {
        printf("POTENCIA: %.2f",  pow(num, 2));
    }
}