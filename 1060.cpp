#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

bool cmp(int a, int b){
    return a > b;
}

int main(int argc, const char * argv[]) {
    int n;
    cin >> n;
    vector<int> a(n);
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }
    sort(a.begin(), a.end(), cmp);
    int ading = 0;
    for (int i = 0; i < n; i++) {
        if (a[i] > i + 1 && i + 1 > ading) {
            ading = i + 1;
        }
    }
    cout << ading;
    return 0;
}
