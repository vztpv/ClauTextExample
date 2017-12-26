
#include <iostream>

void func1() {
    
}
int func2(int x, int y, int z) 
{
    return x + y + z;
}

int main(void)
{
    int ret_val;

    ret_val = func2(1, 2, 1 + 2);

    func1();

    std::cout << ret_val << std::endl;

    return 0;
}
