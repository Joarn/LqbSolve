//
// Created by MengHaitao on 2020/3/6 0006.
//
/**
 * 试题 基础练习 闰年判断
 */
#include <iostream>

using namespace std;
int year;

int main() {
    cin>>year;
    if(year%400==0||year%4==0&&year%100!=0)
        cout<<"yes"<<endl;
    else
        cout<<"no"<<endl;
    return 0;
}
