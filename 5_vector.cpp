#include <iostream>
#include <vector>

int main()
{
    std::vector<int> myVec;
    myVec = {1, 2, 3, 4, 5, 6};
    for(int i: myVec){
        std::cout << i << std::endl;
    }
}
