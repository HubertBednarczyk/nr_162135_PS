#include <stdio.h>
#include "pracownik.h"
#include <string.h>

bool czyPrawidlowaPensja (double pensja);
bool czyPrawidlowyWzrost (int wzrost);


int main(int argc, char *argv[])
{
    // 1) Poproœ u¿ytkownika o wpisanie danych pracownika. Zabezpiecz dane! Zak³adamy, ¿e czlowzrost moze miec wzrost z zakresu 1.40-2.20 m, a pensja minimalna powinna byæ nie mniejsza niz 3010 zl . Napisz odpowiednie funkcje sprawdzaj¹ce poprawnoœæ danych.

    char nazwisko[MAX_LEN - 1];
    char imie[MAX_LEN -1];
    float wzrost;
    double pensja;
    bool czyManager;
    int tempForManager;
    printf("Podaj nazwisko: ");
    scanf("%s", nazwisko);
    printf("Podaj imie: ");
    scanf("%s", imie);
    printf("Podaj wzrost: ");
    scanf("%f", &wzrost);
    printf("Podaj swoja pensje: (w zl) ");
    scanf("%lf", &pensja);
    printf("Czy jestes managerem? (1 jesli tak, 0 to nie): ");
    scanf("%d", &tempForManager);
    czyManager=tempForManager;
    if(wzrost >=1.40 && wzrost<=2.20)
    {
        printf("Masz wzrost normalnego czlowieka \n");
    }
    else
    {
        printf("Jestes mutantem,niegrzecznie mowiac \n");
    }
    if(pensja>=3010)
    {
        printf("Gratulacje, zarabiasz przynajmniej tyle ile normalny czlowiek \n");
    }
    else
    {
        printf("Podnies swoje umiejetnosci aby zarabiac wiecej \n");
    }


     // 2) Zainicjalizuj strukturê o nazwie prac1 wprowadzonymi danymi.
    Pracownik prac1 = makePracownik(nazwisko, imie, wzrost, pensja, czyManager);

    // 3) Stwórz strukturê o nazwie prac2 kopiuj¹c obiekt prac1.
    Pracownik prac2 = makePracownikCopy(&prac1);

    // 4) Stwórz strukturê o nazwie prac3 kopiuj¹c obiekt prac1.
    Pracownik prac3 = makePracownikCopy(&prac1);

    // 5) Zmieñ nazwisko pracownika prac1 na Kowalski
    strcpy(prac1.nazwisko, "Kowalski");

    // 6) Zmieñ nazwisko pracownika prac2 na Nowak
    strcpy(prac2.nazwisko, "Nowak");

    // 7) Zmieñ nazwisko pracownika prac3 na Nowakowski
    strcpy(prac3.nazwisko, "Nowakowski");

    // 8) Zmieñ wzrost pracownika na prac2 na 2.02
    prac2.wzrost = 2.02;

    // 9) Zmieñ czyManager pracownika prac3 na true
    prac3.czyManager = 1;

    // 10) Podnieœ pensjê pracownika prac1 o inflacjê
    podwyzka(&prac1, pensja*0.12);
    //podwyzka(Pracownik *prac, float inflacja)

    // 11) Wypisz informacje o obiektach prac1, prac2, prac3
    show(&prac1);
    show(&prac2);
    show(&prac3);
    // 12) stwórz tablicê o nazwie tab trzech Pracowników
    Pracownik tab[3];

    // 13) W pêtli for do przechodzenia tablicy zamiast indeksów nale¿y u¿yæ wskaŸników, a ka¿dy operator indeksowania nale¿y zastapiæ operatorem dereferencji!!
    // PrzejdŸ tablicê i wype³nij j¹ Pracownikami uzywaj¹c odpowiedniej funkcji.
    for(Pracownik *p=tab; p<tab+3; ++p){
        *p = makePracownik(nazwisko, imie, wzrost, pensja,  czyManager);
    }

    // 14) W pêtli for do przechodzenia tablicy zamiast indeksów nale¿y u¿yæ wskaŸników, a ka¿dy operator indeksowania nale¿y zastapiæ operatorem dereferencji!!
    // Wypisz informacje o wszystkich obiektach typu Pracownik znajduj¹cych sie w tablicy tab
    for(Pracownik *p=tab; p<tab+3; ++p)
    {
        show(p);
    }
    return 0;
}

