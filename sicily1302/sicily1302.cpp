/*ps：1.本题主要公式就是(n*n - n)/2 -1
      2.记得n的字符类型是long long，有些数字会超过int
      */ 
#include<iostream>
using namespace std;

int main() {
    long long int n = 0;
    while (cin >> n && (n > 0 && n < 1000000)) {
        if (n == 1) {
            cout << "1" << endl;
        } else {
            cout << (n * n - n)/ 2 - 1 << endl;
        }
    }
    return 0;
}
