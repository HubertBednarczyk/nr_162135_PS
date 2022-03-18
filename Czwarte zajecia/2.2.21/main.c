#include <stdio.h>
#include <stdlib.h>

int rekurencja(int n)
{
    if(n < 2)
        return 1;
    else
        return n-1 + rekurencja(n-1);
}

int main()
{
    int n;
    printf("Podaj liczbe: ");
    scanf("%d",&n);
    printf("a =",n,rekurencja(n));
    return 0;
}
