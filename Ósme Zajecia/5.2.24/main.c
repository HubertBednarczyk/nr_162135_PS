#include <stdio.h>
#include <stdlib.h>

char *kopiuj(char napis[],char *napis1)
{
    for(int i=0;*(napis1+i)!='\0';i++)
    {
        napis[i]=*(napis1+i);
    }
    return napis;
}


int main()
{
    char napis[50]={0};
    char *napis1="Ala ma kota";
    printf("%s",kopiuj(napis,napis1));
    return 0;
}
