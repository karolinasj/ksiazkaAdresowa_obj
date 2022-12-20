#include "KsiazkaAdresowa.h"
/*#include <windows.h>
#include <sstream>
*/

KsiazkaAdresowa::KsiazkaAdresowa()
{
    uzytkownikMenedzer.wczytajUzytkownikowZPliku();
}
void KsiazkaAdresowa::rejestracjaUzytkownika()
{
    uzytkownikMenedzer.rejestraciaUzytkownika();
}

void KsiazkaAdresowa::wypiszWszystkichUzytkownikow()
{
    uzytkownikMenedzer.wypiszWszystkichUzytkownikow();
}
