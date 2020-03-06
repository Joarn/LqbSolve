//
// Created by MengHaitao on 2020/3/6 0006.
//
/**
 * Fibonacci数列
 */
#include <iostream>

using namespace std;
int arr[10000001];

int main() {
    long n;
    cin >> n;
    arr[0] = arr[1] = 1;
    for (int i = 2; i < n; ++i) {
        arr[i]=(arr[i-1]+arr[i-2])%10007;
    }
    cout<<arr[n-1]<<endl;
    return 0;
}
