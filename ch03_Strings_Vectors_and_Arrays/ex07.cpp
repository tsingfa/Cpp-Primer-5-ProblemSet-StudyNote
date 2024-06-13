#include <string>
#include <iostream>

using std::cin;
using std::cout;
using std::endl;
using std::string;

int main() {
    string str = "1122aabbcc 33";

    for (char c: str) {// 值传递，修改的是字符的副本，没有修改实际的 str
        c = 'X';
    }
    cout << str << endl;

    return 0;
}
