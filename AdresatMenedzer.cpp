#include "AdresatMenedzer.h"

void AdresatMenedzer::dodajAdresata()
{
    Adresat adresat;

    system("cls");
    cout << " >>> DODAWANIE NOWEGO ADRESATA <<<" << endl << endl;
    adresat = podajDaneNowegoAdresata();
    adresaci.push_back(adresat);

    if(plikZAdresatami.dopiszAdresataDoPliku(adresat))
    {
        cout << "Nowy adresat zostal dodany" << endl;
    }
    else
        cout << "Blad. Nie udalo sie dodac nowego adresata do pliku"<<endl;
    system("pause");
}

Adresat AdresatMenedzer::podajDaneNowegoAdresata()
{
    Adresat adresat;

    adresat.ustawIdAdresata(plikZAdresatami.pobierzIdOstatniegoAdresata()+1);
    adresat.ustawIdUzytkownika(ID_ZALOGOWANEGO_UZYTKOWNIKA);

    cout << "Podaj imie: ";
    adresat.ustawImie(MetodyPomocnicze::wczytajLinie());
    adresat.ustawImie(MetodyPomocnicze::zamienPierwszaLitereNaDuzaAPozostaleNaMale(adresat.pobierzImie()));

    cout << "Podaj nazwisko: ";
    adresat.ustawNazwisko(MetodyPomocnicze::wczytajLinie());
    adresat.ustawNazwisko(MetodyPomocnicze::zamienPierwszaLitereNaDuzaAPozostaleNaMale(adresat.pobierzNazwisko()));

    cout << "Podaj numer telefonu: ";
    adresat.ustawNumerTel(MetodyPomocnicze::wczytajLinie());

    cout << "Podaj email: ";
    adresat.ustawEmail(MetodyPomocnicze::wczytajLinie());

    cout << "Podaj adres: ";
    adresat.ustawAdres(MetodyPomocnicze::wczytajLinie());



    return adresat;
}
void AdresatMenedzer::wczytajAdresatowZalogowanegoUzytkownikaZPliku()
{
    plikZAdresatami.wczytajAdresatowZalogowanegoUzytkownikaZPliku(adresaci, ID_ZALOGOWANEGO_UZYTKOWNIKA);
}

void AdresatMenedzer::wyczyscAdresatow()
{
    adresaci.clear();
}
void AdresatMenedzer::sprawdzCzyAdresaciSaWczytani()
{

    if (adresaci.empty() == true)
    {
        plikZAdresatami.wczytajAdresatowZalogowanegoUzytkownikaZPliku(adresaci, ID_ZALOGOWANEGO_UZYTKOWNIKA);
        plikZAdresatami.ustawIdOstatniegoAdresata(plikZAdresatami.pobierzIdOstatniegoAdresata());
    }
}
void AdresatMenedzer::wyswietlDaneAdresata(Adresat adresat)
{
    cout << endl << "Id:                 " << adresat.pobierzIAdresata() << endl;
    cout << "Imie:               " << adresat.pobierzImie() << endl;
    cout << "Nazwisko:           " << adresat.pobierzNazwisko() << endl;
    cout << "Numer telefonu:     " << adresat.pobierzNumerTel() << endl;
    cout << "Email:              " << adresat.pobierzEmail() << endl;
    cout << "Adres:              " << adresat.pobierzAdres() << endl;
}

void AdresatMenedzer::wyswietlWszystkichAdresatow()
{
    system("cls");
    if (!adresaci.empty())
    {
        cout << "             >>> ADRESACI <<<" << endl;
        cout << "-----------------------------------------------" << endl;
        for (vector <Adresat> :: iterator itr = adresaci.begin(); itr != adresaci.end(); itr++)
        {
            wyswietlDaneAdresata(*itr);
        }
        cout << endl;
    }
    else
    {
        cout << endl << "Ksiazka adresowa jest pusta." << endl << endl;
    }
    system("pause");
}



