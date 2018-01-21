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

//metoda 1/3 simpsona
void simpson(void)
{
        float xp=0, xk=0, n=0, dx=0;
        long double calka=0;

        cout << "METODA SIMPSONA" << endl;
        cout << "Podaj poczatek przedzialu calkowania: "; cin >> xp;
        cout << "Podaj koniec przedzialu calkowania: "; cin >> xk;
        cout << "Podaj liczbe wezlow (>=3, nieparzysta): "; cin >> n;

        dx = (xk-xp)/(n-1);

        for (int i=1; i<n; i+=2)
        {
            calka += 4*(wzor(xp+i*dx));
        }

        for (int i=2; i<n-1; i+=2)
        {
            calka += 2*(wzor(xp+i*dx));
        }

        calka += (wzor(xp)+wzor(xk));

        calka *= dx/3;

        cout << "Wartosc przyblizona calki to: " << setprecision(10)<< calka;

        zapis(calka);
}
