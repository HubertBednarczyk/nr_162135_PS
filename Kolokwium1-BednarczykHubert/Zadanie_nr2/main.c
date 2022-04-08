#include <stdio.h>
#include <stdlib.h>
#include <math.h>
/*int main()
{
    int n,m,p,wynik=0;
    printf("Podaj trzy liczby: \n");
    scanf("%d %d %d",&n,&m,&p);
    if(n || m || p ==0)
    {
        return 0;
    }
    wynik=(n*m)/p;
    return wynik;
}*/

double potega(int n,int m,int p)
{
    int liczba;
    double suma=1;
    if(m==0)
        return 1;
    if(n==0)
        return 0;
    if(p==0)
        return 0;
    if(m<0)
        liczba=-1*m;
    else
        liczba=m;
        for(int i=0;i<liczba;i++)
        {
            suma*=n;
        }
    if(m>0)
        return suma/p;
    else
        return 1.0/suma;
}

int main()
{
    int n,m,p;
    printf("Wpisz liczbe n: \n");
    scanf("%d",&n);
    printf("Wpisz liczbe m: \n");
    scanf("%d",&m);
    printf("Wpisz liczbe p: \n");
    scanf("%d",&p);
    if((n!=0)||(m!=0)||(p!=0))
        printf("%lf",potega(n,m,p));
    else
        printf("Blad");
    return 0;
}
