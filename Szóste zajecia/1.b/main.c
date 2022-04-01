#include <stdio.h>
#include <stdlib.h>

int main()
{
    int N=1000;
    short tab[N];
    printf("Podaj liczbe nieparzyta dodatnia: \n");
    int n;
    scanf("%d \n",&n);
    if(n%2!=0)
    {
        for(short *p=tab;p<tab+n;++p)
        {
            n*2;
        }
    }
    printf("Pomnozona liczba razy 2: ");
    printf("%d \n",n*2);

    if(n%2==0)
    {
        for(short *p=tab;p<tab+n;++p)
        {
            n=-n;
        }
    }
    printf("Odwrocony znak: %d \n",n);
    if(n<0)
    {
        n=-1;
        printf("Ujemna na -1: %d",n);
    }
    else
    {
        return 0;
    }
    return 0;
}
