/*ps��1.������Ҫ��ʽ����(n*n - n)/2 -1
      2.�ǵ�n���ַ�������long long����Щ���ֻᳬ��int
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
