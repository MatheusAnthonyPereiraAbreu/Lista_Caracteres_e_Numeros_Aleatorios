#include <stdio.h>

int main()
{
    float prod, res, final;
    int des;

    //printf("Coloque aqui o valor do produto a vista, e respectivamente o valor do desconto em porcentagem: \n");
    scanf("%f %d", &prod, &des);

    final = (1.0 * des) / 100 * prod;
    res = prod - final;

    printf("%0.2f %0.2f", res, final);
    return 0;
}