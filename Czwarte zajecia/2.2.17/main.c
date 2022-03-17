#include <stdio.h>
#include <stdlib.h>
void zlicz();
int zliczilosc=0;
int main()
{
    int liczba;
    printf("podaj liczbe: ");
    scanf("%d",&liczba);
    for(int i=0; i<liczba; i++)
    {
        zlicz();
    }
    return 0;
}

void zlicz()
{
    zliczilosc++;
    printf("funkcja wykona³a sie %i razy\n",zliczilosc);
}
