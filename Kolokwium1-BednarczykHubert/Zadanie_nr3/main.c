#include <stdio.h>
#include <stdlib.h>

int ostatnia_cyfra(int n)
{
    int ostatni,wynik=0;
    ostatni = n % 10;
    wynik=ostatni;
    return wynik;
}

int main()
{
    int n;
    printf("Wpisz jakas liczbe >=10:  \n");
    scanf("%d", &n);
    if(n<10)
    {
        printf("Bledna liczba kochaniutki");
        return 0;
    }
    printf("Ostatnia cyfra twoich wypocin:  %d \n", ostatnia_cyfra(n));
    return 0;
}
