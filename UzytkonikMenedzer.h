#ifndef UZYTKOWNIKMENEDZER_H
#define UZYTKOWNIKMENEDZER_H
#include <iostream>
#include <vector>
#include <fstream>

#include "Uzytkownik.h"
#include "PlikZUzytkownikami.h"

using namespace std;

class UzytkonikMenedzer
{
    int idZalogowanegoUzytkownika;
    PlikZUzytkownikami plikZUzytkownikami;
    vector <Uzytkownik> uzytkownicy;

    Uzytkownik podajDaneNowegoUzytkownika();
    int pobierzIdNowegoUzytkownika();
    bool czyIstniejeLogin(string login);


public:
    UzytkonikMenedzer(string nazwaPlikuZUzytkownikami) : plikZUzytkownikami(nazwaPlikuZUzytkownikami) {};
    void rejestraciaUzytkownika();
    void wypiszWszystkichUzytkownikow();
    void wczytajUzytkownikowZPliku();
    int logowanieUzytkownika();
    void zmianaHaslaZalogowanegoUzytkownika(int idZalogowanegoUzytkownika);
};
#endif
