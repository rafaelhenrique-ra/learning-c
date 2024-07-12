#include <stdio.h>

int main()
{
    float x, y;
    char op;
    printf("Digite número, operador, número: ");
    scanf("%f %c %f", &x, &op, &y);
    
    switch (op)
    {
        case '+': printf("= %f\n", x+y);
                  break;
        case '-': printf("= %f\n", x-y);
                  break;
        case '*': printf("= %f\n", x*y);
                  break;
        case '/': printf("= %f\n", x/y);
                  break;
        case '^': printf("= %f\n", pow(x, y));
                  break;
        default: printf("Operador Inválido\n");
                 break; 
    }

    return 0;
}
