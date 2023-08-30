#include <stdio.h>

int main() {
    int idade;
    int temp_servico;

    printf("Digite sua idade: \n");
    scanf("%d", &idade);
    printf("Digite seu tempo de servico: \n");
    scanf("%d", &temp_servico);

    if(idade >= 65 || temp_servico >= 30 || (idade >= 60 && temp_servico >= 25)) {
        printf("Pode se aposentar");
    } else {
        printf("Nao pode se aposentar");
    }
    
    return 0;
}