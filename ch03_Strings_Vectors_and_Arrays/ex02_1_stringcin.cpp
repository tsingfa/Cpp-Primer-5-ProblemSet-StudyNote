#include <iostream>
#include <string>
using std::cin;
using std::cout;
using std::endl;
int main()
{
    std::string str_in;
    while(getline(cin,str_in)) // 读取输入的一整行（以回车为界）
    {
        cout << str_in << endl;
    }

    return 0;
}