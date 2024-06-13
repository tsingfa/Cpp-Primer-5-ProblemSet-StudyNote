#include <string>
#include <iostream>

using std::cin;
using std::cout;
using std::endl;
using std::string;

int main() {
    string str = "aaa 啊啊啊";

    for (auto &c: str) { // &引用传递，实际修改了 str中的字符
        c = 'X'; // 每个 char是一个字节
    }
    cout << str << endl;

    return 0;
}
