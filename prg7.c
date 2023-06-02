#include <stdio.h>
#include <math.h>
int main()
{
    double ang, s, c, t;

    //printf("Coloque um valor de um angulo em graus: \n");
    scanf("%lf", &ang);
    ang = ang*acos(-1)/180;
    s = sin(ang);
    c = cos(ang);
    t = tan(ang);

    printf("%.1lf %.1lf %.1lf",s, c, t);

    return 0;
}