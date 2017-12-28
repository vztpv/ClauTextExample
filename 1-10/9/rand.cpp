
#include <ctime>
#include <iostream>
#include <cstdlib>



int main(void)
{
    srand(time(nullptr));

    std::cout << rand()%10 + 1 << std::endl;

    return 0;
}
