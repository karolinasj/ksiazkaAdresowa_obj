#include <iostream>

#include "KsiazkaAdresowa.h"

using namespace std;

int main()
{
    KsiazkaAdresowa ksiazkaAdresowa("Uzytkownicy2.txt");

    //ksiazkaAdresowa.rejestracjaUzytkownika();
    //ksiazkaAdresowa.rejestracjaUzytkownika();
    ksiazkaAdresowa.logowanieUzytkownika();
    cout << ksiazkaAdresowa.idZalogowanegoUzytkownika;

    ksiazkaAdresowa.wypiszWszystkichUzytkownikow();
    return 0;
}
