#include <fstream>

using namespace std;

class PlikTekstowy {
    bool czyPlikJestPusty(fstream &plikTekstowy);
    const string NAZWA_PLIKU;

public:
    PlikTekstowy(string nazwaPliku){};
};
