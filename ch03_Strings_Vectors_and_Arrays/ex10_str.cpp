#include <iostream>
#include <string>
using std::cin;
using std::cout;
using std::endl;

int main() {
    std::string str_in, str;
    cin >> str_in;
    for (auto c: str_in) // 去除字符串中的标点符号
        if (!ispunct(c))
            str += c;
    cout << str << endl;
    return 0;
}
