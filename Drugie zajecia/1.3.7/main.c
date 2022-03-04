#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a,b,c,delta,x1,x2;
    printf("Podaj wspolczyniki rownania kwadratowego: \n");
    scanf("%f %f %f",&a,&b,&c);
    delta=((b*b)-(4*a*c));
    if(delta==0)
    {
        x1=((b*-1)/2*a);
        printf("jest jedno rozwiazanie x1=");
        printf("%f",x1);
    }
    if(delta<0)
        printf("Nie ma rozwiazan");
    if(delta>0)
    {
        x1=(((b*-1)-sqrt(delta))/2*a);
        x2=(((b*-1)+sqrt(delta))/2*a);
        printf("sa dwa rozwiazania x1: ");
        printf("%f",x1);
        printf("i  x2=");
        printf("%f",x2);
    }
    return 0;
}
