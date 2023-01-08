#include "KsiazkaAdresowa.h"
/*#include <windows.h>
#include <sstream>
*/

void KsiazkaAdresowa::rejestracjaUzytkownika()
{
    uzytkownikMenedzer.rejestraciaUzytkownika();
}
int KsiazkaAdresowa::logowanie()
{
    uzytkownikMenedzer.logowanieUzytkownika();
}

void KsiazkaAdresowa::wypiszWszystkichUzytkownikow()
{
    uzytkownikMenedzer.wypiszWszystkichUzytkownikow();
}

void KsiazkaAdresowa::menu()
{
    char wybor;
    idZalogowanegoUzytkownika = 0;
    while (true)
    {
        if (idZalogowanegoUzytkownika == 0)
        {
            wybor = wybierzOpcjeZMenuGlownego();

            switch (wybor)
            {
            case '1':
                rejestracjaUzytkownika();
                break;
            case '2':
                //idZalogowanegoUzytkownika = logowanie();
                idZalogowanegoUzytkownika = uzytkownikMenedzer.logowanieUzytkownika();
                break;
            case '9':
                exit(0);
                break;
            default:
                cout << endl << "Nie ma takiej opcji w menu." << endl << endl;
                system("pause");
                break;
            }
        }
        else
        {
            int idOstatniegoAdresata = 0;
            idOstatniegoAdresata = ustawIdOstatniegoAdresata(idOstatniegoAdresata, idZalogowanegoUzytkownika);

            wybor = wybierzOpcjeZMenuUzytkownika();

            switch (wybor)
            {
            case '1':
                //idOstatniegoAdresata = adresatMenedzer.dodajAdresata(idZalogowanegoUzytkownika);//idZalogowanegoUzytkownika, idOstatniegoAdresata);
                idOstatniegoAdresata = adresatMenedzer.sprawdzCzyAdresaciSaWczytani(idOstatniegoAdresata, idZalogowanegoUzytkownika);
                break;
            case '2':
                //wyszukajAdresatowPoImieniu(adresaci);
                break;
            case '3':
                //wyszukajAdresatowPoNazwisku(adresaci);
                break;
            case '4':
                wyswietlWszystkichAdresatow();
                break;
            case '5':
                //idUsunietegoAdresata = usunAdresata(adresaci);
                //idOstatniegoAdresata = podajIdOstatniegoAdresataPoUsunieciuWybranegoAdresata(idUsunietegoAdresata, idOstatniegoAdresata);
                break;
            case '6':
                //edytujAdresata(adresaci);
                break;
            case '7':
                uzytkownikMenedzer.zmianaHaslaZalogowanegoUzytkownika(idZalogowanegoUzytkownika);
                break;
            case '8':
                wylogujUzytkownika();
                break;
            }
        }
    }
    //return 0;
}
int KsiazkaAdresowa::ustawIdOstatniegoAdresata(int idOstatniegoAdresata, int idZalogowanegoUzytkownika)
{
    adresatMenedzer.sprawdzCzyAdresaciSaWczytani(idOstatniegoAdresata, idZalogowanegoUzytkownika);
}
void KsiazkaAdresowa::wylogujUzytkownika()
{
    idZalogowanegoUzytkownika = 0;
    wyczyscAdresatow();
}
void KsiazkaAdresowa::wyczyscAdresatow()
{
    adresatMenedzer.wyczyscAdresatow();
}

void KsiazkaAdresowa::wyswietlWszystkichAdresatow()
{
    adresatMenedzer.wyswietlWszystkichAdresatow();
}
char KsiazkaAdresowa::wybierzOpcjeZMenuGlownego()
{
    char wybor;

    system("cls");
    cout << "    >>> MENU  GLOWNE <<<" << endl;
    cout << "---------------------------" << endl;
    cout << "1. Rejestracja" << endl;
    cout << "2. Logowanie" << endl;
    cout << "9. Koniec programu" << endl;
    cout << "---------------------------" << endl;
    cout << "Twoj wybor: ";
    wybor = MetodyPomocnicze::wczytajZnak();

    return wybor;
}
char KsiazkaAdresowa::wybierzOpcjeZMenuUzytkownika()
{
    char wybor;

    system("cls");
    cout << " >>> MENU UZYTKOWNIKA <<<" << endl;
    cout << "---------------------------" << endl;
    cout << "1. Dodaj adresata" << endl;
    cout << "2. Wyszukaj po imieniu" << endl;
    cout << "3. Wyszukaj po nazwisku" << endl;
    cout << "4. Wyswietl adresatow" << endl;
    cout << "5. Usun adresata" << endl;
    cout << "6. Edytuj adresata" << endl;
    cout << "---------------------------" << endl;
    cout << "7. Zmien haslo" << endl;
    cout << "8. Wyloguj sie" << endl;
    cout << "---------------------------" << endl;
    cout << "Twoj wybor: ";
    wybor = MetodyPomocnicze::wczytajZnak();

    return wybor;
}


