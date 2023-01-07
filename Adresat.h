#ifndef ADRESAT_H
#define ADRESAT_H

#include <iostream>

using namespace std;

class Adresat
{
    int idAdresata;
    int idUzytkownika;
    string imie, nazwisko, numerTelefonu, email, adres;

public:
    void ustawIdAdresata(int noweId);
    void ustawIdUzytkownika(int idZalUzytkownika);
    void ustawImie(string imieAdresata);
    void ustawNazwisko(string NazwiskoAdresata);
    void ustawNumerTel(string NumerTelAdresata);
    void ustawEmail(string EmailAdresata);
    void ustawAdres(string AdresAdresata);

    int pobierzIAdresata();
    int pobierzIUzytkownika();
    string pobierzImie();
    string pobierzNazwisko();
    string pobierzNumerTel();
    string pobierzEmail();
    string pobierzAdres();

};

#endif
