#include <iostream>
#include <cmath>
#include <array>
#include <iomanip> 


long double calcuateA(double a, double b)
{
    return (a + b)/2;
}



std::array<long double, 2> calculateWurzel(long double a, long double b, int A)
{
    std::array<long double, 2> r;

    a = calcuateA(a, b);

    b = A / a;

    if (std::abs (a - b) < 0.00000000001L)
    {
        r[0] = a;
        r[1] = b;

        return r;
    }
    else{
        std::cout << std::fixed << std::setprecision(30) << "A und B" << " " << a << " " << b << std::endl;
        return calculateWurzel(a, b, A);
    }
 
}


int main()
{
        
    int x = 0;
    long double a = 0.0;
    long double b = 0.0;

    std::cout << "Hallo geben Sie eine Zahl ein !!" << std::endl;
    std::cin >> x;
    

    auto result = calculateWurzel(x, 1, x);

    a = result[0];
    b = result[1];

    std::cout << std::fixed << std::setprecision(30) << "Wurzel von " << x << " = " << a << std::endl;

    return 0;
}