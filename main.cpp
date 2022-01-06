#include <iostream>
#include <cstring>

using namespace std;

void szyfruj(int klucz, char tab[])
{
    int dlugosc_tab = strlen(tab);

    for(int i=0; i<dlugosc_tab; i++)
        if(tab[i] + klucz <= 'z')
            tab[i] = tab[i] + klucz;
        else
            tab[i] = tab[i] + klucz - 26;
}

void deszyfruj(int klucz, char tab[])
{
    int dlugosc_tab = strlen(tab);

    for(int i=0; i<dlugosc_tab; i++)
        if(tab[i] + klucz >= 'a')
            tab[i] = tab[i] + klucz;
        else
            tab[i] = tab[i] + klucz + 26;
}

int main()
{

    char tab[100];

    int klucz;

    cout << "Podaj wyraz skladajacy z malych liter: ";
    cin >> tab;

    cout << "Podaj klucz z przedzialu od 1 do 25: ";
    cin >> klucz;

    szyfruj(-klucz, tab);

    cout << "Wyraz po zaszyfrowaniu: " << tab << endl;

    cout << endl;

    deszyfruj(klucz, tab);

    cout << "Wyraz po odszyfrowaniu: " << tab << endl;

    return 0;
}
