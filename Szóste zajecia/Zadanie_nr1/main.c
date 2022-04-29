#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n;
    double r;
    printf("Podaj liczbe naturalna: ");
    scanf("%d", &n);
    int i = 0;
    int pos = 0, neg = 0, zer = 0;
    while(i != n)
    {
        printf("Podaj liczbe rzeczywista: ");
        scanf("%lf", &r);
        if(r < 0)
            neg++;
        else if(r > 0)
            pos++;
        else
            zer++;
        i++;
    }
    printf("Licz dodatnich jest: %d\n", pos);
    printf("Licz ujemnych jest: %d\n", neg);
    printf("Zer jest: %d\n", zer);
    return 0;
}
