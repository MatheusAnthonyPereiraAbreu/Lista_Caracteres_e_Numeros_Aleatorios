#include <stdio.h>
int main()
{
    float real, dolar, res;

    printf("Coloque o valor em Reais e depois a cotacao em Dolar respectivamente: \n");
    scanf("%f %f", &real, &dolar);
    
    res = real * dolar;
    
    printf("\n Seu valor em reais e R$%0.2f ,convertido e $%0.2f Dolares \n", real, res);
    
    return 0;
}
