
#include <iostream>



int main(void)
{
    int i = 0;
    int sum = 0;

    while (i <= 100) {
        sum = sum + i;
        i = i + 1;
    }

    std::cout << sum << std::endl;

    return 0;
}
