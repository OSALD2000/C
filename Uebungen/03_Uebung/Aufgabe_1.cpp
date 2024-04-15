#include <iostream>
#include <string.h>

using namespace std;

int main(int argc, char* argv[], char* envp[])
{
    int zahl1, zahl2;
    long double result;
    char op;

    cout << "geben Sie erste Zahl ein !! \n";

    cin >> zahl1;

    cout << "geben Sie bitte eine Operation ein + , - , * , /, % !! \n";

    cin >> op;

    cout << "geben Sie zweite Zahl ein !! \n";

    cin >> zahl2;
    

    switch (op)
    {
        case '*':
            result = (long double) zahl1 * zahl2;
            break;


        case '-':
            result = (long double) zahl1 - zahl2;
            break;


        case '+':
            result = (long double) zahl1 + zahl2;
            break;

        case '/':
            result = (long double) zahl1 / zahl2;
            break;


        case '%':
            result = zahl1 % zahl2;
            break;
                            
    }


    cout << "result = " << result << "\n";
}