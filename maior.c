#include <stdio.h>

int main() {
    int num1, num2;
    printf("Digite o valor para o primeiro número: ");
    scanf("%d", &num1);
    printf("Digite o valor para o segundo número: ");
    scanf("%d", &num2); 

    if (num1 > num2)
    {
        printf("O maior valor é: %d\n", num1);
        printf("O menor valor é: %d\n", num2);
    }
    else if (num2 > num1)
    {
        printf("O maior valor é: %d\n", num2);
        printf("O menor valor é: %d\n", num1);
    }
    else
    {
        printf("Os valores são iguais.\n");
    }   
return 0;}