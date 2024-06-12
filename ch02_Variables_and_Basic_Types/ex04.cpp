#include <iostream>

int main()
{
    unsigned int u = 10, u2 = 42;   // 无符号整型
    std::cout << u - u2 << std::endl; // 下溢出 -32 -> 2^32 -32，即 4294967264
    std::cout << u2 - u << std::endl; // 32

    int i = 10, i2 = 42;
    std::cout << i2 - i << std::endl;   // 32
    std::cout << i - i2 << std::endl;   // -32
    std::cout << i - u << std::endl;    // 0    // 不同类型数值之间的运算，涉及到隐式类型转换
    std::cout << u - i << std::endl;    // 0    // 低精度的会转化为高精度的类型

    return 0;
}