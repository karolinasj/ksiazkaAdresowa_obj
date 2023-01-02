#include <iostream>

#include "KsiazkaAdresowa.h"

using namespace std;

int main()
{
    KsiazkaAdresowa ksiazkaAdresowa("Uzytkownicy2.txt");

    //ksiazkaAdresowa.rejestracjaUzytkownika();
    //ksiazkaAdresowa.rejestracjaUzytkownika();
    //ksiazkaAdresowa.logowanieUzytkownika();
    ksiazkaAdresowa.menu();


    ksiazkaAdresowa.wypiszWszystkichUzytkownikow();
    return 0;
}
