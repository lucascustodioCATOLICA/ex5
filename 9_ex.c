#include <stdio.h>

int main() {
    float salario;
    int temp_servico;

    printf("Digite seu salario: \n");
    scanf("%f", &salario);
    printf("Digite seu tempo de servico em anos: \n");
    scanf("%d", &temp_servico);

    if(salario <= 500 && temp_servico < 1) {
        printf("Seu novo salario eh: %f \n", salario * 1.25);
    } else if(salario <= 1000 && (temp_servico >= 1 && temp_servico <= 3)) {
        printf("Seu novo salario eh: %f \n", salario * 1.2 + 100);
    } else if(salario <= 1500 && (temp_servico >= 4 && temp_servico <= 6)) {
        printf("Seu novo salario eh: %f \n", salario * 1.15 + 200);
    } else if(salario <= 2000 && (temp_servico >= 7 && temp_servico <= 10)) {
        printf("Seu novo salario eh: %f \n", salario * 1.1 + 300);
    } else {
        printf("Seu novo salario eh: %f \n", salario + 500);
    }
    
    return 0;
}