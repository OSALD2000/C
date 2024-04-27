#include <iostream>

typedef struct
{
    int a, b, c, d, e, f, g;

    void print() {
        std::cout << a << std::endl;
        std::cout << b << std::endl;
        std::cout << c << std::endl;
        std::cout << d << std::endl;
        std::cout << e << std::endl;
        std::cout << f << std::endl;
        std::cout << g << std::endl;
    }

    void printReversed() {
        std::cout << g << std::endl;
        std::cout << f << std::endl;
        std::cout << e << std::endl;
        std::cout << d << std::endl;
        std::cout << c << std::endl;
        std::cout << b << std::endl;
        std::cout << a << std::endl;
    }
} TTest;




int main() {

    TTest zahlen;
    zahlen.a = 1;
    zahlen.b = 12;
    zahlen.c = 1234;
    zahlen.d = 12345;
    zahlen.e = 123456;
    zahlen.f = 1234567;
    zahlen.g = 12345678;


    zahlen.print();

    zahlen.printReversed();

    return 0;
}