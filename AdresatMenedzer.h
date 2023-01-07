#ifndef ADRESATMENEDZER_H
#define ADRESATMENEDZER_H
#include <iostream>
#include <vector>
#include <fstream>

#include "Adresat.h"
#include "PlikZAdresatami.h"

using namespace std;

class AdresatMenedzer
{
    vector <Adresat> adresaci;

    Adresat podajDaneNowegoAdresata(int idZalogowanegoUzytkownika, int idOstatniegoAdresata);
    PlikZAdresatami plikZAdresatami;


public:
    int dodajAdresata(int idZalogowanegoUzytkownika);//adresaci, int idZalogowanegoUzytkownika, int idOstatniegoAdresata);
    int idOstatniegoAdresata;
    AdresatMenedzer();
    int wczytajAdresatowZalogowanegoUzytkownikaZPliku(int idZalogowanegoUzytkownika );
    void wyswietlWszystkichAdresatow();
    void wyswietlDaneAdresata(Adresat adresat);
    void wyczyscAdresatow();
    int sprawdzCzyAdresaciSaWczytani(int idOstatniegoAdresata, int idZalogowanegoUzytkownika);

};
#endif
