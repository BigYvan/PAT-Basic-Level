#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main(int argc, const char * argv[]) {
    int n, max = 0;
    cin >> n;
    vector<int>a(n), b(n), c;
    for (int i = 0; i < n; i++) {
        cin >> a[i];
        b[i] = a[i];
    }
    sort(a.begin(), a.end());
    for (int i = 0; i < n; i++) {
        if (a[i] == b[i] && b[i] > max) c.push_back(b[i]);
        if (b[i] > max) max = b[i];
    }
    cout << c.size() << endl;
    for (int i = 0; i < c.size(); i++) {
        if (i != 0) cout << ' ';
        cout << c[i];
    }
    cout << endl;
    return 0;
}
