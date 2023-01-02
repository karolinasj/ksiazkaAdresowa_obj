#include "KsiazkaAdresowa.h"
/*#include <windows.h>
#include <sstream>
*/

void KsiazkaAdresowa::rejestracjaUzytkownika()
{
    uzytkownikMenedzer.rejestraciaUzytkownika();
}

void KsiazkaAdresowa::wypiszWszystkichUzytkownikow()
{
    uzytkownikMenedzer.wypiszWszystkichUzytkownikow();
}

void KsiazkaAdresowa::logowanieUzytkownika()
{
    idZalogowanegoUzytkownika = 0;
    idZalogowanegoUzytkownika = uzytkownikMenedzer.logowanieUzytkownika();
}
