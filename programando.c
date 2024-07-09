#include <stdio.h>

int main ()
{
    int numero;
    printf("Digite um número: ");
    scanf("%d", &numero);

    if (numero > 0)
    {
        printf("O número é positivo")
    }

    else if (numero == 0)
    {
        printf("O número é igual a zero")  
    } 
    else
    {
        printf("O número é negativo")
    }
}
