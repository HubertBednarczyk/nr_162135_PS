#include <stdio.h>
#include <stdlib.h>

int main()
{
    int srednia=0;
    int liczba1,liczba2,liczba3;
    printf("Wpisz liczbe: ");
    scanf("%d %d %d",&liczba1,&liczba2,&liczba3);
    printf("Wpisales %d %d %d \n",liczba1,liczba2,liczba3);
    srednia=(liczba1+liczba2+liczba3)/3;
    printf("%d",srednia);
    return 0;
}
