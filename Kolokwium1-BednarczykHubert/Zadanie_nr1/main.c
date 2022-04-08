#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n,podzielna;
    double r;
    printf("Podaj liczbe naturalna: ");
    scanf("%d", &n);
    int i = 0;
    int neg = 0;
    while(i != n)
    {
        printf("Podaj liczbe rzeczywista: ");
        scanf("%lf", &r);
        if(r < 0)
            neg++;
        i++;
    }
    printf("Liczb ujemnych jest: %d\n", neg);
    return 0;
}
