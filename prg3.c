#include <stdio.h>
#include <math.h>

int main()
{
    float peso;
    int gotas;

    printf("Coloque aqui o seu peso em Kg: \n");
    scanf("%f", &peso);
    
    gotas = 2.5 * peso;
    
    printf("Voce precisa tomar %d gotas do remedio. \n", gotas);

    return 0;
}