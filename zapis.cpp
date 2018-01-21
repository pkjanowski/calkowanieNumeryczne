#include <iostream>
#include <iomanip>
#include <fstream>

using namespace std;

void zapis(float x)
{
        fstream wynik;

        wynik.open("wynik.txt", ios::out | ios::app); //input output stream :: out; otwarcie pliku do zapisu; ios::app - dopisz

        wynik << setprecision(10) << x << endl;

        wynik.close();
}
