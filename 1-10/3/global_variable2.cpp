
#include <iostream>


struct {
    int x;
    int y;
    int z;
} data = { 2, 3, 0 };

int main(void)
{
    data.z = data.x + data.y;

    std::cout << data.z << std::endl;

    return 0;
}