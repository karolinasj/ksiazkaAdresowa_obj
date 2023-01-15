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
    int idOstatniegoAdresata;
    Adresat podajDaneNowegoAdresata(int idZalogowanegoUzytkownika);
    void wczytajAdresatowZalogowanegoUzytkownikaZPliku(int idZalogowanegoUzytkownika );
    void wyswietlDaneAdresata(Adresat adresat);

public:
    AdresatMenedzer(string nazwaPlikuZAdresatami) : plikZAdresatami(nazwaPlikuZAdresatami){};
    void dodajAdresata(int idZalogowanegoUzytkownika);
    void wyswietlWszystkichAdresatow();
    void wyczyscAdresatow();
    void sprawdzCzyAdresaciSaWczytani(int idZalogowanegoUzytkownika);

};
#endif
