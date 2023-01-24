#ifndef ADRESAT_H
#define ADRESAT_H

#include <iostream>

using namespace std;

class Adresat {
    int idAdresata;
    int idUzytkownika;
    string imie, nazwisko, numerTelefonu, email, adres;

public:
    Adresat(int idAdresata = 0, int idUzytkownika = 0, string imie = "", string nazwisko = "", string numerTelefonu = "", string email = "", string adres = "") {
        this-> idAdresata = idAdresata;
        this-> idUzytkownika = idUzytkownika;
        this-> imie = imie;
        this-> nazwisko = nazwisko;
        this->numerTelefonu = numerTelefonu;
        this->email = email;
        this->adres = adres;
    };
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
    //int idAdresata;

};

#endif
