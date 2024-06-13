#include <iostream>
#include <string>
using std::cin;
using std::cout;
using std::endl;

size_t utf8_length(const std::string &str) {
    size_t length = 0;
    size_t i = 0;

    while (i < str.size()) {
        unsigned char c = str[i];
        if ((c & 0x80) == 0) {
            // 1-byte character
            i += 1;
        } else if ((c & 0xE0) == 0xC0) {
            // 2-byte character
            if (i + 1 < str.size() && (str[i + 1] & 0xC0) == 0x80) {
                i += 2;
            } else {
                throw std::runtime_error("Invalid UTF-8 character encountered.");
            }
        } else if ((c & 0xF0) == 0xE0) {
            // 3-byte character
            if (i + 2 < str.size() && (str[i + 1] & 0xC0) == 0x80 && (str[i + 2] & 0xC0) == 0x80) {
                i += 3;
            } else {
                throw std::runtime_error("Invalid UTF-8 character encountered.");
            }
        } else if ((c & 0xF8) == 0xF0) {
            // 4-byte character
            if (i + 3 < str.size() && (str[i + 1] & 0xC0) == 0x80 && (str[i + 2] & 0xC0) == 0x80 && (str[i + 3] & 0xC0)
                == 0x80) {
                i += 4;
            } else {
                throw std::runtime_error("Invalid UTF-8 character encountered.");
            }
        } else {
            throw std::runtime_error("Invalid UTF-8 character encountered.");
        }
        length++;
    }
    return length;
}

int main() {
    // Clion 确保已解决输出控制台乱码问题
    // https://blog.csdn.net/vodka_nice/article/details/120135412
    std::string str_in1, str_in2;
    cin >> str_in1 >> str_in2;

    if (str_in1.size() != str_in2.size()) {
        // 如果不等长，输出长度较长的字符串
        if (str_in1.size() > str_in2.size()) {
            cout << str_in1 << ", char size: " << utf8_length(str_in1) << ", byte size: " << str_in1.size() <<
                    ", byte length: " << str_in1.length() << endl;
        } else {
            cout << str_in2 << ", char size: " << utf8_length(str_in2) << ", byte size: " << str_in2.size() <<
                    ", byte length: " << str_in2.length() << endl;
        }
    }

    return 0;
}
