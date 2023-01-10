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
    void logowanie();
    void wypiszWszystkichUzytkownikow();
    void wyswietlWszystkichAdresatow();
    int idZalogowanegoUzytkownika;

public:

    void menu();


    void wczytajAdresatow();//int idOstAdr);//, int idZalogowanegoUzytkownika);

    KsiazkaAdresowa(string nazwaPlikuZUzytkownikami, string nazwaPlikuZAdresatami) : uzytkownikMenedzer(nazwaPlikuZUzytkownikami), adresatMenedzer(nazwaPlikuZAdresatami){
        uzytkownikMenedzer.wczytajUzytkownikowZPliku();
        //idOstatniegoAdresata = 0;

}
    };


#endif
