#include <stdio.h>
#include <stdlib.h>
//Pierwsze rozw
int main()
{
    int n,m;
    printf("Podaj dwie liczby calkowite pierwsza n oraz druga m \n");
    scanf("%d %d",&n,&m);
    printf("Wielokrotnosc liczby n: ");
    printf("%d %d %d %d %d %d %d %d %d",n*1,n*2,n*3,n*4,n*5,n*6,n*7,n*8,n*9);
    return 0;
}
//Drugie rozw
int main()
{
    int n,m,suma=0;
    printf("Podaj liczby: \n");
    scanf("%d %d",&n,&m);
    for(int i=0;i<m;i++)
    {
        suma+=n;
        printf("%d",suma);
    }
    return 0;
}
