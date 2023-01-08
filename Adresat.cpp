#include "Adresat.h"

void Adresat::ustawIdAdresata(int noweId)
{
    if (noweId >= 0)
        idAdresata = noweId;
}

void Adresat::ustawIdUzytkownika(int idZalUzytkownika)
{
    idUzytkownika = idZalUzytkownika;
}
void Adresat::ustawImie(string imieAdresata)
{
    imie = imieAdresata;
}

void Adresat::ustawNazwisko(string NazwiskoAdresata)
{
    nazwisko = NazwiskoAdresata;
}

void Adresat::ustawNumerTel(string NumerTelAdresata)
{
    numerTelefonu = NumerTelAdresata;
}

void Adresat::ustawEmail(string EmailAdresata)
{
    email = EmailAdresata;
}

void Adresat::ustawAdres(string AdresAdresata)
{
    adres = AdresAdresata;
}

int Adresat::pobierzIAdresata()
{
    return idAdresata;
}
int Adresat::pobierzIUzytkownika()
{
    return idUzytkownika;
}

string Adresat::pobierzImie()
{
    return imie;
}

string Adresat::pobierzNazwisko()
{
    return nazwisko;
}

string Adresat::pobierzNumerTel()
{
    return numerTelefonu;
}

string Adresat::pobierzEmail()
{
    return email;
}

string Adresat::pobierzAdres()
{
    return adres;
}

