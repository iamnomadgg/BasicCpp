#include <iostream>

int main()
{
    int val = 5;
    int &refVal = val;
    std::cout << val << " " << refVal << std::endl;
    val = 10;
    std::cout << val << " " << refVal << std::endl;
    refVal = 20;
    std::cout << val << " " << refVal << std::endl;
    return 0;
}
