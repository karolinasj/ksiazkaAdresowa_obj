#ifndef METODYPOMOCNICZE_H
#define METODYPOMOCNICZE_H

#include <fstream>
#include <iostream>
#include <vector>
#include<sstream>
#include "Uzytkownik.h"

using namespace std;

class MetodyPomocnicze
{

public:
    KsiazkaAdresowa();
    static string konwerjsaIntNaString(int liczba);
    static string wczytajLinie(); //to te¿ na static?
};
#endif
