#include <iostream>

#include "KsiazkaAdresowa.h"

using namespace std;

int main()
{
    KsiazkaAdresowa ksiazkaAdresowa("Uzytkownicy.txt", "Adresaci.txt");

    //ksiazkaAdresowa.rejestracjaUzytkownika();
    //ksiazkaAdresowa.rejestracjaUzytkownika();
    //ksiazkaAdresowa.logowanieUzytkownika();
    //ksiazkaAdresowa.wypiszWszystkichUzytkownikow();

    ksiazkaAdresowa.menu();


    return 0;
}
