#include <iostream>
#include <conio.h>
#include <iomanip>
#include <fstream>
#include <cstdlib>
#include <cstdio>
#include <vector>
#include <string>
#include <cmath>

using namespace std;

float wzor(float x)
{
    //wczytanie pliku do odczytu
    fstream plik;
    plik.open("wspolczynniki.txt", ios::in);

    vector <float> wsp;

    while(!plik.eof())  //zwraca falsz poki sa linie
    {
        float wspolczynnik;                 //zmienna pomocnicza
        if(!(plik>>wspolczynnik)) break;    //nie wyswietlanie ostatniej wartosci dwukrotnie
        wsp.push_back(wspolczynnik);        //dopisywanie elementow do wektora
    }

    plik.close();

    int el = wsp.size();    //ilosc elementow wektora
    float wspobl[el];       //tablica obliczonych wspolczynnikow
    float wartosc_y = 0;    //zwracana wartosc funkcji
    int potega = el-1;      //potega do ktorej bedziemy podnosic

        for (int i=0; i<el; i++)
        {
            if(wsp[i]==0)
                wspobl[i]=0;
            else
                wspobl[i]=wsp[i]*pow(x,potega);
                wartosc_y += wspobl[i];

            potega--;
        }

        return(wartosc_y);
}

