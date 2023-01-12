#ifndef KSIAZKAADRESOWA_H
#define KSIAZKAADRESOWA_H
#include <iostream>

#include "UzytkonikMenedzer.h"
#include "AdresatMenedzer.h"

using namespace std;

class KsiazkaAdresowa
{
    /*int idUsunietegoAdresata;*/
    UzytkonikMenedzer uzytkownikMenedzer;
    AdresatMenedzer adresatMenedzer;
    char wybierzOpcjeZMenuGlownego();
    char wybierzOpcjeZMenuUzytkownika();
    void wyczyscAdresatow();
    void wylogujUzytkownika();
    void rejestracjaUzytkownika();
    void logowanie();
    void wypiszWszystkichUzytkownikow();
    void wyswietlWszystkichAdresatow();
    void wczytajAdresatow();

public:

    KsiazkaAdresowa(string nazwaPlikuZUzytkownikami, string nazwaPlikuZAdresatami) : uzytkownikMenedzer(nazwaPlikuZUzytkownikami), adresatMenedzer(nazwaPlikuZAdresatami){
        uzytkownikMenedzer.wczytajUzytkownikowZPliku();
    }
    void menu();

};

#endif
