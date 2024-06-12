//
// Created by 22267 on 24-6-12.
//

#include<iostream>

using namespace std;

int main() {
    // "&" 可以是【引用声明符】，也可以是【取址运算符】，意义不同，注意区分。
    // "*" 可以是【指针声明符】，【解引用符号】，【乘法运算符】，意义不同，注意区分。
    int i = 42;
    int *p1 = &i; // 取址运算符
    *p1 = *p1 * *p1;
    cout<<&i<<endl;
}