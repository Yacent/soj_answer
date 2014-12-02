#include<iostream>
#include<queue>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        queue<int>qu;
        priority_queue<int>p_qu;
        int n, pos, min = 0;
        cin >> n >> pos;
        for (int i = 0; i < n; i++) {
            int pri;
            cin >> pri;
            qu.push(pri);
            p_qu.push(pri);
        }
        for (; pos >= 0;) {
            if (qu.front() == p_qu.top()) {
                qu.pop();
                p_qu.pop();
                min++;
                pos--;
            } else {
                int tmp = qu.front();
                qu.pop();
                qu.push(tmp);
                if (pos == 0) {
                    pos = qu.size() - 1;
                } else {
                    pos--;
                }
            }
        }
        cout << min << endl;
    }
    return 0;
}
