#include <iostream>
#include "cost_func.hpp"

int main()
{
    std::cout << "match('a', 'a') = " << match('a', 'a') << std::endl;
    std::cout << "match('a', 'b') = " << match('a', 'b') << std::endl;
    std::cout << "indel('x') = " << indel('x') << std::endl;
    
    return 0;
}