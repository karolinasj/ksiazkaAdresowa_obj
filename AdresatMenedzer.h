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

using namespace std;

class AdresatMenedzer
{
    vector <Adresat> adresaci;

    Adresat podajDaneNowegoAdresata(int idZalogowanegoUzytkownika, int idOstatniegoAdresata);
    PlikZAdresatami plikZAdresatami;


public:
    int dodajAdresata(int idZalogowanegoUzytkownika);
    int idOstatniegoAdresata;
    AdresatMenedzer(string nazwaPlikuZAdresatami) : plikZAdresatami(nazwaPlikuZAdresatami){
    //idOstatniegoAdresata = 0;
    };
    int wczytajAdresatowZalogowanegoUzytkownikaZPliku(int idZalogowanegoUzytkownika );
    void wyswietlWszystkichAdresatow();
    void wyswietlDaneAdresata(Adresat adresat);
    void wyczyscAdresatow();
    //int sprawdzCzyAdresaciSaWczytani(int idOstatniegoAdresata, int idZalogowanegoUzytkownika);
    int sprawdzCzyAdresaciSaWczytani(int idZalogowanegoUzytkownika);

};
#endif
