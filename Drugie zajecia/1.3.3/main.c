#include <stdio.h>
#include <stdlib.h>

int main()
{
    int liczba1,liczba2,liczba3;
    printf("Wypisz 3 liczby calkowite: \n");
    scanf("%d %d %d",&liczba1,&liczba2,&liczba3);
    if(liczba1>liczba2 && liczba1>liczba3)
        printf("Liczba1 jest najwieksza");
    if(liczba2>liczba1 && liczba2>liczba3)
        printf("Liczba2 jest najwieksza");
    if(liczba3>liczba1 && liczba3>liczba2)
        printf("Liczba 3 jest najwieksza");
    return 0;
}
