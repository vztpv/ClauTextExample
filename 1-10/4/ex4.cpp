
// +, -, *, /, %

#include <iostream>

int main(void)
{
    int a = 3;
    int b = 4;
    double c = 3.0;
    double d = 4.5;

    std::cout << a + b << std::endl;
    std::cout << a - b << std::endl;
    std::cout << a * b << std::endl;
    std::cout << a / b << std::endl;
    std::cout << a % b << std::endl;

    
    std::cout << c + d << std::endl;
    std::cout << c - d << std::endl;
    std::cout << c * d << std::endl;
    std::cout << c / d << std::endl;

    return 0;
}
