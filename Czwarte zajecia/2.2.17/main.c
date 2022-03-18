#include <stdio.h>
#include <stdlib.h>
void zlicz();
<<<<<<< HEAD
=======
int zliczilosc=0;
>>>>>>> fddabd04cb364ccbab11b4eb62224016b280523c
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
<<<<<<< HEAD
    static unsigned int zliczilosc=0;
    zliczilosc++;
    printf("%d razy \n",zliczilosc);
=======
    zliczilosc++;
    printf("funkcja wykona³a sie %i razy\n",zliczilosc);
>>>>>>> fddabd04cb364ccbab11b4eb62224016b280523c
}
