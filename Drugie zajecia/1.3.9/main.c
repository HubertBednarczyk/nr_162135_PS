#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
    float liczba1,liczba2,wynik;
    int a,b;
    int wybor;
    printf("wybierz:\n1.dodawanie\n2.odejmowanie\n3.dzielenie\n4.mnozenie\n5.reszta z dzielenia\n6.pierwiastek z pierwszej liczby\n");
    scanf("%d",&wybor);
    printf("podaj dwie liczby\n");
    scanf("%f %f",&liczba1,&liczba2);
    a=(int)liczba1;
    b=(int)liczba2;
    switch(wybor)
    {
    case 1:
       wynik=(liczba1+liczba2);
    break;
    case 2:
       wynik=(liczba1-liczba2);
    break;
    case 3:
        wynik=(liczba1/liczba2);
    break;
    case 4:
        wynik=(liczba1*liczba2);
    break;
    case 5:
        wynik=(a%b);
    break;
    case 6:
        wynik=sqrt(liczba1);
    break;
    default:
       printf("nie wybrano trybu");
    break;
    }
    printf("%f",wynik);
    return 0;
}
