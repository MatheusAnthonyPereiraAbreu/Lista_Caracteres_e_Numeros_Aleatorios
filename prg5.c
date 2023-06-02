#include <stdio.h>
#include <math.h>
int main()
{
    int n1;
    float res;

    printf("Digite um numero inteiro qualquer: \n");
    scanf("%d", &n1);

    res = cbrt(n1) + pow(n1, 1.0 / 4.0);

    printf("O resultado da soma entre a raiz cubica e da raiz quarta do numero %d , e %.2f \n", n1, res);

    return 0;
}