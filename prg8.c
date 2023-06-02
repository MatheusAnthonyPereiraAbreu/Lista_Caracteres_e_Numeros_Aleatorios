#include <stdio.h>
#include <math.h>

int main(){
    float r, h, V; 

    printf("Coloque a seguir os valores do raio e da altura do cilindro, respectivamente: \n ");
    scanf("%f %f", &r,&h);

    V=acos(-1)*pow(r,2)*h;

    printf("O Volume do cilindro e : %0.2f metros cubicos\n",V);

    return 0; 
}