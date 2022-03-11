#include <stdio.h>
#include <stdlib.h>

double najmniejsza(double x, double y, double z)
{
    double wynik;
    if(y<=x && z<=x)
    {
        wynik=x;
        return wynik;
    }
    if(z<=y)
    {
        wynik=y;
        return wynik;
    }
    else
    {
        wynik=z;
        return wynik;
    }
}

double srednia(double x,double y,double z)
{
    double wynik;
    for(int i=0;i<0;i++)
        printf("Wynik: %d",(x+y+z)/3);
    return 0;
}


int main()
{
    double x,y,z;
    printf("Podaj 3 liczby calkowite a zwroce ci najmniejsza: \n");
    scanf("%d %d %d",&x,&y,&z);
    printf("Wynik: %d", najmniejsza(x,y,z));
    printf("Wynik funkcji srednia: %d",srednia(x,y,z));
    return 0;
}
