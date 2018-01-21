#include <iostream>
#include <conio.h>
#include <fstream>
#include <cstdlib>
#include "rectangle.h"
#include "1_3simpsona.h"
#include "trap.h"
#include "wzor.h"
#include "zapis.h"
#include "czysc.h"

using namespace std;

int main()
{
    int wybor = 0, koniec = 0;

            //sprawdzenie czy istnieje plik ze wspolczynnikami
            fstream plik;
            plik.open("wspolczynniki.txt", ios::in);

            if(plik.good()==false)
            {
                cout << "Brak pliku ze wspolczynnikami!" << endl;
                system("pause");
                exit(0);
            }
            else if (plik.peek() == EOF)                //sprawdzenie czy plik jest pusty
            {
                cout << "Plik jest pusty!" << endl;
                system("pause");
                exit(0);
            }


            plik.close();

            //menu glowne

            cout << "KALKULATOR NUMERYCZNY CALEK WIELOMIANOWYCH" << endl << endl;

    while(!koniec)
    {
            cout << "Wybierz metode obliczenia calki" << endl;
            cout << "1. Metoda prostokatow" << endl;
            cout << "2. Metoda trapezow" << endl;
            cout << "3. Metoda Simpsona" << endl;
            cout << "4. Wyczysc plik z wynikami" << endl;
            cout << "5. Wyjscie z programu" << endl;
            cout << endl;

        wybor=getch();
        switch(wybor)
        {
            case '1':
                rect(); cout << endl << endl;
            break;

            case '2':
                trap(); cout << endl << endl;
            break;

            case '3':
                simpson(); cout << endl << endl;
            break;

            case '4':
                czysc();
            break;

            case '5':
                koniec = 1;
            break;

            default:
                cout << "Nie ma takiej opcji w menu!" << endl << endl;
            break;
        }
    }
}

