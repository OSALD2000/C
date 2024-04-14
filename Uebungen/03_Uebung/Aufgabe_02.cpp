#include <iostream>
#include <string.h>

using namespace std;

int main(int argc, char* argv[], char* envp[])
{
    int zahl = 0;
    int n, digit, rev = 0;

    cout << "geben Sie ein Zahl bitte ein \n";

    cin >> zahl;

    n = zahl;

    do {
        digit = zahl % 10;
        rev = (rev * 10) + digit;
        zahl = zahl / 10;
    } while (zahl != 0);


    cout << "ende das Umkehr zahl ist " << rev << " \n";

    if (rev == n) {
        cout << "Nummer ist Pa..  \n";
    }
    else {
        cout << "Nummer ist nicht Pa..  \n";
    }



}