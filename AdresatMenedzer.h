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

class AdresatMenedzer
{
    PlikZAdresatami plikZAdresatami;
    vector <Adresat> adresaci;
    Adresat podajDaneNowegoAdresata();
    void wczytajAdresatowZalogowanegoUzytkownikaZPliku();
    void wyswietlDaneAdresata(Adresat adresat);
    int idZalogowanegoUzytkownika;

public:
    AdresatMenedzer(string nazwaPlikuZAdresatami) : plikZAdresatami(nazwaPlikuZAdresatami){idZalogowanegoUzytkownika = 0;};
    void dodajAdresata();
    void wyswietlWszystkichAdresatow();
    void wyczyscAdresatow();
    void sprawdzCzyAdresaciSaWczytani();
    void ustawIdZalogowanegoUzytkownika(int id);

};
#endif
