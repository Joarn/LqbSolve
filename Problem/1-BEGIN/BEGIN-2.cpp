//
// Created by MengHaitao on 2020/3/6 0006.
//
/**
 * 试题 入门训练 序列求和
 */
 /**
  * 找寻数列的规律，求和可以简便计算，简化为(1+n)*n/2
  */
#include <iostream>

using namespace std;

int main() {
    long long n;
    cin >> n;
    cout << (1 + n) * n / 2 << endl;
    return 0;
}
