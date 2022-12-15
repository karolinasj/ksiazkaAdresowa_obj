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
public:
    void rejestracjaUzytkownika();
    void wypiszWszystkichUzytkownikow();


};
#endif
