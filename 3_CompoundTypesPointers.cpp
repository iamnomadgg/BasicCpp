#include <iostream>

int main()
{
    int val = 255;
    int *pVal = &val;
    int *pVal2 = pVal;
    std::cout << val << " " << *pVal << std::endl;
    std::cout << val << " " << *pVal2 << std::endl;
}
