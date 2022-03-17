#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n,m;
    printf("Podaj dwie liczby calkowite: \n");
    scanf("%d %d",&n,&m);
    if(n!=0 || m!=0)
    {
        printf("Dobre liczby \n");
    }
    else
    {
        printf("Zle liczby \n");
    }
    printf("Wartosc n ^ m = %lf \n", pow(n, m));
    return 0;
}
