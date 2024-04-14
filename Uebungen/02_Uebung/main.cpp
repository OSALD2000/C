#include <iostream>
#include <string.h>
using namespace std;

int main(int argc, char* argv[], char* envp[])
{
    string full_name;
    int age;


    cout << " Hallo User \n" << "Please enter your full name and age \n";


    cout << " Enter Full Name !! \n  ==>   ";

    getline(cin, full_name);

    cout << "\n Enter Age !! \n  ==>   ";


    cin >> age;


    cout << "\n Hello " << full_name << " you are " << age << " year old! \n";


    return 0;
}