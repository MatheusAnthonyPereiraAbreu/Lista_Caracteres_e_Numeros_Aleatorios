#include <stdio.h>
#include <math.h>

int main()
{
    float a, b, c, p, A;

    printf("Coloque aqui o lado dos triangulos: \n");
    scanf("%f %f %f", &a, &b, &c);

    p = (a + b + c) / 2;
    A = sqrt(p * (p - a) * (p - b) * (p - c));

    printf("A area do triangulo e : %0.1f\n", A);

    return 0 ;
}