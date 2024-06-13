#include <iostream>
#include <string>
using std::cin;
using std::cout;
using std::endl;
int main()
{
    std::string str_in;

    while(cin>>str_in) //一次输入一个单词（以空格为界）
    {
        cout << str_in << endl;
    }
    return 0;
}