#include <iostream>
#include <cstdlib>
#include <ctime>
#include <string>
#include <limits>

using namespace std;

// Funkcja losujaca liczbe z podanego przedzialu
int losuj(int min, int max)
{
    return rand() % (max - min + 1) + min;
}

// Zadanie 1: Wyswietlanie 5 liczb w odwrotnej kolejnosci
void zadanie1()
{
    int liczby[5];

    for (int i = 0; i < 5; i++)
    {
        cout << "Podaj liczbe " << i + 1 << ": ";
        cin >> liczby[i];
    }

    cout << "Liczby w odwrotnej kolejnosci: ";

    for (int i = 4; i >= 0; i--)
    {
        cout << liczby[i] << " ";
    }

    cout << endl;
}

// Zadanie 2: Wczytanie i wyswietlenie macierzy 3x3
void zadanie2()
{
    int macierz[3][3];

    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            cout << "Podaj element [" << i << "][" << j << "]: ";
            cin >> macierz[i][j];
        }
    }

    cout << "Macierz 3x3:" << endl;

    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            cout << macierz[i][j] << "\t";
        }

        cout << endl;
    }
}

// Zadanie 3: Losowanie liczby od 1 do 49
void zadanie3()
{
    cout << "Wylosowana liczba: " << losuj(1, 49) << endl;
}

// Zadanie 4: Lotto - 6 roznych liczb
void zadanie4()
{
    int liczby[6];
    int ile = 0;

    while (ile < 6)
    {
        int kandydat = losuj(1, 49);
        bool powtorzenie = false;

        for (int i = 0; i < ile; i++)
        {
            if (liczby[i] == kandydat)
            {
                powtorzenie = true;
            }
        }

        if (!powtorzenie)
        {
            liczby[ile] = kandydat;
            ile++;
        }
    }

    cout << "Wylosowane liczby Lotto: ";

    for (int i = 0; i < 6; i++)
    {
        cout << liczby[i] << " ";
    }

    cout << endl;
}

// Zadanie 5: Symulacja rzutu kostka
void zadanie5()
{
    cout << "Wynik rzutu kostka: " << losuj(1, 6) << endl;
}

// Zadanie 6: Macierz 5x5 z liczbami losowymi od 0 do 99
void zadanie6()
{
    int macierz[5][5];

    for (int i = 0; i < 5; i++)
    {
        for (int j = 0; j < 5; j++)
        {
            macierz[i][j] = losuj(0, 99);
        }
    }

    cout << "Macierz 5x5:" << endl;

    for (int i = 0; i < 5; i++)
    {
        for (int j = 0; j < 5; j++)
        {
            cout << macierz[i][j] << "\t";
        }

        cout << endl;
    }
}

// Zadanie 7: Tabela studentow
void zadanie7()
{
    string dane[4][3] = {
        {"Anna", "Kowalska", "10001"},
        {"Jan", "Nowak", "10002"},
        {"Maria", "Wisniewska", "10003"},
        {"Piotr", "Zielinski", "10004"}
    };

    cout << "Imie\tNazwisko\tNumer indeksu" << endl;

    for (int i = 0; i < 4; i++)
    {
        cout << dane[i][0] << "\t"
             << dane[i][1] << "\t\t"
             << dane[i][2] << endl;
    }

}

// Zadanie 8: Tabliczka mnozenia 10x10
void zadanie8()
{
    cout << "Tabliczka mnozenia 10x10:" << endl;
    cout << "\t";

    for (int j = 1; j <= 10; j++)
    {
        cout << j << "\t";
    }

    cout << endl;

    for (int i = 1; i <= 10; i++)
    {
        cout << i << "\t";

        for (int j = 1; j <= 10; j++)
        {
            cout << i * j << "\t";
        }

        cout << endl;
    }
}

// Zadanie 9: Gra Zgadnij liczbe
void zadanie9()
{
    char ponownie;

    do
    {
        int min, max;

        cout << "Podaj dolna granice: ";
        cin >> min;

        cout << "Podaj gorna granice: ";
        cin >> max;

        while (max < min)
        {
            cout << "Gorna granica nie moze byc mniejsza."
                 << " Podaj ja ponownie: ";
            cin >> max;
        }

        int wylosowana = losuj(min, max);
        int strzal;
        int proby = 0;

        cout << "Zgadnij wylosowana liczbe!" << endl;

        do
        {
            cout << "Twoj strzal: ";
            cin >> strzal;
            proby++;

            if (strzal < wylosowana)
            {
                cout << "Wylosowana liczba jest wieksza." << endl;
            }
            else if (strzal > wylosowana)
            {
                cout << "Wylosowana liczba jest mniejsza." << endl;
            }

        } while (strzal != wylosowana);

        cout << "Brawo, trafiles!" << endl;
        cout << "Liczba prob: " << proby << endl;

        cout << "Czy losowac kolejna liczbe? (t/n): ";
        cin >> ponownie;

    } while (ponownie == 't' || ponownie == 'T');
}

// Zadanie 10: Silnia obliczana rekurencyjnie
unsigned long long silnia(int n)
{
    if (n <= 1)
    {
        return 1;
    }

    return static_cast<unsigned long long>(n) * silnia(n - 1);
}

void zadanie10()
{
    int n;

    cout << "Podaj liczbe calkowita z zakresu 0..20: ";
    cin >> n;

    while (n < 0 || n > 20)
    {
        cout << "Podaj liczbe od 0 do 20: ";
        cin >> n;
    }

    cout << n << "! = " << silnia(n) << endl;
}

// Funkcja glowna programu
int main()
{
    // Ustawienie ziarna generatora tylko raz
    srand(static_cast<unsigned int>(time(NULL)));

    int wybor;

    do
    {
        cout << "\n===== LABORATORIUM 2 - MENU =====" << endl;
        cout << "1. Liczby w odwrotnej kolejnosci" << endl;
        cout << "2. Macierz 3x3 - wczytaj i wyswietl" << endl;
        cout << "3. Losowanie liczby 1..49" << endl;
        cout << "4. Lotto - 6 roznych liczb" << endl;
        cout << "5. Rzut kostka" << endl;
        cout << "6. Losowa macierz 5x5" << endl;
        cout << "7. Tabela studentow" << endl;
        cout << "8. Tabliczka mnozenia 10x10" << endl;
        cout << "9. Gra Zgadnij liczbe" << endl;
        cout << "10. Silnia - rekurencja" << endl;
        cout << "0. Zakoncz" << endl;
        cout << "Wybierz zadanie: ";

        cin >> wybor;

        switch (wybor)
        {
            case 1:
                zadanie1();
                break;

            case 2:
                zadanie2();
                break;

            case 3:
                zadanie3();
                break;

            case 4:
                zadanie4();
                break;

            case 5:
                zadanie5();
                break;

            case 6:
                zadanie6();
                break;

            case 7:
                zadanie7();
                break;

            case 8:
                zadanie8();
                break;

            case 9:
                zadanie9();
                break;

            case 10:
                zadanie10();
                break;

            case 0:
                cout << "Koniec programu." << endl;
                break;

            default:
                cout << "Nie ma takiej opcji. Wybierz 0-10." << endl;
        }

    } while (wybor != 0);

    return 0;
}
