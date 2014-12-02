//  本题关键是找到夫妻之间的对应关系 
#include<iostream>
#include<stack>

using namespace std;

int main() {
    int n;
    while (cin >> n && n != 0) {
        int a[200002] = {0};
        int hus, wife;
        stack<int>st;
        for (int i = 0; i < n; i++) {
            cin >> hus >> wife;
            if (hus < wife) {
                a[wife] = hus;
            } else {
                a[hus] = wife;
            }
        }
        for (int i = 1; i <= 2 * n; i++) {
            if (a[i] == 0) {
                st.push(i);
            } else if (a[i] == st.top()) {
                st.pop();
            } else {
                break;
            }
        }
        if (st.empty()) {
            cout << "Yes" << endl;
        } else {
            cout << "No" << endl;
        }
    }
}
