#include <stdio.h>
#include <stdlib.h>
void zlicz();
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
    static unsigned int zliczilosc=0;
    zliczilosc++;
    printf("%d razy \n",zliczilosc);
}
