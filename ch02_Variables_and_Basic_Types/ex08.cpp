#include <iostream>

int main()
{
    std::cout << 2 << "\115\012"; // 根据 ASCII表，"\012"为 endl换行符，"\115"为字符 M
    std::cout << 2 << "\011\115\012"; // "\011"为制表符
    
    return 0;
}