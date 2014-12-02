/*本题应该注意ba、b情况*/ 
#include<iostream>
#include<string>
#include<algorithm>
using namespace std;

bool cmp(string s1, string s2) {
    return (s1 + s2 < s2 + s1);
}

int main () {
    int t;
    cin >> t;
    for (int i = 0; i < t; i++) {
        int n;
        cin >> n;
        string *ss = new string[n];
        for (int j = 0; j < n; j++) {
            cin >> ss[j];
        }
        sort(ss, ss + n, cmp);
        string result = "";
        for (int j = 0; j < n; j++) {
            result += ss[j];
        }
        cout << result << endl;
    }
    return 0;
}
