#include <iostream>
#include <string>
using std::cin;
using std::cout;
using std::endl;

int main() {
    std::string str_in, str_sum;

    while (cin >> str_in) { // 回车后使用 Ctrl + D（文件结束符 EOF），跳出循环
        str_sum += str_in;
    }
    cout << str_sum << endl;
    return 0;
}
