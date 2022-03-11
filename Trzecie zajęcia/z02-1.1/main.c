#include <stdio.h>
#include <stdlib.h>

int sgn(double x)
{
    if(x<0)
        return -1;
    else if(x>0)
        return 1;
    else
        return 0;
}

int main()
{
    int x;
    printf("Podaj liczby 1 lub 0 lub -1 : \n");
    scanf("%d",&x);
    printf("Wynik : %d",sgn(x));
    return 0;
}

