#include <iostream>
#include <typeinfo>

int main()
{
    const int ci = 0, &cj = ci;
    decltype(ci) x = 0;
    decltype(cj) y = x;
    decltype(cj) z = 0;

    std::cout << typeid(cj).name() << std::endl;
    std::cout << typeid(ci).name() << std::endl;
    std::cout << typeid(x).name() << std::endl;
    std::cout << typeid(y).name() << std::endl;
    std::cout << typeid(z).name() << std::endl;
    
}
