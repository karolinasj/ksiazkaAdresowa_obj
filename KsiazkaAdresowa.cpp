#include "KsiazkaAdresowa.h"

void KsiazkaAdresowa::rejestracjaUzytkownika() {
    uzytkownikMenedzer.rejestraciaUzytkownika();
}
void KsiazkaAdresowa::logowanie() {
    uzytkownikMenedzer.logowanieUzytkownika();
    if (uzytkownikMenedzer.czyUzytkownikJestZalogowany()) {
        adresatMenedzer = new AdresatMenedzer(NAZWA_PLIKU_Z_ADRESATAMI, uzytkownikMenedzer.pobierzIdZalogowanegoUzytkownika());
    }
}

void KsiazkaAdresowa::wypiszWszystkichUzytkownikow() {
    uzytkownikMenedzer.wypiszWszystkichUzytkownikow();
}

char KsiazkaAdresowa::wybierzOpcjeZMenuGlownego() {
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
char KsiazkaAdresowa::wybierzOpcjeZMenuUzytkownika() {
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

void KsiazkaAdresowa::wylogujUzytkownika() {
    uzytkownikMenedzer.wylogujUzytkownika();
    delete adresatMenedzer;
    adresatMenedzer = NULL;
}

void KsiazkaAdresowa::wyswietlWszystkichAdresatow() {
    adresatMenedzer->wyswietlWszystkichAdresatow();
}


bool KsiazkaAdresowa::czyUzytkownikJestZalogowany() {
    if (uzytkownikMenedzer.pobierzIdZalogowanegoUzytkownika() > 0 )
        return true;
    else
        return false;
}
void KsiazkaAdresowa::zmianaHasla() {
    uzytkownikMenedzer.zmianaHaslaZalogowanegoUzytkownika();
}
void KsiazkaAdresowa::dodajAdresata() {
    adresatMenedzer->dodajAdresata();
}
int KsiazkaAdresowa::pobierzIdZalogowanegoUzytkownikaZUzytkonikMenedzer() {
    int idZalogowanego = uzytkownikMenedzer.pobierzIdZalogowanegoUzytkownika();
    return idZalogowanego;
}
void KsiazkaAdresowa::wyszukajAdresatowPoImieniu() {
    adresatMenedzer->wyszukajAdresatowPoImieniu();
}
void KsiazkaAdresowa::wyszukajAdresatowPoNazwisku() {
    adresatMenedzer->wyszukajAdresatowPoNazwisku();
}
void KsiazkaAdresowa::edytujAdresata() {
    adresatMenedzer ->edytujAdresata();
}

void KsiazkaAdresowa::usunAdresata() {
    adresatMenedzer ->usunAdresata();
}
