#include <stdio.h>

int main()
{
    int x1, x2, x3;
    int max, min;

    printf("Digite um número: ");
    scanf("%d", &x1);

    printf("Digite outro número: ");
    scanf("%d", &x2);

    printf("Digite mais um número: ");
    scanf("%d", &x3);

    max = x1;
    min = x1;

    if (x2 > max)
    {
        max = x2;
    }
    if (x2 < min)
    {
        min = x2;
    }

    if (x3 > max)
    {
        max = x3;
    }
    if (x3 < min)
    {
        min = x3;
    }

    printf("O maior número é: %d\n", max);
    printf("O menor número é: %d\n", min);

    return 0;
}
