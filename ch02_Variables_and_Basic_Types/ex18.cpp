//
// Created by 22267 on 24-6-12.
//

#include<iostream>

using namespace std;

int main() {
    int a = 0, b = 1;
    int *p1 = &a, *p2 = p1;
    cout<<"before"<<endl;
    cout<<"p1 value: "<<*p1<<endl;
    cout<<"p2 value: "<<*p2<<endl;

    // change the value of a pointer.
    p1 = &b;
    // change the value to which the pointer points
    *p2 = b;

    cout<<"after"<<endl;
    cout<<"p1 value: "<<*p1<<endl;
    cout<<"p2 value: "<<*p2<<endl;
}