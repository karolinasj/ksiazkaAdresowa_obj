#ifndef KSIAZKAADRESOWA_H
#define KSIAZKAADRESOWA_H
#include <iostream>

#include "UzytkonikMenedzer.h"

using namespace std;

class KsiazkaAdresowa
{
    /*int idOstatniegoAdresata;
    int idUsunietegoAdresata;*/
    UzytkonikMenedzer uzytkownikMenedzer;
    char wybierzOpcjeZMenuGlownego();
    char wybierzOpcjeZMenuUzytkownika();
public:

    void menu();
    void rejestracjaUzytkownika();
    int logowanie();
    void wypiszWszystkichUzytkownikow();
    int idZalogowanegoUzytkownika;
    KsiazkaAdresowa(string nazwaPlikuZUzytkownikami) : uzytkownikMenedzer(nazwaPlikuZUzytkownikami){
        uzytkownikMenedzer.wczytajUzytkownikowZPliku();

}


    };


#endif
