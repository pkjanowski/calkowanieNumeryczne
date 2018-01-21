#include <iostream>
#include <fstream>
using namespace std;

void czysc(void)
{
    if (remove("wynik.txt") == 0 )
         cout << "Wyczyszczono!" << endl << endl;
    else
         cout << "Plik jest juz wyczyszczony!" << endl << endl;
}

