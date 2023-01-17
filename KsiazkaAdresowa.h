#ifndef KSIAZKAADRESOWA_H
#define KSIAZKAADRESOWA_H
#include <iostream>

#include "UzytkonikMenedzer.h"
#include "AdresatMenedzer.h"

using namespace std;

class KsiazkaAdresowa
{
    UzytkonikMenedzer uzytkownikMenedzer;
    AdresatMenedzer *adresatMenedzer;
    const string NAZWA_PLIKU_Z_ADRESATAMI;

    char wybierzOpcjeZMenuGlownego();
    char wybierzOpcjeZMenuUzytkownika();
    void wyczyscAdresatow();
;
    void wypiszWszystkichUzytkownikow();


public:

    KsiazkaAdresowa(string nazwaPlikuZUzytkownikami, string nazwaPlikuZAdresatami) : uzytkownikMenedzer(nazwaPlikuZUzytkownikami), NAZWA_PLIKU_Z_ADRESATAMI(nazwaPlikuZAdresatami)
    {
        adresatMenedzer = NULL;
    };
    ~KsiazkaAdresowa()
    {
        delete adresatMenedzer;
        adresatMenedzer = NULL;
    };
    //void menu();
    bool czyUzytkownikJestZalogowany();
    void wylogujUzytkownika();
    void rejestracjaUzytkownika();
    void logowanie();
    void zmianaHasla();
    void dodajAdresata();
    void wyswietlWszystkichAdresatow();
    int pobierzIdZalogowanegoUzytkownikaZUzytkonikMenedzer();
};

#endif
