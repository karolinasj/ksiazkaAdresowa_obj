#ifndef ADRESATMENEDZER_H
#define ADRESATMENEDZER_H
#include <iostream>
#include <vector>
#include <fstream>
#include <windows.h>
#include <algorithm>
#include <sstream>


#include "Adresat.h"
#include "PlikZAdresatami.h"
#include "AdresatMenedzer.h"
#include "MetodyPomocnicze.h"

using namespace std;

class AdresatMenedzer {
    PlikZAdresatami plikZAdresatami;
    vector <Adresat> adresaci;
    const int ID_ZALOGOWANEGO_UZYTKOWNIKA;

    Adresat podajDaneNowegoAdresata();
    void wczytajAdresatowZalogowanegoUzytkownikaZPliku();
    void wyswietlDaneAdresata(Adresat adresat);
    void wyswietlIloscWyszukanychAdresatow(int iloscAdresatow);
    int podajIdWybranegoAdresata();
    char wybierzOpcjeZMenuEdycja();


public:
    AdresatMenedzer(string nazwaPlikuZAdresatami, int idZalogowanegoUzytkownika)
        : plikZAdresatami(nazwaPlikuZAdresatami), ID_ZALOGOWANEGO_UZYTKOWNIKA(idZalogowanegoUzytkownika) {
        wczytajAdresatowZalogowanegoUzytkownikaZPliku();
    };
    void dodajAdresata();
    void wyswietlWszystkichAdresatow();
    void wyczyscAdresatow();
    void sprawdzCzyAdresaciSaWczytani();
    void wyszukajAdresatowPoImieniu();
    void wyszukajAdresatowPoNazwisku();
    void edytujAdresata();
    void usunAdresata();
};
#endif
