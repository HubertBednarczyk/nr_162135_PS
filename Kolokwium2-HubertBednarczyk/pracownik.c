#include <stdio.h>
#include <string.h>
#include "pracownik.h"

Pracownik makePracownik(const char *nazwisko, const char *imie, float wzrost, double pensja, bool czyManager)
{
    Pracownik prac;

    strcpy(prac.nazwisko,nazwisko);
    strcpy(prac.imie,imie);
    prac.wzrost=wzrost;
    prac.pensja=pensja;
    prac.czyManager=czyManager;

    return prac;
}

Pracownik makePracownikCopy(const Pracownik *prac)
{
    Pracownik kopia;

    strcpy(kopia.nazwisko, prac->nazwisko);
    strcpy(kopia.imie,prac->imie);
    kopia.wzrost=prac->wzrost;
    kopia.pensja=prac->pensja;
    kopia.czyManager=prac->czyManager;

    return kopia;
}



void podwyzka(Pracownik *prac, float inflacja)
{
    prac->pensja+=inflacja;
}


// Wyœwietla dane Pracownika
void show(const Pracownik *prac) {
    /* Funkcja powinna wyœwietlac:
    Nazwisko: Kowalski
    Imiê: Jan
    Pensja: 3500 z³
    Wzrost: 2,01 m
    Stanowisko: Manager

    albo

    Nazwisko: Kowalski
    Imiê: Jan
    Pensja: 3500 z³
    Wzrost: 2,01 m
    Stanowisko: Szeregowy

    W zaleznosci od pola czyManager
    */

    {
    printf("\n");
    printf("Nazwisko: %s.\n", prac->nazwisko);
    printf("Imie: %s.\n", prac->imie);
    printf("Wzrost: %f.\n", prac->wzrost);
    printf("Pensja:  %lf\n", prac->pensja);
    if (prac->czyManager)
    {
        printf("Manager.\n");
    }
    else
    {
        printf("Nie manager.\n");
    }
}

}



