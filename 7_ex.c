#include <stdio.h>

int main() {
    float notas[3];
    int size_notas = sizeof(notas) / sizeof(float);

    for (int i = 1; i <= size_notas; i++) {
        float nota;
        printf("Digite a nota da %d prova: ", i);
        scanf("%f", &nota);
        printf("\n");
        notas[i-1] = nota;
    }

    float media = (notas[0] + notas[1] + (notas[2] * 2)) / size_notas;

    printf("Sua media eh %.2f e voce foi ", media); 

    if(media >= 7) {
        printf("APROVADO");
    } else {
        printf("REPROVADO");
    }

    return 0;
}