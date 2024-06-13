#include <string>
#include <iostream>
#include <vector>

using std::cin;
using std::cout;
using std::endl;
using std::string;
using std::vector;

int main() {
    vector<string> str_v;
    string s;
    while (cin >> s) {
        str_v.push_back(s);
    }

    for (auto &c1: str_v) { //每个单词
        for (auto &c2: c1) {
            c2 = toupper(c2); // 字符小写转大写
        }
    }

    for (const auto &c: str_v) {
        cout << c << endl; // 每个词占一行
    }

    return 0;
}
