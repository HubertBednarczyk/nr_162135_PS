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
Zdefiniuj sta�� MAX_LEN r�wn� 50, a nast�pnie zdefiniuj C-struktur� Pracownik o polach nazwisko typu char[MAX_LEN-1], imie typu char[MAX_LEN-1], wzrost typu float, pensja typu double oraz czyManager typu bool. Zdefiniuj nast�puj�ce funkcje:
*/



// Tworzy struktur� Pracownik
Pracownik makePracownik(const char *nazwisko, const char *imie, float wzrost, double pensja, bool czyManager);

// Tworzy kopi� Pracownika
Pracownik makePracownikCopy(const Pracownik *prac);

// Zwi�ksza pensj� danego pracownika o inflacj� 12,3%
void podwyzka(Pracownik *prac, float inflacja);

// Wy�wietla dane Pracownika
void show(const Pracownik *prac);

#endif
