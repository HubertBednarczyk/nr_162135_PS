#ifndef PRACOWNIK_H
#define PRACOWNIK_H
#include <stdbool.h>

#define MAX_LEN 50

typedef struct Pracownik{
    char nazwisko[MAX_LEN - 1];
    char imie[MAX_LEN - 1];
    float wzrost;
    double pensja;
    bool czyManager;
}Pracownik;

/*
Zdefiniuj sta³¹ MAX_LEN równ¹ 50, a nastêpnie zdefiniuj C-strukturê Pracownik o polach nazwisko typu char[MAX_LEN-1], imie typu char[MAX_LEN-1], wzrost typu float, pensja typu double oraz czyManager typu bool. Zdefiniuj nastêpuj¹ce funkcje:
*/



// Tworzy strukturê Pracownik
Pracownik makePracownik(const char *nazwisko, const char *imie, float wzrost, double pensja, bool czyManager);

// Tworzy kopiê Pracownika
Pracownik makePracownikCopy(const Pracownik *prac);

// Zwiêksza pensjê danego pracownika o inflacjê 12,3%
void podwyzka(Pracownik *prac, float inflacja);

// Wyœwietla dane Pracownika
void show(const Pracownik *prac);

#endif
