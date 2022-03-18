#include <stdio.h>
#include <stdlib.h>
#include <math.h>
int n;

int main()
{
    printf("Podaj liczbe nieujemna: \n");
    scanf("%d",&n);
    if(n>0)
    {
        printf("Dobra liczba \n");
    }
    else
    {
        printf("Zla liczba \n");
    }
    printf("Wartosc 2 ^ n = %lf \n", pow(2, n));
    return 0;
}
