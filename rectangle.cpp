#include <iostream>
#include <conio.h>
#include <iomanip>
#include <fstream>
#include <cstdlib>
#include <cstdio>
#include <vector>
#include <string>
#include <cmath>
#include "wzor.h"
#include "zapis.h"

using namespace std;

//metoda prostokatow
void rect(void)
{
    float xp=0, xk=0, n=0, dx=0;
    long double calka=0;

        cout << "METODA PROSTOKATOW" << endl;
        cout << "Podaj poczatek przedzialu calkowania: "; cin >> xp;
        cout << "Podaj koniec przedzialu calkowania: "; cin >> xk;
        cout << "Podaj liczbe wezlow: "; cin >> n;

        dx = (xk-xp)/n;

        for (int i=1; i<=n; i++)
            calka += wzor(xp+i*dx);

        calka *= dx;

        cout << "Wartosc przyblizona calki to: " << setprecision(10) << calka;

        zapis(calka);
}
