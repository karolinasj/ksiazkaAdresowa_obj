#ifndef PLIKZADRESATAMI_H
#define PLIKZADRESATAMI_H

#include <vector>
#include <iostream>

#include "Adresat.h"
#include "MetodyPomocnicze.h"
#include "PlikTekstowy.h"

using namespace std;

class PlikZAdresatami : public PlikTekstowy {
    int idOstatniegoAdresata;

    string zamienDaneAdresataNaLinieZDanymiOddzielonymiPionowymiKreskami(Adresat adresat);
    Adresat pobierzDaneAdresata(string daneAdresataOddzielonePionowymiKreskami);
    int pobierzIdUzytkownikaZDanychOddzielonychPionowymiKreskami(string daneJednegoAdresataOddzielonePionowymiKreskami);
    int pobierzIdAdresataZDanychOddzielonychPionowymiKreskami(string daneJednegoAdresataOddzielonePionowymiKreskami);
    void usunPlik(string nazwaPlikuZRozszerzeniem);
    void zmienNazwePliku(string staraNazwa, string nowaNazwa);

public:
    PlikZAdresatami(string nazwaPlikuZAdresatami) : PlikTekstowy(nazwaPlikuZAdresatami) {};
    bool dopiszAdresataDoPliku(Adresat adresat);
    void wczytajAdresatowZalogowanegoUzytkownikaZPliku(vector <Adresat> &adresaci, int idZalogowanegoUzytkownika);
    void ustawIdOstatniegoAdresata(int noweOstatnieId);
    int pobierzIdOstatniegoAdresata();
    void edytujWybranaLinieWPliku(Adresat adresatKtoryBylEdytowany);
    void usunWybranaLinieWPliku(int idUsuwanegoAdresata);
};

#endif
