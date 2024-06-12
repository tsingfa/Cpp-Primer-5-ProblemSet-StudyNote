//
// Created by 22267 on 24-6-12.
//

#include <iostream>
#include <typeinfo>

using namespace std;

int main() {
    // 指针类型声明时，*符号只适用于最近的一个声明标识符，其他标识符不受影响
    int* ip, ip2; // ip为指针，ip2为 int
    cout<<typeid(ip).name()<<" "<<ip<<endl;
    cout<<typeid(ip2).name()<<" "<<ip2<<endl;
}