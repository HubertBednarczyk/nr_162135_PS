#include <stdio.h>
#include <stdlib.h>
//pierwsze(nieskonczone)
int main()
{
    int li,n;
    printf("Podaj liczbe calkowita: \n");
    scanf("%d",&li);
    do
    {
        if(li>=2)
        {
            printf("Dobra liczba! \n");
        }
        else
        {
            printf("Zla liczba! \n");
            return 0;
        }
    }while(li<2);
    printf("Podaj liczbe n (ile razy ma wykonac sie iloczyn) : \n");
    scanf("%d",&n);
    for(int i=0;i<n;i++)
    {
        printf("Iloczyn: ");
        printf("%d",li*li);
    }
    return 0;
}

//drugie
int main()
{
    int,i=2,wynik=1;
    printf("Podaj liczbe : \n");
    scanf("%d",&n);
    if(n>2)
    {
        while(i<=n)
        {
            wynik=wynik*i;
            i=i+2;
        }
    }
    else
    {
        printf("Nie, musisz podac liczbe wieksza od 2");
    printf("%d",wynik);
        return 0;
    }
    return 0;
}
