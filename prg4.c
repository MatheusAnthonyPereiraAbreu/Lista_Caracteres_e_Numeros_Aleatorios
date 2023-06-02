#include <stdio.h>

int main()
{
    int dia;
    float kmr, age1, age2;

    printf("Quantos dias voce vai ficar com o carro ? \n: ");
    scanf("%d", &dia);

    printf("E quantos quilometros em kg voce vai percorrer? \n: ");
    scanf("%f", &kmr);

    age1 = (62 * dia) + (1.4 * kmr);
    age2 = (80 * dia) + (1.2 * kmr);

    printf("O valor na agencia 1 : R$%0.2f , e na agencia 2: R$%0.2f \n", age1, age2);

    return 0;
}