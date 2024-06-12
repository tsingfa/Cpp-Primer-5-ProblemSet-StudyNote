//
// Created by 22267 on 24-6-12.
//

#include <iostream>

using namespace std;

int main() {
    const int a = 666;
    int i = 1;
    // 编译报错
    // int &m = 0; // 编译错误，非const左值引用不能绑定到右值
    // int &n = a; // 编译错误，非const左值引用不能绑定到const左值

    // 编译成功
    int &r = i;
    cout<<typeid(r).name()<<" "<<r<<endl;
    const int &p = 0;
    const int &q = a;
    const int* qq =&a;
    const int *const qqq =&a;

    // 左值引用（对有分配内存的对象的引用）
    int x = 10;
    int &ref = x;  // ref 是 x 的左值引用

    // 右值引用（对临时性对象、表达式的引用），常用于 移动语义 和 完美转发
    int &&rref = 5;  // rref 是 5 的右值引用

}
