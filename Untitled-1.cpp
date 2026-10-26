
#include <iostream>
#include <string>
#include <cmath>
using namespace std;

const double PI = 3.14159265;

// Zadanie 6: funkcje geometryczne
double poleKwadratu(double a)
{
    return a * a;
}

double poleKola(double r)
{
    return PI * r * r;
}

double obwodKwadratu(double a)
{
    return 4 * a;
}

double obwodKola(double r)
{
    return 2 * PI * r;
}

// Zadanie 8 i 9: funkcja max
double maxLiczba(double a, double b)
{
    if (a > b)
        return a;
    else
        return b;
}

// Zadanie 10: silnia
unsigned long long silnia(int n)
{
    unsigned long long wynik = 1;

    for (int i = 1; i <= n; i++)
    {
        wynik = wynik * i;
    }

    return wynik;
}

int main()
{
    int wybor;

    do
    {
        cout << "\n========== MENU GLOWNE ==========" << endl;
        cout << "1. Wyswietl imie" << endl;
        cout << "2. Pole kwadratu" << endl;
        cout << "3. Pole kola" << endl;
        cout << "4. Obwod kwadratu" << endl;
        cout << "5. Obwod kola" << endl;
        cout << "6. Kalkulator pol i obwodow" << endl;
        cout << "7. Kalkulator arytmetyczny" << endl;
        cout << "8. Znajdz wieksza z dwoch liczb" << endl;
        cout << "9. Znajdz najwieksza z pieciu liczb" << endl;
        cout << "10. Oblicz silnie" << endl;
        cout << "0. Zakoncz program" << endl;
        cout << "=================================" << endl;
        cout << "Wybierz zadanie: ";

        cin >> wybor;

        switch (wybor)
        {
            case 1:
            {
                // Zadanie 1
                string imie;

                cout << "Podaj imie: ";
                cin >> imie;

                cout << "Twoje imie to: " << imie << endl;
                break;
            }

            case 2:
            {
                // Zadanie 2
                double a;

                cout << "Podaj bok kwadratu: ";
                cin >> a;

                cout << "Pole kwadratu = "
                     << poleKwadratu(a) << endl;
                break;
            }

            case 3:
            {
                // Zadanie 3
                double r;

                cout << "Podaj promien kola: ";
                cin >> r;

                cout << "Pole kola = "
                     << poleKola(r) << endl;
                break;
            }

            case 4:
            {
                // Zadanie 4
                double a;

                cout << "Podaj bok kwadratu: ";
                cin >> a;

                cout << "Obwod kwadratu = "
                     << obwodKwadratu(a) << endl;
                break;
            }

            case 5:
            {
                // Zadanie 5
                double r;

                cout << "Podaj promien kola: ";
                cin >> r;

                cout << "Obwod kola = "
                     << obwodKola(r) << endl;
                break;
            }

            case 6:
            {
                // Zadanie 6
                int opcja;
                double x;

                cout << "\n--- KALKULATOR GEOMETRYCZNY ---" << endl;
                cout << "1. Pole kwadratu" << endl;
                cout << "2. Pole kola" << endl;
                cout << "3. Obwod kwadratu" << endl;
                cout << "4. Obwod kola" << endl;
                cout << "Wybierz opcje: ";
                cin >> opcja;

                switch (opcja)
                {
                    case 1:
                        cout << "Podaj bok: ";
                        cin >> x;
                        cout << "Pole = "
                             << poleKwadratu(x) << endl;
                        break;

                    case 2:
                        cout << "Podaj promien: ";
                        cin >> x;
                        cout << "Pole = "
                             << poleKola(x) << endl;
                        break;

                    case 3:
                        cout << "Podaj bok: ";
                        cin >> x;
                        cout << "Obwod = "
                             << obwodKwadratu(x) << endl;
                        break;

                    case 4:
                        cout << "Podaj promien: ";
                        cin >> x;
                        cout << "Obwod = "
                             << obwodKola(x) << endl;
                        break;

                    default:
                        cout << "Nieprawidlowa opcja!" << endl;
                }

                break;
            }

            case 7:
            {
                // Zadanie 7
                double a, b;
                char znak;

                cout << "Podaj dwie liczby: ";
                cin >> a >> b;

                cout << "Wybierz dzialanie (+, -, *, /): ";
                cin >> znak;

                switch (znak)
                {
                    case '+':
                        cout << "Wynik = " << a + b << endl;
                        break;

                    case '-':
                        cout << "Wynik = " << a - b << endl;
                        break;

                    case '*':
                        cout << "Wynik = " << a * b << endl;
                        break;

                    case '/':
                        if (b != 0)
                            cout << "Wynik = " << a / b << endl;
                        else
                            cout << "Blad: dzielenie przez zero!" << endl;
                        break;

                    default:
                        cout << "Nieznane dzialanie!" << endl;
                }

                break;
            }

            case 8:
            {
                // Zadanie 8
                double a, b;

                cout << "Podaj dwie liczby: ";
                cin >> a >> b;

                cout << "Wieksza liczba = "
                     << maxLiczba(a, b) << endl;
                break;
            }

            case 9:
            {
                // Zadanie 9
                double liczba, najwieksza;

                cout << "Podaj 1. liczbe: ";
                cin >> najwieksza;

                for (int i = 2; i <= 5; i++)
                {
                    cout << "Podaj " << i << ". liczbe: ";
                    cin >> liczba;

                    najwieksza = maxLiczba(najwieksza, liczba);
                }

                cout << "Najwieksza liczba = "
                     << najwieksza << endl;
                break;
            }

            case 10:
            {
                // Zadanie 10
                int n;

                cout << "Podaj n (od 0 do 20): ";
                cin >> n;

                if (n < 0 || n > 20)
                {
                    cout << "Podaj liczbe z zakresu 0-20!" << endl;
                }
                else
                {
                    cout << n << "! = " << silnia(n) << endl;
                }

                break;
            }

            case 0:
                cout << "Koniec programu." << endl;
                break;

            default:
                cout << "Nie ma takiego zadania!" << endl;
        }

    } while (wybor != 0);

    return 0;
}
