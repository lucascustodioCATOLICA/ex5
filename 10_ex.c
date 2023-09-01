#include <stdio.h>
#include <math.h>

int main() {
    int a, b, c;
    float delta, x1, x2;
    
    printf("Digite o valor de A: ");
    scanf("%d", &a);
    printf("\n");
    printf("Digite o valor de B: ");
    scanf("%d", &b);
    printf("\n");
    printf("Digite o valor de C: ");
    scanf("%d", &c);
    printf("\n");
    
    delta = pow(b, 2) - (4*a*c);
    
    if(delta < 0) {
        printf("Nao existe raiz");
        
        return 0;
    } else if(delta == 0) {
        x1 = (float) -b / (2*a);
        printf("RAIZ UNICA! \n");
        printf("O valor de x` eh %f \n", x1);
        
        return 0;
    }
    
    x1 = (float) (-b + sqrt(delta)) / (2*a);
    x2 = (float) (-b - sqrt(delta)) / (2*a);
    
    printf("O valor de x` eh %f \n", x1);
    printf("O valor de x`` eh %f \n", x2);

    return 0;
}
