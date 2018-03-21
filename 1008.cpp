#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main(int argc, const char * argv[]) {
    int n, m;
    cin >> n >> m;
    vector<int>list(n);
    for (int i = 0; i < n; i++) {
        cin >> list[i];
    }
    if (m != n && m != 0) {
        if (m > n) {
            m = m - n;
        }
        reverse(list.begin(), list.end());
        reverse(list.begin(), list.begin() + m);
        reverse(list.begin() + m, list.end());
    }
    cout << list[0];
    for (int i = 1; i < n; i++) {
        cout <<' ' << list[i];
    }
    return 0;
}
//重点考虑m > n
