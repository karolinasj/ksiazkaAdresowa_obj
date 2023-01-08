#ifndef KSIAZKAADRESOWA_H
#define KSIAZKAADRESOWA_H
#include <iostream>

#include "UzytkonikMenedzer.h"
#include "AdresatMenedzer.h"

using namespace std;

class KsiazkaAdresowa
{
    int idOstatniegoAdresata;
    /*int idUsunietegoAdresata;*/
    UzytkonikMenedzer uzytkownikMenedzer;
    AdresatMenedzer adresatMenedzer;
    char wybierzOpcjeZMenuGlownego();
    char wybierzOpcjeZMenuUzytkownika();
    void wyczyscAdresatow();
    void wylogujUzytkownika();
    void rejestracjaUzytkownika();
    int logowanie();
    void wypiszWszystkichUzytkownikow();
    void wyswietlWszystkichAdresatow();

public:

    void menu();

    int idZalogowanegoUzytkownika;
    int ustawIdOstatniegoAdresata(int idOstAdr, int idZalogowanegoUzytkownika);

    KsiazkaAdresowa(string nazwaPlikuZUzytkownikami) : uzytkownikMenedzer(nazwaPlikuZUzytkownikami){
        uzytkownikMenedzer.wczytajUzytkownikowZPliku();

}
    };


#endif
